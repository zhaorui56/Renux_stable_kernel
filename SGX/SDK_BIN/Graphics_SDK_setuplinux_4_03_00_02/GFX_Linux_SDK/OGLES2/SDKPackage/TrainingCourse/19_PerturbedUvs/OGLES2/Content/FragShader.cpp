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
	"varying mediump vec3  EyeDirection;\r\n"
	"\r\n"
	"varying mediump vec2  TexCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\t// Get the normal direction per pixel from the normal map\r\n"
	"\t// The tNormal vector is defined in surface local coordinates (tangent space).\r\n"
	"\tmediump vec3 normal = texture2D(sNormalMap, TexCoord).rgb * 2.0 - 1.0;\r\n"
	"\t\r\n"
	"\t// reflect(): For the incident vector I and surface orientation N, returns the reflection direction:\r\n"
	"\t// I - 2 * dot(N, I) * N, N must already be normalized in order to achieve the desired result.\r\n"
	"\tmediump vec3 reflectDir = reflect(normal, EyeDirection);\r\n"
	"\tmediump vec2 reflectCoord = (reflectDir.xy) * 0.5 + 0.5;\r\n"
	"\t\r\n"
	"\t// Look-up in the 2D texture using the normal map disturbance\r\n"
	"\tgl_FragColor = texture2D(sReflectTex, reflectCoord);\r\n"
	"}";

// Register FragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsh("FragShader.fsh", _FragShader_fsh, 815);

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
0x10fab438,0xfcbfebc6,0x35050100,0x901,0xf121629f,0x0,0x0,0x97040000,0x1000000,0x4000100,0x0,0x18000000,0x203,0x0,0x2020000,0x0,0x0,0xc8010000,0x55535020,0x17,0x1bc,0x1,0x0,0x48,0x0,0x3,0x6d,0x1,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x60004,0x0,0x2,0x0,0x0,0x0,0x0,0xfffc0000,0x3,0x10004,0x0,0x110000,0xffffffff,0x0,0x56780000,0x40000,0x10000,0x10003,0x0,0x2,0x40000,0x110000,0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x4,0x70007,
0x10688,0x10001,0x1,0x20001,0x10003,0x10001,0x1,0x0,0x10000,0x20006,0x20002,0x20000,0x80010000,0x80008001,0x8000,0x0,0x40000,0x4,0x101,0x234fa10,0x20085060,0x20023,0x80000,0x80000000,0x80018001,0x8001,0x0,0x40000,0x40004,0x40004,0x40004,0x1010004,0x1,0x3fa10,0x20008020,0x42301020,0x10025040,0x80300003,0x10069000,0x80840001,0x10868020,0xc00e0000,0x12229000,0x470e0001,0x10065020,0x1a0e0003,0x10065000,0x50003,0x0,0x80000000,0x80018001,0x8001,0x0,0x120000,0xf0001,0x60a000f,0x30003,0x30003,0x0,0x0,0x40004,0x40004,0x10000,0x30002,
0x60001,0xa0000000,0xe0031404,0x6,0xee010000,0x55535020,0x17,0x1e2,0x1,0x0,0x148,0x0,0x3,0x6d,0x1,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x60004,0x0,0x2,0x0,0x0,0x0,0x0,0xfffc0000,0x1,0x10004,0x0,0x110000,0xffffffff,0x0,0x56780000,0x40000,0x10000,0x10003,0x0,0x2,0x40000,0x110000,0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x4,0x70007,0x10688,0x10001,0x1,0x20001,0x10003,0x10001,0x1,0x0,0x10000,0x20006,0x20002,0x20000,0x80010000,
0x80008001,0x8000,0x0,0x40000,0x4,0x101,0x234fa10,0x20085060,0x20023,0x20000,0x80000000,0x80018001,0x8001,0x0,0x40000,0x1010004,0x1,0x3fa10,0x20008020,0x21020,0x30000,0x40440000,0x80018000,0x8001,0x0,0x40000,0x40004,0x44000101,0xfa100008,0x50204230,0x31000,0x80004003,0x201080,0x2,0x2,0x80018001,0x80008000,0x0,0x0,0x40004,0x1010000,0xfa100000,0x5000070e,0x231000,0x5,0x0,0x80018001,0x80008000,0x0,0x0,0x10012,0xf000f,0x1060a,0x10001,0x1,0x0,0x40000,0x40004,0x4,0x20001,0x10003,0x6,0x1400a000,0x6e003,
0x10000000,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x803f,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x3f,0x4e730400,0x616d726f,0x70614d6c,0x18000000,0x1000003,0x20000,0x1000100,0x65540000,0x6f6f4378,0x6472,0x50300,0x100,0x2040001,0x300,0x44657945,0x63657269,0x6e6f6974,0x4000000,0x1000005,0x10000,0x7000300,0x52730000,0x656c6665,0x65547463,0x78,0x318,0x2000001,0x10100,0x1,
};

// Register FragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsc("FragShader.fsc", _FragShader_fsc, 1207);

// ******** End: FragShader.fsc ********
