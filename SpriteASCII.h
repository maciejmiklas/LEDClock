#ifndef SPRITES_H_
#define SPRITES_H_

#include "Sprite.h"

// http://www.pial.net/8x8-dot-matrix-font-generator-based-on-javascript-and-html/
// font copied from https://github.com/dhepper/font8x8/blob/master/font8x8_basic.h
#define ASCII_FONT_SIZE 128

Sprite ASCII_FONT[ASCII_FONT_SIZE] = { Sprite(8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0000
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0001
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0002
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0003
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0004
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0005
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0006
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0007
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0008
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0009
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+000A
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+000B
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+000C
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+000D
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+000E
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+000F
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0010
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0011
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0012
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0013
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0014
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0015
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0016
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0017
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0018
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0019
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+001A
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+001B
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+001C
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+001D
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+001E
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+001F
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0020 (space)
Sprite(8,8, 0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00), // U+0021 (!)
Sprite(8,8, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0022 (")
Sprite(8,8, 0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00), // U+0023 (#)
Sprite(8,8, 0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00), // U+0024 ($)
Sprite(8,8, 0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00), // U+0025 (%)
Sprite(8,8, 0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00), // U+0026 (&)
Sprite(8,8, 0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0027 (')
Sprite(8,8, 0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00), // U+0028 (()
Sprite(8,8, 0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00), // U+0029 ())
Sprite(8,8, 0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00), // U+002A (*)
Sprite(8,8, 0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00), // U+002B (+)
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06), // U+002C (,)
Sprite(8,8, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00), // U+002D (-)
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00), // U+002E (.)
Sprite(8,8, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00), // U+002F (/)
Sprite(8,8, 0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00), // U+0030 (0)
Sprite(8,8, 0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00), // U+0031 (1)
Sprite(8,8, 0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00), // U+0032 (2)
Sprite(8,8, 0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00), // U+0033 (3)
Sprite(8,8, 0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00), // U+0034 (4)
Sprite(8,8, 0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00), // U+0035 (5)
Sprite(8,8, 0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00), // U+0036 (6)
Sprite(8,8, 0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00), // U+0037 (7)
Sprite(8,8, 0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00), // U+0038 (8)
Sprite(8,8, 0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00), // U+0039 (9)
Sprite(8,8, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00), // U+003A (:)
Sprite(8,8, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06), // U+003B (//)
Sprite(8,8, 0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00), // U+003C (<)
Sprite(8,8, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00), // U+003D (=)
Sprite(8,8, 0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00), // U+003E (>)
Sprite(8,8, 0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00), // U+003F (?)
Sprite(8,8, 0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00), // U+0040 (@)
Sprite(8,8, 0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00), // U+0041 (A)
Sprite(8,8, 0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00), // U+0042 (B)
Sprite(8,8, 0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00), // U+0043 (C)
Sprite(8,8, 0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00), // U+0044 (D)
Sprite(8,8, 0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00), // U+0045 (E)
Sprite(8,8, 0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00), // U+0046 (F)
Sprite(8,8, 0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00), // U+0047 (G)
Sprite(8,8, 0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00), // U+0048 (H)
Sprite(8,8, 0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00), // U+0049 (I)
Sprite(8,8, 0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00), // U+004A (J)
Sprite(8,8, 0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00), // U+004B (K)
Sprite(8,8, 0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00), // U+004C (L)
Sprite(8,8, 0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00), // U+004D (M)
Sprite(8,8, 0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00), // U+004E (N)
Sprite(8,8, 0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00), // U+004F (O)
Sprite(8,8, 0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00), // U+0050 (P)
Sprite(8,8, 0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00), // U+0051 (Q)
Sprite(8,8, 0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00), // U+0052 (R)
Sprite(8,8, 0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00), // U+0053 (S)
Sprite(8,8, 0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00), // U+0054 (T)
Sprite(8,8, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00), // U+0055 (U)
Sprite(8,8, 0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00), // U+0056 (V)
Sprite(8,8, 0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00), // U+0057 (W)
Sprite(8,8, 0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00), // U+0058 (X)
Sprite(8,8, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00), // U+0059 (Y)
Sprite(8,8, 0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00), // U+005A (Z)
Sprite(8,8, 0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00), // U+005B ([)
Sprite(8,8, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00), // U+005C (\)
Sprite(8,8, 0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00), // U+005D (])
Sprite(8,8, 0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00), // U+005E (^)
Sprite(8,8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF), // U+005F (_)
Sprite(8,8, 0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00), // U+0060 (`)
Sprite(8,8, 0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00), // U+0061 (a)
Sprite(8,8, 0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00), // U+0062 (b)
Sprite(8,8, 0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00), // U+0063 (c)
Sprite(8,8, 0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00), // U+0064 (d)
Sprite(8,8, 0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00), // U+0065 (e)
Sprite(8,8, 0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00), // U+0066 (f)
Sprite(8,8, 0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F), // U+0067 (g)
Sprite(8,8, 0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00), // U+0068 (h)
Sprite(8,8, 0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00), // U+0069 (i)
Sprite(8,8, 0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E), // U+006A (j)
Sprite(8,8, 0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00), // U+006B (k)
Sprite(8,8, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00), // U+006C (l)
Sprite(8,8, 0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00), // U+006D (m)
Sprite(8,8, 0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00), // U+006E (n)
Sprite(8,8, 0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00), // U+006F (o)
Sprite(8,8, 0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F), // U+0070 (p)
Sprite(8,8, 0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78), // U+0071 (q)
Sprite(8,8, 0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00), // U+0072 (r)
Sprite(8,8, 0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00), // U+0073 (s)
Sprite(8,8, 0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00), // U+0074 (t)
Sprite(8,8, 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00), // U+0075 (u)
Sprite(8,8, 0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00), // U+0076 (v)
Sprite(8,8, 0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00), // U+0077 (w)
Sprite(8,8, 0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00), // U+0078 (x)
Sprite(8,8, 0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F), // U+0079 (y)
Sprite(8, 0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00), // U+007A (z)
Sprite(8, 0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00), // U+007B ({)
Sprite(8, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00), // U+007C (|)
Sprite(8, 0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00), // U+007D (})
Sprite(8, 0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00), // U+007E (~)
Sprite(8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00) // U+007F
		};

#endif /* SPRITES_H_ */