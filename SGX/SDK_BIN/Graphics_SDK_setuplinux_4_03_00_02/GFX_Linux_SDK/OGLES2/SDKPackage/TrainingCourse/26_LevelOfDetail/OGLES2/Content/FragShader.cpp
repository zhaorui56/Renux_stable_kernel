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
	"uniform sampler2D  sReflectTex;\r\n"
	"uniform sampler2D  sNormalMap;\r\n"
	"\r\n"
	"uniform bool  bHighDetail;\r\n"
	"\r\n"
	"varying mediump vec3  EyeDirection;\r\n"
	"varying mediump vec2  TexCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\tif (bHighDetail)\r\n"
	"\t{\r\n"
	"\t\t// Get the normal direction per pixel from the normal map\r\n"
	"\t\t// The tNormal vector is defined in surface local coordinates (tangent space).\r\n"
	"\t\tmediump vec3 normal = texture2D(sNormalMap, TexCoord).rgb * 2.0 - 1.0;\r\n"
	"\t\t\r\n"
	"\t\t// reflect(): For the incident vector I and surface orientation N, returns the reflection direction:\r\n"
	"\t\t// I - 2 * dot(N, I) * N, N must already be normalized in order to achieve the desired result.\r\n"
	"\t\tmediump vec3 reflectDir = reflect(normal, EyeDirection);\r\n"
	"\t\tmediump vec2 reflectCoord = (reflectDir.xy) * 0.5 + 0.5;\r\n"
	"\t\r\n"
	"\t\t// Look-up in the 2D texture using the normal map disturbance\r\n"
	"\t\tgl_FragColor = texture2D(sReflectTex, reflectCoord);\r\n"
	"\t}\r\n"
	"\telse\r\n"
	"\t{\r\n"
	"\t\tgl_FragColor = texture2D(sReflectTex, TexCoord);\r\n"
	"\t}\r\n"
	"}\r\n";

// Register FragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsh("FragShader.fsh", _FragShader_fsh, 949);

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
0x10fab438,0x27e70df4,0x35050100,0x901,0xf121629f,0x0,0x0,0x6c060000,0x1000000,0x4000100,0x0,0x18000000,0x203,0x0,0x2020000,0x0,0x0,0xac020000,0x55535020,0x17,0x2a0,0x1,0x0,0x48,0x0,0x3,0x6d,0x1,0x8,0x0,0xffffffff,0x0,0x770009,0xffff,0x30005,0x0,0x10003,0x0,0x0,0x0,0x0,0xfffc0000,0x3,0x10004,0x0,0x110000,0xffffffff,0x10000,0x56780000,0x40000,0x10000,0x10003,0x0,0x2,0x0,0x20001,0x0,0x30001,0x0,0x4,0x20011,0x10000,0x80010000,0x80018001,
0x8001,0x0,0x0,0xd00004b0,0x48811280,0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x10000,0xf000f,0x1060a,0x10001,0x1,0x0,0x40000,0x40004,0x4,0x20001,0x10003,0x20003,0x30002,0x0,0x400000,0x12fd00,0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x4,0x70007,0x10688,0x10001,0x1,0x20001,0x10003,0x10001,0x1,0x0,0x10000,0x20003,0x20002,0x20000,0x80010000,0x80008001,0x8000,0x0,0x40000,0x4,0x101,0x234fa10,0x20085000,0x20023,0x20000,0x80000000,0x80018001,0x8001,0x0,0x40000,0x1010004,
0x1,0xfa10,0x20028080,0x21020,0x30000,0x40440000,0x80018000,0x8001,0x0,0x40000,0x40004,0x44000101,0xfa100008,0x50410230,0x31006,0x80008000,0x201086,0x2,0x2,0x80018001,0x80008000,0x0,0x0,0x40004,0x1010000,0xfa100000,0x5000070e,0x231006,0x5,0x0,0x80018001,0x80008000,0x0,0x0,0x10000,0xf000f,0x1060a,0x10001,0x1,0x0,0x40000,0x40004,0x4,0x20001,0x10003,0x3,0x1404a000,0x4e003,0x120000,0x2,0x2,0x80018001,0x80018001,0x0,0x0,0x120004,0x1010101,0xfa100000,0x20000000,0x28811002,0x6,0xa2020000,0x55535020,0x17,
0x296,0x1,0x0,0x148,0x0,0x3,0x6d,0x1,0x8,0x0,0xffffffff,0x0,0x770009,0xffff,0x60005,0x0,0x10003,0x0,0x0,0x0,0x0,0xfffc0000,0x1,0x10004,0x0,0x110000,0xffffffff,0x10000,0x56780000,0x40000,0x10000,0x10003,0x0,0x2,0x0,0x20001,0x0,0x30001,0x0,0x4,0x20011,0x10000,0x80010000,0x80018001,0x8001,0x0,0x0,0xd00004b0,0x48811280,0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x10000,0xf000f,0x1060a,0x10001,0x1,0x0,0x40000,0x40004,0x4,
0x20001,0x10003,0x20006,0x30002,0x0,0x400000,0x12fd00,0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x4,0x70007,0x10688,0x10001,0x1,0x20001,0x10003,0x10001,0x1,0x0,0x10000,0x20006,0x20002,0x20000,0x80010000,0x80008001,0x8000,0x0,0x40000,0x4,0x101,0x234fa10,0x20085060,0x20023,0x20000,0x80000000,0x80018001,0x8001,0x0,0x40000,0x1010004,0x1,0x3fa10,0x20008020,0x21020,0x30000,0x40440000,0x80018000,0x8001,0x0,0x40000,0x40004,0x44000101,0xfa100008,0x50204230,0x31000,0x80004003,0x201080,0x2,0x2,0x80018001,
0x80008000,0x0,0x0,0x40004,0x1010000,0xfa100000,0x5000070e,0x231000,0x5,0x0,0x80018001,0x80008000,0x0,0x0,0x10012,0xf000f,0x1060a,0x10001,0x1,0x0,0x40000,0x40004,0x4,0x20001,0x10003,0x6,0x1400a000,0x4e003,0x120000,0x2,0x1,0x80018001,0x80018001,0x0,0x0,0x1010004,0x101,0x6fa10,0x18000000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x803f,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x3f,0x48620500,
0x44686769,0x69617465,0x6c,0x30a,0x1000001,0x40300,0x73000001,0x6d726f4e,0x614d6c61,0x70,0x318,0x2000001,0x10000,0x54000001,0x6f437865,0x64726f,0x5030000,0x10000,0x4000100,0x30002,0x65794500,0x65726944,0x6f697463,0x6e,0x504,0x1000001,0x30000,0x73000007,0x6c666552,0x54746365,0x7865,0x31800,0x100,0x1010002,0x100,0x0,
};

// Register FragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsc("FragShader.fsc", _FragShader_fsc, 1676);

// ******** End: FragShader.fsc ********

