// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: FragShader.fsh ********

// File data
static const char _FragShader_fsh[] = 
	"uniform sampler2D  sTexture;\r\n"
	"\r\n"
	"varying lowp    float  SpecularIntensity;\r\n"
	"varying mediump vec2   RefractCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\tlowp vec3 refractColor = texture2D(sTexture, RefractCoord).rgb;\t\r\n"
	"\tgl_FragColor = vec4(refractColor + SpecularIntensity, 1.0);\r\n"
	"}";

// Register FragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsh("FragShader.fsh", _FragShader_fsh, 261);

// ******** End: FragShader.fsh ********

// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: FragShader.fsc ********

// File data
A32BIT _FragShader_fsc[] = {
0x10fab438,0xe7da0cf5,0x35050100,0x901,0xf121629f,0x0,0x0,0xe7020000,0x1000000,0x4000200,0x0,0x18000000,0x10202,0x0,0x1020100,0x0,0x100,0x26010000,0x55535020,0x17,0x11a,0x1,0x0,0x48,0x0,0x3,0x6d,0x1,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x30002,0x0,0x2,0x0,0x0,0x0,0x0,0xfffc0000,0x3,0x10004,0x0,0x110000,0xffffffff,0x0,0x56780000,0x40000,0x20000,0x10001,0x0,0x1,0x40000,0x110000,0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x0,0x70007,
0x10688,0x10001,0x1,0x20001,0x10003,0x10001,0x1,0x0,0x10000,0x10003,0x20002,0x40000,0x80010000,0x80018001,0x8001,0x0,0x0,0x130000,0x9a000010,0x10026020,0x10082,0x6060000,0x138a3,0x1c3ef004,0xb44083,0x1c269004,0x64081,0x0,0x50202601,0x175553,0x11a0000,0x10000,0x0,0x1480000,0x0,0x30000,0x6d0000,0x10000,0x0,0x0,0xffff0000,0xffff,0x90000,0xffff0077,0x20000,0x3,0x20000,0x0,0x0,0x0,0x0,0x0,0x1fffc,0x40000,0x1,0x0,0xffff0011,0xffff,0x0,0x5678,0x4,0x10002,0x1,0x10000,
0x0,0x4,0x50011,0x10000,0x80010000,0x80018001,0x8001,0x0,0x0,0x70000,0x6880007,0x10001,0x10001,0x10000,0x30002,0x10001,0x10001,0x0,0x0,0x30001,0x20001,0x2,0x4,0x80018001,0x80018001,0x0,0x0,0x0,0x100013,0x60409a00,0x821000,0x1,0x38a30604,0xf0040001,0x40831c3c,0x10040134,0x40811c24,0x6,0x400,0x0,0x0,0x803f0000,0x3000000,0x78655473,0x65727574,0x18000000,0x1000003,0x20000,0x1000100,0x65520000,0x63617266,0x6f6f4374,0x6472,0x50300,0x100,0x2000001,0x300,0x63657053,0x72616c75,0x65746e49,0x7469736e,0x79,0x502,0x1000001,
0x10400,0x1,
};

// Register FragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsc("FragShader.fsc", _FragShader_fsc, 775);

// ******** End: FragShader.fsc ********

