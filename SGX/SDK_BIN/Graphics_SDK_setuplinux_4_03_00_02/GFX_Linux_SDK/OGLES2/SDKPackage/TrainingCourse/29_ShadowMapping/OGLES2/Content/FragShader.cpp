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
	"varying lowp vec4 color;\r\n"
	"varying highp vec2 TexCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\tgl_FragColor = vec4(1.0, 1.0, 1.0, 1.0);\r\n"
	"}\r\n";

// Register FragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsh("FragShader.fsh", _FragShader_fsh, 120);

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
0x10fab438,0xfe1318a6,0x35050100,0x901,0xf121629f,0x0,0x0,0x94010000,0x1000000,0x4000100,0x0,0x0,0x0,0x21,0x0,0x20,0x0,0xaa000000,0x55535020,0x17,0x9e,0x1,0x0,0x48,0x0,0x3,0x6d,0x1,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0xfffc0000,0x3,0x10004,0x0,0x110000,0xffffffff,0x0,0x56780000,0x40000,0x110000,0x2,0x1,0x80018001,0x80018001,0x0,0x0,0x1a340012,0x1c3e5004,0x64083,0x0,0x5020aa00,0x175553,0x9e0000,
0x10000,0x0,0x1480000,0x0,0x30000,0x6d0000,0x10000,0x0,0x0,0xffff0000,0xffff,0x90000,0xffff0077,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x1fffc,0x40000,0x1,0x0,0xffff0011,0xffff,0x0,0x5678,0x4,0x20011,0x10000,0x80010000,0x80018001,0x8001,0x0,0x120000,0x50041a34,0x40831c3c,0x6,0x803f0400,0x803f0000,0x803f0000,0x803f0000,0x0,0x0,
};

// Register FragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsc("FragShader.fsc", _FragShader_fsc, 436);

// ******** End: FragShader.fsc ********

