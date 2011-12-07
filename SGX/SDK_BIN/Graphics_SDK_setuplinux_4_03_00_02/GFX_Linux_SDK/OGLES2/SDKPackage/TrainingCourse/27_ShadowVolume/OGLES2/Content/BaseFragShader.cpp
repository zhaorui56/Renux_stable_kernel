// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: BaseFragShader.fsh ********

// File data
static const char _BaseFragShader_fsh[] = 
	"/*\r\n"
	"  Simple fragment shader:\r\n"
	"  - Single texturing modulated with vertex lighting\r\n"
	"*/\r\n"
	"\r\n"
	"uniform sampler2D sTexture;\r\n"
	"\r\n"
	"varying lowp    float LightIntensity;\r\n"
	"varying mediump vec2  TexCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"    gl_FragColor = vec4(texture2D(sTexture, TexCoord).rgb * LightIntensity, 1.0);\r\n"
	"}\r\n";

// Register BaseFragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_BaseFragShader_fsh("BaseFragShader.fsh", _BaseFragShader_fsh, 297);

// ******** End: BaseFragShader.fsh ********

// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: BaseFragShader.fsc ********

// File data
A32BIT _BaseFragShader_fsc[] = {
0x10fab438,0xdf571a2b,0x35050100,0x901,0xf121629f,0x0,0x0,0xe0020000,0x1000000,0x4000200,0x0,0x18000000,0x10202,0x0,0x1020100,0x0,0x100,0x26010000,0x55535020,0x17,0x11a,0x1,0x0,0x48,0x0,0x3,0x6d,0x1,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x30002,0x0,0x2,0x0,0x0,0x0,0x0,0xfffc0000,0x3,0x10004,0x0,0x110000,0xffffffff,0x0,0x56780000,0x40000,0x20000,0x10001,0x0,0x1,0x40000,0x110000,0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x0,0x70007,
0x10688,0x10001,0x1,0x20001,0x10003,0x10001,0x1,0x0,0x10000,0x10003,0x20002,0x40000,0x80010000,0x80018001,0x8001,0x0,0x0,0x130000,0x80300010,0x10029020,0x10081,0x6060000,0x138ab,0x1c3ef004,0xb44083,0x1c269004,0x64081,0x0,0x50202601,0x175553,0x11a0000,0x10000,0x0,0x1480000,0x0,0x30000,0x6d0000,0x10000,0x0,0x0,0xffff0000,0xffff,0x90000,0xffff0077,0x20000,0x3,0x20000,0x0,0x0,0x0,0x0,0x0,0x1fffc,0x40000,0x1,0x0,0xffff0011,0xffff,0x0,0x5678,0x4,0x10002,0x1,0x10000,
0x0,0x4,0x50011,0x10000,0x80010000,0x80018001,0x8001,0x0,0x0,0x70000,0x6880007,0x10001,0x10001,0x10000,0x30002,0x10001,0x10001,0x0,0x0,0x30001,0x20001,0x2,0x4,0x80018001,0x80018001,0x0,0x0,0x0,0x100013,0x90408030,0x811000,0x1,0x38ab0604,0xf0040001,0x40831c3c,0x10040134,0x40811c24,0x6,0x400,0x0,0x0,0x803f0000,0x3000000,0x78655473,0x65727574,0x18000000,0x1000003,0x20000,0x1000100,0x65540000,0x6f6f4378,0x6472,0x50300,0x100,0x2000001,0x300,0x6867694c,0x746e4974,0x69736e65,0x7974,0x50200,0x100,0x1040001,0x100,
0x0,
};

// Register BaseFragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_BaseFragShader_fsc("BaseFragShader.fsc", _BaseFragShader_fsc, 768);

// ******** End: BaseFragShader.fsc ********

