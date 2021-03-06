[![Click me to play video :)](/doc/img/youtube.jpg)](https://www.youtube.com/watch/xcpKJU7HzQs)

[This video shows boxed version with latest improvements](https://www.youtube.com/watch?v=c8wJdQJHX8o)

This is a weather station with forecast for three days, current temperature and a clock with local time and date.

The whole project is based on Arduino, NodeMCU provides access to the Internet over WiFi. The display is built from single LEDs. Since they can be really bright it adopts illumination based on light conditions.
<img src="/doc/img/ledclockarch.png" width="640px"/>

Let's start from the beginning ;)

I've found those 8x8 LED modules:

<img src="/doc/img/led8x8.jpg" width="320px"/>

so I've decided to combine few to build a display. In my case there are 3 lines, each consists of 8 modules, 24 it total, this give us 1532 single LEDs! 

To drive single module I've chosen MAX72xx, I also wanted to improve my soldering skills, so I've decided to go for 24 PIN DIP chips and solder them to prototype boards:

<img src="/doc/img/cables.jpg" width="640px"/>

Well that worked out pretty well when it comes to those skills, but I would recommend to use LED modules combined with MAX Chip, this will save you at least few hours, not mentioning time spent afterwards when single cable gets loose ;) Such combo-module has only 3 wires instead of 16.

So we have hardware part for our display: 24 led modules with drivers. Now it's time to light them up! I've decided to go for Arduino Mega, because it has two serial ports, so it's easier to debug things (one port will be used for communication with EPS8266). You could also use Uno, in this case you would have to daisy chain MAX chips and change addressing in software. I've used separate line for each Max chip, but Uno just does not have enough digital output pins.

I was looking for API that will join all led modules into one canvas, so that you can print spites on it without bothering with transitions between LED modules. I did not find anything that would make me happy so I've decided to implement  [one by myself](https://github.com/maciejmiklas/LEDDisplay).  It provides not only simple canvas, but fonts and few animations. Basically everything that will be needed to display time and weather.

So ... we have a display and API to control it. Now we need to get date and weather. Arduino does not support Internet connectivity and it definitely does not have enough resources to process incoming data. So I've decided to use NodeMCU. With few Lua scripts I was able to implement [simple API](https://github.com/maciejmiklas/NodeMCUUtils) that is accessible over serial port. Arduino connects over it with NodeMCU, obtains time, date, weather and displays it.

In order to provide date NodeMCU connects with NTP server and receives UTC time, afterwards it calculates local date from it. I could use one of Internet services to grab the local date, but I was looking for solution that will remain stable for long time. Those services can change their API or just go off-line, but NTP protocol will remain unchanged. In worst case you will have to change server name. Current implementation supports also failover trough many different servers, so probably you will not have to bother with it soon ;)

Getting the weather was a bit tricky, because I had to find API that will return response small enough so it could be parsed by NodeMCU. I've decided to use yahoo weather. They provide nice REST API with small and simple response. Hopefully they will keep interfaces stable for long time.....

# Putting things together
First you have to build the display as described in this project: https://github.com/maciejmiklas/LEDDisplay . You can use the same pin numbers on Mega, so that you will not have to alter software.

After the display is ready, you should connect ESP8266 and photo-resistor. Schematic below contains all hardware elements together:

<img src="/doc/img/LED_Clock_schem.png" width="640px"/>

# Software for Arduino Mega
This project (LEDClock) contains main software part,  you have to compile it and upload to Arduino. Compilation requires SPI module and two other libraries: https://github.com/maciejmiklas/LEDDisplay and https://github.com/maciejmiklas/ArdLog

In [this blog post](http://maciej-miklas.blogspot.com/2017/03/weather-station-based-on-arduino-and.html#sloeber) you will find instrucitons howto compile it using Sloeber.

# Software for NodeMCU/ESP32
In order to provide weather and time to Arduino you will have to clone this project: https://github.com/maciejmiklas/NodeMCUUtils , modify few scripts and upload those afterwards into NodeMCU. Here are the steps:

1. Compile firmware for NodeMCU/ESP32 so that it has all required modules: file, mqtt, gpio, net, node, tmr, uart, wifi, sjson. Theres is also already precomipled version in repo.

2. Edit *serial_api_clock.lua* and set UTC offset for your location. This will be required to calculate local date from UTC time. For most European countries it's already set to correct value. For US you will have to replace *require "date_format_europe"* with *require "date_format_america"* in _*init.lua_

3. Register at [Open Weather](https://openweathermap.org) to get application id, you will have to provide it in the next step.

4. Create new file called: *credentials.lua* and specify login data for WiFi connection, it's just one line, for example: 
```lua
cred = {ssid = 'openwifi', password = '123456789'}
owe.appid = 'your app id'
```

6. Upload all Lua scirpts from _/src_ and _/scr/init_ into NodeMCU.


# Matching LIB versions
* [LED Clock](https://github.com/maciejmiklas/LEDClock) - v1.x.x
* [LED Display](https://github.com/maciejmiklas/LEDDisplay) - v2.x.x
* [Arduino Logger](https://github.com/maciejmiklas/ArdLog) - v2.x.x
* [NodeMCU weather and clock](https://github.com/maciejmiklas/NodeMCUUtils) - v2.x.x
Replace x with latest version, the are all compatibile.
