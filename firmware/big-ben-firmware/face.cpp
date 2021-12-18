#include "face.h"
#include <avr/pgmspace.h>

const unsigned char FACE[] PROGMEM{ /* 0X01,0X01,0XC8,0X00,0XC8,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFC,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,
0X07,0XCF,0XE0,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XC7,0XFF,0XE0,0X00,0X00,0X03,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,
0X00,0XFF,0XFF,0X83,0XFF,0XFF,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X1F,0XFF,0XBF,0XC7,0XF7,0XFF,0XF8,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
0X00,0X00,0XFF,0XFF,0X98,0X00,0X03,0XFF,0XFF,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X07,0XFF,0X90,0X0F,0XCF,0XE0,
0X0B,0XFF,0XE0,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC0,0X00,0X1F,0XFE,0X07,0X9F,0XCF,0XE7,0XE0,0XFF,0XF8,0X00,0X01,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X7F,0XC0,0X1F,0X9F,
0XCF,0XE7,0XF2,0X03,0XFE,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0X00,0X03,0XFF,0X0F,0XDF,0X99,0X86,0X67,0XF3,0XE1,0XFF,0XC0,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X0F,0XFC,0X4F,
0XCF,0X98,0X02,0X27,0XF3,0XF6,0X3F,0XF0,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0X81,0XCF,0XCF,0XD9,0XC6,0X67,0XE7,0XE7,0XC7,
0XFC,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X7F,
0X8F,0XE7,0XCF,0XDF,0XCF,0XE7,0XE7,0XE7,0XE1,0XFE,0X00,0X03,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X3E,0X0F,0XE7,0XCF,0XDF,0X81,0XE7,0XE7,
0XEF,0XEC,0X71,0X80,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,
0X06,0X18,0XCF,0XE7,0XE6,0X00,0X00,0X00,0X67,0XCF,0XCF,0X10,0XE0,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X0E,0X03,0XE7,0XF7,0XC0,0X07,0XCF,
0XC0,0X03,0XCF,0XCF,0XC0,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFC,0X00,0X3E,0X0F,0XE7,0XF0,0X07,0XFF,0XC7,0XFF,0XC0,0X1F,0X9F,0XF1,0XFC,0X00,
0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X7F,0X1F,0X73,0XE0,0X7F,
0XFF,0XCF,0XFF,0XEE,0X07,0X99,0XF4,0XFE,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X00,0XFC,0XCE,0X33,0X03,0XFF,0XFF,0XCF,0XFF,0XFF,0X81,0X38,0XE6,
0X7F,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XF9,0XE4,0X30,
0X3F,0XFF,0X80,0X00,0X01,0XFF,0XFC,0X3C,0X0F,0X9F,0X80,0X03,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X80,0X07,0XF3,0XE1,0XF0,0XFF,0XE0,0X00,0X00,0X00,0X07,0XFE,
0X0F,0X0F,0XCF,0XE0,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X0F,0X8F,
0XC3,0XC1,0XFE,0X00,0X01,0X9B,0X80,0X00,0X7F,0X43,0X87,0XF3,0XF0,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X1F,0X8E,0X83,0X0F,0XF0,0X01,0XF9,0X91,0X9F,
0X80,0X0F,0XF0,0X90,0XE1,0XF8,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,
0X3F,0X4E,0X38,0X3F,0XC0,0X3F,0XF0,0X00,0X0F,0XFC,0X03,0XFC,0X38,0XC6,0XFC,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X7C,0XE6,0X78,0XFF,0X01,0XFF,0XF8,
0X91,0X0F,0XFF,0X80,0XFE,0X1D,0XCF,0X3E,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0X00,0XF9,0XF3,0XE0,0XFC,0X0F,0XFF,0XF8,0XF1,0X1F,0XFF,0XF0,0X3C,0XC7,0X9F,
0X9F,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X01,0XE3,0XF1,0X8C,0X60,0X7F,
0XFF,0XFC,0X71,0X1F,0XFF,0XFC,0X0C,0X73,0X1F,0XC7,0X80,0X07,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE0,0X03,0XE3,0XF9,0X1C,0X41,0XFF,0XFF,0XFC,0X71,0X1F,0XFF,0XFF,0X80,
0XF8,0X3F,0XC7,0XC0,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X07,0XC1,0XFC,0X3F,
0X01,0XFF,0XFF,0XF8,0X01,0X1F,0XFF,0XFF,0XE0,0XFC,0X7F,0X83,0XE0,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X80,0X0F,0X98,0XFC,0X7C,0X18,0X7F,0XFF,0XF0,0X01,0X1F,0XFF,
0XFF,0XF0,0X3C,0X1F,0X99,0XF0,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X1F,0X3C,
0X79,0X78,0X18,0X7F,0XFF,0XE4,0X51,0X1F,0XFF,0XFF,0XE4,0X1D,0X9F,0X3C,0XF8,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X3C,0X7E,0X23,0XF0,0XC0,0X7F,0XFF,0XFC,0X51,
0X1F,0XFF,0XFF,0XC7,0X0F,0XC6,0X7E,0X7C,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,
0X7C,0XFF,0X07,0XC0,0XC4,0X3F,0XFF,0XFC,0X71,0X3F,0XFF,0XFF,0XC3,0X83,0XE0,0XFF,
0X3E,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0XF8,0X7F,0X8F,0X84,0X2E,0X3F,0XFF,
0XFC,0X71,0X3F,0XFF,0XFF,0X87,0XE1,0XF8,0XFE,0X1F,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFC,0X01,0XF3,0X3F,0X0F,0X0C,0X1E,0X1F,0XFF,0XFC,0X70,0X3F,0XFF,0XFF,0X8F,0XF0,
0XF0,0XFC,0X4F,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X01,0XF7,0X9E,0X7E,0X1C,0X1F,
0X1F,0XFF,0XFC,0X60,0X3F,0XFF,0XFF,0X1F,0XF8,0X7E,0X78,0XEF,0X80,0X0F,0XFF,0XFF,
0XFF,0XFF,0XF0,0X03,0XEF,0XCC,0XF8,0X7F,0X09,0X0F,0XFF,0XFC,0X60,0X1F,0XFF,0XFE,
0X1F,0XFC,0X1F,0X31,0XF7,0XC0,0X0F,0XFF,0XFF,0XFF,0XFF,0XF0,0X07,0XDF,0XE1,0XF0,
0XFF,0X81,0X8F,0XFF,0XF8,0X33,0X1F,0XFF,0XFE,0X3F,0XFF,0X0F,0X87,0XFB,0XE0,0X07,
0XFF,0XFF,0XFF,0XFF,0XE0,0X0F,0X1F,0XF1,0XE1,0XFF,0X82,0X87,0XFF,0XFC,0X33,0X7F,
0XFF,0XFC,0X3F,0XFF,0X87,0X8F,0XF9,0XF0,0X07,0XFF,0XFF,0XFF,0XFF,0XC0,0X0F,0X1F,
0XE1,0XC3,0XFF,0X82,0XC7,0XFF,0X80,0X00,0X01,0XFF,0XFC,0X7F,0XFF,0XC3,0X87,0XF0,
0XF0,0X03,0XFF,0XFF,0XFF,0XFF,0XC0,0X1F,0X0F,0XCF,0X87,0XFF,0X03,0XC1,0XFC,0X1F,
0XCF,0XF8,0X3F,0XF8,0XFF,0XFF,0XE1,0XF3,0XC6,0XF8,0X01,0XFF,0XFF,0XFF,0XFF,0X80,
0X3E,0XE3,0X8F,0X0F,0XFF,0XF1,0XE1,0XE1,0XFF,0XCF,0XFF,0X87,0XF0,0XFF,0XFF,0XF0,
0XF1,0X8F,0X7C,0X01,0XFF,0XFF,0XFF,0XFF,0X80,0X3C,0XF1,0X9F,0X1F,0XFF,0XF0,0XE3,
0X0F,0XFE,0X00,0XFF,0XF0,0XE1,0XFF,0XFF,0XF8,0XF9,0X1F,0X3C,0X00,0XFF,0XFF,0XFF,
0XFF,0X00,0X7D,0XF8,0X3E,0X3F,0XFF,0XF8,0XF8,0X7F,0XC0,0X00,0X03,0XFE,0X31,0XFF,
0XFF,0XFC,0X7C,0X3F,0XBE,0X00,0XFF,0XFF,0XFF,0XFF,0X00,0X4B,0XCE,0X3C,0X7F,0XFF,
0XFC,0X39,0XF8,0X00,0X00,0X00,0X1F,0X83,0XFF,0XFF,0XFE,0X38,0X63,0XC3,0X00,0X7F,
0XFF,0XFF,0XFE,0X00,0X03,0XCE,0X38,0XFF,0XFF,0XFC,0X27,0XE0,0X00,0X00,0X00,0X07,
0XE3,0XFF,0XFF,0XFF,0X18,0X63,0XC1,0X00,0X7F,0XFF,0XFF,0XFE,0X01,0X87,0XCC,0XF0,
0XFF,0XFF,0XFC,0X07,0X80,0X0F,0XE7,0XF0,0X01,0XC9,0XFF,0XFF,0XFF,0X0F,0X3B,0XC1,
0X80,0X3F,0XFF,0XFF,0XFC,0X01,0X83,0XB9,0XE1,0XFF,0XFF,0XFE,0X66,0X00,0X3F,0XC3,
0XF8,0X00,0X0E,0X7F,0XFF,0XFF,0X87,0X9D,0X81,0X80,0X3F,0XFF,0XFF,0XFC,0X03,0X88,
0X33,0XE3,0XFF,0XFF,0XFC,0XF0,0X07,0X5F,0XB3,0XF2,0XE0,0X1F,0X3F,0XFF,0XFF,0XC7,
0XCC,0X17,0XC0,0X1F,0XFF,0XFF,0XF8,0X03,0XDC,0X33,0XC7,0XFF,0XFF,0XF9,0XE0,0X3E,
0X6F,0XAD,0XE6,0XF8,0X07,0X9F,0XFF,0XFF,0XE3,0XC8,0X7B,0XC0,0X1F,0XFF,0XFF,0XF8,
0X07,0XDE,0X07,0X8F,0XFF,0XFF,0XE7,0X80,0XFE,0XF7,0X6D,0XCE,0X7F,0X01,0XCF,0XFF,
0XFF,0XF1,0XE0,0X7B,0XE0,0X0F,0XFF,0XFF,0XF0,0X07,0XBE,0X07,0X81,0XFF,0XFF,0XCF,
0X00,0XFC,0XFA,0X6E,0XBF,0X7E,0X00,0XF3,0XFF,0XFF,0XF1,0X86,0X7D,0XE0,0X0F,0XFF,
0XFF,0XF0,0X0F,0XBD,0XC1,0X11,0XFF,0XFF,0X9E,0X04,0X3C,0XFC,0XEE,0X7F,0X78,0X20,
0X79,0XFF,0XFF,0X80,0X13,0X3D,0XF0,0X0F,0XFF,0XFF,0XF0,0X0F,0X79,0XD8,0X31,0XFF,
0XFF,0X3C,0X1C,0X8D,0XFC,0X6E,0X7F,0X22,0X30,0X3C,0XFF,0XFF,0X0C,0X1B,0X1E,0XF0,
0X07,0XFF,0XFF,0XE0,0X1E,0X71,0X98,0X07,0XDF,0XFE,0X78,0X3D,0X61,0XF9,0X2D,0XBF,
0X8C,0XBC,0X1E,0X7F,0XFC,0X0C,0X79,0X9E,0X78,0X07,0XFF,0XFF,0XE0,0X1C,0X3F,0XBC,
0X01,0X8F,0XFC,0XF0,0XFD,0X79,0XFB,0X83,0XBF,0X3D,0XBE,0X0F,0X7F,0XF8,0X1E,0X3D,
0XF8,0X78,0X03,0XFF,0XFF,0XE0,0X1E,0X07,0X3C,0X40,0X07,0XFD,0XE1,0XFD,0XBA,0X73,
0XC7,0XDC,0XB9,0XBF,0X07,0XBF,0XE0,0X7E,0X3C,0XE0,0X78,0X03,0XFF,0XFF,0XC0,0X3C,
0XE0,0X78,0XC8,0X3F,0XFB,0XC1,0XFD,0X9B,0X97,0XEF,0XC1,0XDB,0XBF,0X83,0XDF,0XC1,
0XF0,0X1E,0X07,0X3C,0X03,0XFF,0XFF,0XC0,0X3D,0XF8,0X78,0XFC,0X0F,0XF3,0X80,0X1D,
0XD3,0XCF,0XEF,0XE7,0XD3,0XB0,0X01,0XCF,0X03,0XC1,0X1C,0X1F,0XBC,0X01,0XFF,0XFF,
0XC0,0X3D,0XFE,0X31,0XFE,0X03,0XE7,0X0B,0XC1,0XE7,0XEF,0XEF,0XEF,0XC6,0X07,0XA0,
0XE4,0X0F,0X01,0X8C,0X7F,0XBC,0X01,0XFF,0XFF,0X80,0X79,0XFC,0XF1,0XFC,0X41,0X6E,
0X19,0XF8,0X07,0XF7,0XEF,0XCF,0XE0,0X3F,0XB0,0X74,0X3C,0X07,0X8F,0X3F,0X9E,0X01,
0XFF,0XFF,0X80,0X7B,0XFC,0XF3,0XFE,0XE0,0X1E,0X1D,0XF9,0XE7,0XF3,0XEF,0XCF,0XEF,
0XBF,0XB8,0X38,0X78,0X1F,0XCF,0X3F,0XDE,0X01,0XFF,0XFF,0X80,0X71,0XFD,0XE3,0XFF,
0XF8,0X3C,0X3D,0XF9,0XF3,0XF1,0XEF,0X8F,0XDF,0X3F,0X3C,0X39,0XE0,0X7F,0XC7,0XBF,
0XCE,0X00,0XFF,0XFF,0X00,0XF0,0X39,0XE3,0XFF,0XFC,0X18,0X7D,0XF9,0XFB,0XEC,0XEE,
0X6F,0X9F,0XBF,0X7C,0X1D,0X81,0XFF,0XC7,0X9F,0X0F,0X00,0XFF,0XFF,0X00,0XF7,0X01,
0XC7,0XFF,0XFD,0X00,0X7C,0XF9,0XF9,0XEF,0X2C,0XF7,0XBF,0XBF,0X7E,0X00,0X07,0XFF,
0XE3,0XD8,0X0F,0X00,0XFF,0XFF,0X00,0XF7,0XE1,0XC7,0XFF,0XFF,0X40,0XFE,0XF9,0XFD,
0XDF,0X83,0XF3,0X7F,0XBE,0X7F,0X02,0X0F,0XFF,0XE3,0XC0,0XEF,0X00,0XFF,0XFF,0X00,
0XE7,0XF1,0XC7,0XFF,0XFE,0XE0,0X00,0X01,0XFE,0X9F,0XC7,0XFB,0X7F,0X00,0X00,0X06,
0X5F,0XFF,0XE3,0X87,0XE7,0X00,0X7F,0XFF,0X01,0XEF,0XF3,0X8F,0XFF,0XFE,0XE0,0X3E,
0XFC,0XFE,0XDF,0XEF,0XFA,0XFE,0X7E,0X7C,0X07,0X7F,0XFF,0XF1,0XCF,0XF7,0X80,0X7F,
0XFE,0X01,0XEF,0XF7,0X8F,0XFF,0XFD,0XC2,0X1E,0XFE,0X03,0X3F,0XE7,0XF8,0X80,0XFE,
0XF2,0XC3,0X3F,0XFF,0XF1,0XEF,0XF7,0X80,0X7F,0XFE,0X01,0XCF,0XE7,0X9F,0XFF,0XFD,
0XC3,0X47,0X7F,0X00,0X3F,0XD3,0XF8,0X00,0XFE,0XC6,0XC3,0XBF,0XFF,0XF9,0XE7,0XF7,
0X80,0X7F,0XFE,0X01,0XC0,0X67,0X1F,0XFF,0XF9,0X87,0X33,0X7F,0X7F,0X1F,0XBB,0XF1,
0XFC,0XFE,0X9D,0XE1,0X9F,0XFF,0XF9,0XE7,0XE3,0X80,0X7F,0XFE,0X03,0XC8,0X07,0X1F,
0XFF,0XFB,0X87,0XBD,0X7F,0X7F,0X87,0X3D,0XC3,0XFC,0XFC,0X79,0XE1,0XDF,0XFF,0XF8,
0XE6,0X03,0XC0,0X3F,0XFE,0X03,0XDF,0XC7,0X1F,0XFF,0XFB,0X8F,0X9E,0X3F,0X7F,0XB9,
0X7D,0XB9,0XFC,0XF8,0X7B,0XF1,0XDF,0XFF,0XF8,0XE0,0X3B,0XC0,0X3F,0XFE,0X03,0XDF,
0XEF,0X3F,0XFF,0XF3,0X0F,0XD9,0X9F,0X7F,0X3C,0X7C,0X7D,0XFC,0XE3,0X83,0XF0,0XCF,
0XFF,0XF8,0XE3,0XFB,0XC0,0X3F,0XFC,0X03,0XDF,0XCF,0X3F,0XFF,0XF7,0X1F,0X87,0XE7,
0X7F,0X3E,0X7C,0XFD,0XFD,0XCF,0XE0,0XF0,0XEF,0XFF,0XFC,0XF3,0XFB,0XC0,0X3F,0XFC,
0X03,0XDF,0XCE,0X3F,0XFF,0XF7,0X18,0X2F,0XF9,0XBF,0X3E,0X30,0XFD,0XFD,0X3F,0XEE,
0X18,0XEF,0XFF,0XFC,0XF3,0XFB,0XC0,0X3F,0XFC,0X03,0XDF,0XCE,0X3F,0XFF,0XE6,0X01,
0XE7,0XFE,0X3F,0XBC,0XC6,0X7B,0XF8,0XFF,0XEF,0XC0,0X6F,0XFF,0XFC,0X73,0XFB,0XC0,
0X3F,0XFC,0X07,0X9F,0XCE,0X3F,0XFF,0XE6,0X0F,0XF7,0XFE,0X10,0X3D,0XEF,0X08,0X00,
0X7F,0XDF,0XF0,0X67,0XFF,0XFC,0X73,0XF9,0XC0,0X3F,0XFC,0X07,0X03,0XDE,0X3F,0XFF,
0XEE,0X27,0XFB,0XF8,0X0F,0X01,0XEF,0X21,0XF3,0X9F,0X9F,0XE8,0X77,0XFF,0XFC,0X73,
0X00,0XE0,0X3F,0XF8,0X07,0X80,0X0E,0X6F,0XFF,0XEE,0X33,0XF9,0XF3,0XDF,0XDD,0XE7,
0X7B,0XF7,0XE7,0X3F,0XDC,0X77,0XFF,0XFE,0X70,0X01,0XE0,0X1F,0XF8,0X07,0XBF,0X8E,
0X07,0XBF,0XEE,0X39,0XF8,0X0F,0XEF,0X9E,0X00,0X7B,0XF7,0XF0,0X4F,0X9C,0X77,0XFF,
0XFE,0X71,0XFD,0XE0,0X1F,0XF8,0X07,0XBF,0X9E,0X07,0X0F,0XEC,0X3D,0XE7,0X1F,0XEF,
0X9E,0X3C,0X7B,0XEF,0XF9,0XE3,0X3C,0X37,0XFF,0XFE,0X79,0XFD,0XE0,0X1F,0XF8,0X07,
0XB9,0X9E,0X6F,0X3F,0XEC,0X3E,0XCF,0XDF,0XF7,0X9C,0XFF,0X70,0XCF,0XF3,0XF8,0X7C,
0X37,0XFF,0XFE,0X79,0XBD,0XE0,0X1F,0XF8,0X07,0XB8,0X9C,0X40,0X3F,0X0C,0X3F,0X3F,
0XCF,0XFB,0X61,0XFF,0X86,0X1F,0XF7,0XFC,0X7C,0X36,0XFF,0XE6,0X79,0X1D,0XE0,0X1F,
0XF8,0X07,0XB9,0X9C,0X00,0X00,0X1C,0X3C,0X3F,0XEF,0XF8,0XF3,0XFF,0XCF,0X07,0XE7,
0XF9,0X3C,0X34,0X00,0X00,0X79,0XBD,0XE0,0X1F,0XF8,0X07,0XBD,0X9C,0X00,0X00,0X1C,
0X71,0XDF,0XF7,0XC4,0XFB,0XFF,0XDF,0X71,0XCF,0XFB,0XCE,0X38,0X00,0X02,0X39,0XFD,
0XE0,0X1F,0XF8,0X06,0XBD,0X9C,0X4E,0X38,0X1C,0X67,0XEF,0XFB,0X9E,0XF3,0XFF,0XEE,
0X7D,0X9F,0XF7,0XF4,0X38,0X7F,0XF6,0X39,0XBD,0X60,0X1F,0XF8,0X04,0X38,0X94,0X7F,
0X3F,0X00,0X04,0X00,0X08,0X7E,0X67,0XFF,0XE0,0XFE,0X00,0X00,0X00,0X0A,0X7F,0XE6,
0X09,0X1C,0X20,0X1F,0XF8,0X00,0X00,0X00,0X6F,0X00,0X60,0X0F,0XE7,0XF8,0X7F,0X07,
0XFF,0XE6,0X7C,0X1F,0XE7,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X00,0X30,
0X80,0X40,0X00,0X1C,0X2F,0XEF,0XF9,0X9E,0X73,0XFF,0XCF,0X79,0XDF,0XF3,0XE6,0X18,
0X00,0X00,0X09,0X0C,0X20,0X1F,0XF8,0X04,0XB9,0X9C,0X00,0X00,0X1C,0X73,0XDF,0XF7,
0XC6,0XFB,0XFF,0XDF,0X03,0XEF,0XFB,0X9E,0X3E,0X3F,0XF6,0X39,0X9C,0X60,0X1F,0XF8,
0X07,0XBD,0X9C,0X40,0X06,0X6C,0X7C,0XBF,0XE7,0XE0,0XF3,0XFF,0XCE,0X1F,0XF7,0XFC,
0X3C,0X30,0X00,0XE6,0X39,0XFD,0XE0,0X1F,0XF8,0X07,0XB9,0X9E,0X7F,0XFF,0XEC,0X3E,
0X3F,0XEF,0XFC,0X71,0XFF,0X80,0XCF,0XF3,0XFC,0XFC,0X30,0X00,0X02,0X79,0XBD,0XE0,
0X1F,0XF8,0X07,0XB8,0X9E,0X7F,0XFF,0XEC,0X3E,0X1F,0XCF,0XF3,0X8C,0XFF,0X39,0XEF,
0XFB,0XF3,0X7C,0X34,0X00,0X00,0X79,0X1D,0XE0,0X1F,0XF8,0X07,0XB9,0X9E,0X7F,0XFF,
0XEC,0X3C,0XE7,0X9F,0XF7,0XDE,0X18,0X79,0XF7,0XF8,0X47,0XBC,0X37,0XFF,0XC6,0X79,
0X9D,0XE0,0X1F,0XF8,0X07,0XBF,0XDE,0X7F,0XFF,0XEE,0X39,0XF0,0X0F,0XEF,0XDE,0X02,
0X79,0XF3,0XF0,0X1F,0XDC,0X77,0XFF,0XFE,0X7B,0XFD,0XE0,0X1F,0XF8,0X07,0XB2,0X0E,
0X7F,0XFF,0XEE,0X33,0XFC,0XE7,0XEF,0XDE,0XE7,0XBB,0XF3,0XC7,0XDF,0XEC,0X77,0XFF,
0XFE,0X73,0XFD,0XE0,0X1F,0XFC,0X07,0X00,0X0E,0X3F,0XFF,0XEE,0X37,0XFB,0XF9,0XCF,
0X84,0XF7,0X80,0X70,0X1F,0XCF,0XF0,0X77,0XFF,0XFC,0X60,0X01,0XE0,0X3F,0XFC,0X07,
0X0F,0XCE,0X3F,0XFF,0XE6,0X0F,0XFB,0XFE,0X00,0X10,0XF7,0XBD,0X08,0X7F,0XEF,0XF0,
0X67,0XFF,0XFC,0X70,0X01,0XC0,0X3F,0XFC,0X03,0XDF,0XCE,0X3F,0XFF,0XF6,0X03,0XF7,
0XFF,0X1F,0XDE,0X63,0X3D,0XFD,0X3F,0XE7,0X80,0X6F,0XFF,0XFC,0X73,0XF9,0XC0,0X3F,
0XFC,0X03,0XDF,0XCE,0X3F,0XFF,0XF7,0X08,0X77,0XFC,0XBF,0XBF,0X1C,0X7C,0XFD,0X9F,
0XF4,0X38,0XEF,0XFF,0XFC,0XF3,0XFB,0XC0,0X3F,0XFC,0X03,0XDF,0XCF,0X3F,0XFF,0XF7,
0X0F,0X07,0XF3,0XBF,0XBF,0X3E,0X7C,0XFE,0XE7,0XE3,0XF0,0XEF,0XFF,0XFC,0XF3,0XFB,
0XC0,0X3F,0XFE,0X03,0XDF,0XCF,0X3F,0XFF,0XF3,0X0F,0XC1,0XCF,0X3F,0XBE,0X3E,0XBC,
0XFE,0XF9,0X1B,0XF0,0XCF,0XFF,0XFC,0XF7,0XFB,0XC0,0X3F,0XFE,0X03,0XDF,0X87,0X1F,
0XFF,0XFB,0X87,0XDE,0X1F,0X3F,0XBD,0XBE,0X9D,0XFE,0XFE,0X79,0XF1,0XDF,0XFF,0XF8,
0XE7,0XFB,0XC0,0X3F,0XFE,0X03,0XC0,0X07,0X1F,0XFF,0XFB,0X87,0X9E,0X3F,0X3F,0XC3,
0XBC,0XE1,0XFC,0XFE,0X3D,0XE1,0XDF,0XFF,0XF8,0XC7,0XF7,0X80,0X3F,0XFE,0X01,0X81,
0XE7,0X1F,0XFF,0XC1,0X87,0XB9,0X3F,0X3F,0X8F,0XDD,0XF8,0XFE,0XFE,0XCE,0XE1,0X9F,
0XFF,0XF9,0XC0,0X77,0X80,0X7F,0XFE,0X01,0XCF,0XE7,0X9F,0XFF,0X01,0XC3,0X63,0X7F,
0X00,0X1F,0XCB,0XFC,0X00,0XFE,0X72,0XC3,0XBF,0XFF,0XF9,0XE0,0X07,0X80,0X7F,0XFE,
0X01,0XEF,0XF7,0X8F,0XF8,0X04,0XC3,0X4F,0X7F,0X01,0X1F,0XE7,0XFC,0XCC,0X7F,0X7C,
0X43,0X3F,0XFF,0XF1,0XEF,0X83,0X80,0X7F,0XFF,0X01,0XEF,0XF3,0X8F,0X80,0X20,0XE0,
0X3F,0X7E,0X7F,0X5F,0XE7,0XF9,0X7F,0X3F,0X74,0X07,0X0F,0XFF,0XF1,0XCF,0XE7,0X80,
0X7F,0XFF,0X00,0XE7,0XF1,0XCC,0X01,0X80,0XC0,0X00,0X00,0XFE,0XDF,0XE3,0XFB,0X3F,
0X80,0X13,0X07,0X07,0XFF,0XE3,0XCF,0XE7,0X00,0X7F,0XFF,0X00,0XF7,0XC1,0XC0,0X0E,
0X03,0X00,0XFE,0X7D,0XFE,0XCF,0XC1,0XFB,0XBF,0X9F,0X7F,0X0E,0X81,0XFF,0XE3,0XDF,
0XEF,0X00,0XFF,0XFF,0X00,0XF4,0X03,0XC0,0X78,0X00,0X18,0X7E,0XFD,0XFD,0XEF,0X34,
0XF7,0X9F,0X9F,0XBE,0X06,0XC0,0X7F,0XE3,0X0F,0XEF,0X00,0XFF,0XFF,0X00,0XF0,0X79,
0XE6,0X40,0X40,0XB8,0X3E,0XFD,0XF9,0XF6,0X77,0X27,0XDF,0X9F,0XBE,0X01,0XF0,0X1F,
0XC7,0X81,0XCF,0X00,0XFF,0XFF,0X80,0X63,0XFD,0XE3,0X01,0X80,0X9C,0X3C,0XFD,0XFB,
0XF1,0XF7,0XCF,0XEF,0X9F,0XBC,0X38,0X3C,0X03,0XC7,0X90,0X5E,0X00,0XFF,0XFF,0X80,
0X7B,0XFC,0XE0,0X0E,0X07,0XDC,0X1D,0XFD,0XF3,0XF3,0XF7,0XCF,0XE3,0X9F,0XB8,0X38,
0X0F,0X80,0XCF,0X3E,0X1E,0X01,0XFF,0XFF,0X80,0X79,0XFC,0XF0,0X18,0X00,0XEE,0X0D,
0XFC,0X07,0XF3,0XF7,0XEF,0XE0,0X1F,0X90,0X74,0X07,0XE0,0X8F,0X3F,0X9E,0X01,0XFF,
0XFF,0XC0,0X7D,0XFE,0X71,0X80,0X40,0X07,0X0D,0XE0,0X63,0XF3,0XF7,0XE7,0XE7,0X81,
0XD0,0XE4,0X81,0XF8,0X0F,0X7F,0XBE,0X01,0XFF,0XFF,0XC0,0X3D,0XFC,0X78,0X81,0X83,
0X13,0X80,0X05,0XEB,0XE7,0XF7,0XF3,0XCB,0X98,0X01,0XCE,0XE0,0X79,0X18,0X7F,0XBC,
0X01,0XFF,0XFF,0XC0,0X3C,0XF0,0X78,0X86,0X0F,0X1B,0XC1,0XFD,0XD9,0X83,0XF7,0XEC,
0XD9,0X9F,0X83,0XDE,0X70,0X37,0X18,0X3F,0X3C,0X03,0XFF,0XFF,0XE0,0X1E,0XC3,0X3C,
0X4C,0X1C,0X1D,0XE1,0XFD,0X9D,0X3B,0XE3,0XCE,0X1D,0XBF,0X87,0XBE,0X1C,0X06,0X3C,
0X0F,0X78,0X03,0XFF,0XFF,0XE0,0X1E,0X0F,0XBC,0X70,0X70,0X3C,0XF0,0X7D,0XBC,0XFD,
0XC1,0XDF,0X9E,0XBE,0X0F,0X3E,0X07,0X02,0X3D,0XC2,0X78,0X03,0XFF,0XFF,0XE0,0X1C,
0X7B,0X9E,0X30,0XE0,0XFE,0X78,0X3D,0X71,0XFD,0XB4,0X9F,0X86,0X3C,0X1E,0X7F,0X83,
0XC4,0X79,0XF0,0XF8,0X07,0XFF,0XFF,0XF0,0X0E,0X71,0XDE,0X31,0XC1,0XFF,0X3C,0X0C,
0X4E,0XFE,0X76,0X3F,0XB9,0X38,0X3C,0XFF,0XC0,0XDC,0X7B,0X1C,0XF0,0X07,0XFF,0XFF,
0XF0,0X0F,0XB9,0XC8,0X01,0X07,0XFF,0X9E,0X04,0X1E,0XFE,0X77,0X3F,0X3C,0X20,0X79,
0XFF,0XF0,0X18,0X13,0X1D,0XF0,0X0F,0XFF,0XFF,0XF0,0X07,0XBC,0XE1,0X8C,0X0F,0XFF,
0XCF,0X00,0X7E,0XF9,0X76,0X5F,0X7F,0X00,0XF3,0XFF,0XFC,0X11,0X07,0XBD,0XE0,0X0F,
0XFF,0XFF,0XF8,0X07,0XDE,0X07,0X8C,0X3F,0XFF,0XF7,0X80,0XFE,0X73,0XB6,0XEF,0X7F,
0X01,0XE7,0XFF,0XFE,0X21,0X86,0X7B,0XE0,0X0F,0XFF,0XFF,0XF8,0X03,0XDE,0X13,0XC4,
0X3F,0XFF,0XF9,0XE0,0X1F,0X67,0XB5,0XF6,0X78,0X07,0X9F,0XFF,0XFF,0XE3,0XC0,0X7B,
0XC0,0X1F,0XFF,0XFF,0XFC,0X03,0XEC,0X33,0XE0,0X7F,0XFF,0XC0,0XC0,0X07,0X4F,0XCD,
0XFA,0XE0,0X0F,0X3F,0XFF,0XFF,0XC7,0XD8,0X77,0XC0,0X1F,0XFF,0XFF,0XFC,0X01,0XA0,
0X39,0XE1,0XFF,0XFF,0XC3,0X0C,0X01,0X1F,0XE3,0XFC,0X00,0X06,0X7F,0XFF,0XFF,0X87,
0X9C,0X37,0X80,0X3F,0XFF,0XFF,0XFE,0X01,0X83,0XBC,0XF0,0XFF,0XFF,0XC0,0X1F,0X00,
0X07,0XE3,0XF0,0X00,0XE1,0XFF,0XFF,0XFF,0X0F,0X3D,0X81,0X80,0X3F,0XFF,0XFF,0XFE,
0X00,0X87,0XCC,0X38,0XFF,0XFF,0X8C,0X67,0XE0,0X00,0X00,0X00,0X07,0XE1,0XFF,0XFF,
0XFF,0X1B,0X3B,0XC1,0X00,0X7F,0XFF,0XFF,0XFF,0X00,0X0B,0XCE,0X3C,0X7F,0XFF,0X08,
0X73,0XF8,0X00,0X00,0X00,0X1F,0X88,0X7F,0XFF,0XFE,0X38,0X63,0XC0,0X00,0X7F,0XFF,
0XFF,0XFF,0X00,0X4D,0XCC,0X3E,0X3F,0XFE,0X18,0XF8,0X7F,0X80,0X00,0X01,0XFE,0X38,
0X3F,0XFF,0XFC,0X7C,0X63,0XB0,0X00,0XFF,0XFF,0XFF,0XFF,0X80,0X3C,0XF8,0X9E,0X1F,
0XFC,0X31,0XC1,0X1F,0XFC,0X00,0X3F,0XF8,0XF4,0X3F,0XFF,0XF8,0X78,0X3F,0X3C,0X00,
0XFF,0XFF,0XFF,0XFF,0X80,0X3E,0XE3,0X8F,0X0F,0XFC,0X60,0X31,0XE1,0XFF,0XCF,0XFF,
0X87,0XF2,0X1F,0XFF,0XF0,0XF1,0X1F,0X7C,0X01,0XFF,0XFF,0XFF,0XFF,0XC0,0X1F,0X07,
0XCF,0X87,0XF8,0X60,0X31,0XFC,0X1F,0XCF,0XF8,0X3F,0XF3,0X0F,0XFF,0XE1,0XF3,0XC6,
0XF8,0X01,0XFF,0XFF,0XFF,0XFF,0XC0,0X0F,0X0F,0XE3,0XC3,0XF0,0XC4,0X61,0XFF,0X80,
0X00,0X01,0XFF,0XF1,0X8F,0XFF,0XC3,0X67,0XE1,0XF0,0X03,0XFF,0XFF,0XFF,0XFF,0XE0,
0X0F,0X1F,0XE3,0XE1,0XE1,0X84,0X63,0XFF,0XFC,0XB1,0X7F,0XFF,0XF1,0X87,0XFF,0X87,
0X0F,0XF1,0XF0,0X07,0XFF,0XFF,0XFF,0XFF,0XF0,0X07,0XDF,0XC1,0XF0,0XC3,0X88,0XC3,
0XFF,0XF8,0XF1,0XFF,0XFF,0XF0,0XC7,0XFF,0X0F,0X0F,0XFB,0XE0,0X07,0XFF,0XFF,0XFF,
0XFF,0XF0,0X03,0XEF,0X8C,0XF8,0X43,0X18,0XC7,0XFF,0XF8,0X60,0XFF,0XFF,0XF8,0X43,
0XFE,0X1F,0X0F,0XF7,0XC0,0X0F,0XFF,0XFF,0XFF,0XFF,0XF8,0X01,0XF7,0X3E,0X7C,0X1E,
0X11,0X87,0XFF,0XF8,0XD8,0XFF,0XFF,0XFC,0X61,0XF8,0X7E,0X63,0XEF,0X80,0X0F,0XFF,
0XFF,0XFF,0XFF,0XFC,0X01,0XF2,0X7F,0X1F,0X0C,0X31,0X8F,0XFF,0XF8,0X98,0XFF,0XFF,
0XFC,0X30,0X70,0XEC,0XF1,0XCF,0X80,0X1F,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0XF8,0XFF,
0X1F,0X86,0X21,0X0F,0XFF,0XF8,0X18,0XFF,0XFF,0XFE,0X30,0XE1,0XE1,0XF9,0X9F,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X78,0XFE,0X0F,0XC0,0XE3,0X1F,0XFF,0XF8,0X18,
0XFF,0XFF,0XFF,0X00,0XC3,0XE3,0XFC,0X3E,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,
0X3E,0X7C,0X63,0XF0,0XE1,0X1F,0XFF,0XF8,0X18,0XFF,0XFF,0XFF,0X07,0X0F,0XC1,0XFE,
0X7C,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X1F,0X38,0XF1,0XF8,0X30,0X3F,0XFF,
0XF9,0X18,0XFF,0XFF,0XFF,0X8C,0X1D,0X9C,0XFC,0XF8,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X80,0X0F,0X91,0XF8,0X7C,0X06,0X1F,0XFF,0XF9,0X18,0XFF,0XFF,0XFF,0XE0,0X38,
0X1C,0X79,0XF0,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X07,0XC3,0XFC,0X3F,0X07,
0X1F,0XFF,0XF1,0X18,0XFF,0XFF,0XFF,0XE0,0XFC,0X7E,0X33,0XE0,0X03,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0X03,0XC7,0XFC,0X1F,0X00,0X7F,0XFF,0XF1,0X18,0XFF,0XFF,0XFF,
0X81,0XF8,0X7F,0X27,0XC0,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X01,0XE3,0XF9,
0X8E,0X20,0X7F,0XFF,0XF1,0X98,0XFF,0XFF,0XFE,0X04,0XF0,0X3F,0X8F,0X80,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0XF9,0XF3,0XE2,0X38,0X0F,0XFF,0XF1,0X88,0XFF,
0XFF,0XF0,0X1C,0XC7,0X1F,0X9F,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,
0X7C,0XF3,0XF0,0XFE,0X03,0XFF,0XF1,0X88,0X3F,0XFF,0X80,0XFE,0X0F,0X9F,0X7E,0X00,
0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X3F,0X66,0X3C,0X7F,0XC0,0X3F,0XE1,
0X80,0X3F,0XFC,0X03,0XFE,0X3D,0XCE,0XFC,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFE,0X00,0X3F,0X8F,0X19,0X1F,0XF8,0X01,0XF3,0XCE,0X7F,0X80,0X1F,0XF8,0X38,0XC1,
0XF8,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X0F,0X8F,0XE1,0XC0,0XFE,
0X00,0X03,0XCE,0XE0,0X00,0X7F,0XC3,0X00,0XE3,0XF0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X07,0XF3,0XE1,0XF0,0XFF,0XE0,0X00,0X00,0X00,0X07,0XFE,0X0F,
0X0F,0XCF,0XE0,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XF9,0XE0,
0XF8,0X3B,0XFF,0X80,0X00,0X01,0XFF,0XFC,0X3F,0X0F,0X9F,0X80,0X03,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0XFC,0X67,0X13,0X03,0XFF,0XFF,0XEF,0XFF,0XFF,
0X21,0X38,0X8E,0X3F,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,
0X7F,0X0F,0X13,0XE0,0XEF,0XFF,0XCF,0XFF,0XFE,0X07,0X91,0XEC,0XFE,0X00,0X0F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X3F,0X8F,0XF7,0XE0,0X07,0XFF,0XC7,
0XFF,0X80,0X1F,0X99,0XE1,0XFC,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFE,0X00,0X0F,0X07,0XE7,0XE7,0X80,0X07,0XCF,0XC0,0X03,0XBF,0X9F,0XE0,0XF0,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X07,0X09,0XE7,0XEF,0XCE,
0X00,0X00,0X00,0X0F,0X9F,0XCF,0X10,0XE0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X01,0X0E,0X4F,0XCF,0XCF,0XCF,0X00,0XC7,0XCF,0X9F,0XCC,0X61,
0X80,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X7F,0X8F,
0XCF,0XDF,0XCF,0XCF,0XE7,0XCF,0X9F,0XE1,0XF8,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0XD3,0XDF,0X9F,0XCD,0XCF,0X67,0XCF,0XCF,
0XC7,0XFC,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,
0X0F,0XFC,0X1F,0X9F,0XD8,0X00,0X27,0XCF,0XCE,0X37,0XF0,0X00,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X03,0XFF,0X07,0X9F,0X99,0X82,0X27,
0XEF,0XC0,0XFF,0XC0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0X7F,0XB0,0X3F,0XDF,0XC7,0XE7,0XE6,0X07,0XFE,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X1F,0XFE,0X07,0XDF,
0XEF,0XE7,0XE0,0X6F,0XF8,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0X00,0X07,0XFF,0X20,0X07,0XCF,0XE0,0X07,0XFF,0XE0,0X00,0X07,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0XFF,
0XFF,0X90,0X00,0X03,0XFF,0XFF,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X1F,0XFF,0XFF,0XC7,0XF7,0XFF,0XF8,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,
0X00,0X00,0XFF,0XFF,0X83,0XFF,0XFF,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XC7,0XFF,0XE0,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF8,0X00,0X00,0X00,0X0F,0XC7,0XF0,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF0,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X07,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};
