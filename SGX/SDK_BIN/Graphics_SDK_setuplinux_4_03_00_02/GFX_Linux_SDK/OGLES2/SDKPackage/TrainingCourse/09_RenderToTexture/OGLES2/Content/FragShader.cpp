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
	"varying mediump vec2  TexCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"    gl_FragColor = texture2D(sTexture, TexCoord);\r\n"
	"}\r\n";

// Register FragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsh("FragShader.fsh", _FragShader_fsh, 137);

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
0x10fab438,0xbfb1c3ee,0x35050100,0x901,0xf121629f,0x0,0x0,0x1c020000,0x1000000,0x4000100,0x0,0x8000000,0x10002,0x0,0x20000,0x0,0x51,0xdc000000,0x55535020,0x17,0xd0,0x1,0x0,0x48,0x0,0x3,0x6d,0x1,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x1,0x0,0x1,0x0,0x0,0x0,0x0,0xfffc0000,0x3,0x10004,0x0,0x110000,0xffffffff,0x0,0x56780000,0x0,0x10000,0x0,0x4,0x50011,0x10000,0x80010000,0x80018001,0x8001,0x0,0x120000,0xf0000,0x60a000f,0x30003,0x30003,
0x0,0x0,0x40004,0x40004,0x10000,0x30002,0x1,0x20001,0x6,0xdc000000,0x55535020,0x17,0xd0,0x1,0x0,0x148,0x0,0x3,0x6d,0x1,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x10001,0x0,0x1,0x0,0x0,0x0,0x0,0xfffc0000,0x1,0x10004,0x0,0x110000,0xffffffff,0x0,0x56780000,0x0,0x10000,0x0,0x4,0x50011,0x10000,0x80010000,0x80018001,0x8001,0x0,0x120000,0xf0000,0x60a000f,0x10001,0x10001,0x0,0x0,0x40004,0x40004,0x10000,0x30002,0x10001,0x20001,
0x6,0x2000000,0x78655473,0x65727574,0x18000000,0x1000003,0x20000,0x1000100,0x65540000,0x6f6f4378,0x6472,0x50300,0x100,0x2000001,0x300,0x0,
};

// Register FragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsc("FragShader.fsc", _FragShader_fsc, 572);

// ******** End: FragShader.fsc ********
