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
	"//varying lowp    float  LightIntensity;\r\n"
	"varying mediump vec2   TexCoord;\r\n"
	"varying lowp    vec4  LightColour;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"    gl_FragColor = LightColour * texture2D(sTexture, TexCoord);\r\n"
	"}\r\n";

// Register FragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsh("FragShader.fsh", _FragShader_fsh, 230);

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
0x10fab438,0xa7cd8b58,0x35050100,0x901,0xf121629f,0x0,0x0,0xb9020000,0x1000000,0x4000100,0x0,0x18000000,0x180204,0x18000000,0x2010000,0x80001,0x100002a,0x1c010000,0x55535020,0x17,0x110,0x1,0x0,0x48,0x0,0x3,0x6d,0x1,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x40005,0x0,0x2,0x0,0x0,0x0,0x0,0xfffc0000,0x3,0x10004,0x0,0x110000,0xffffffff,0x0,0x56780000,0x40000,0x10000,0x10004,0x0,0x2,0x40000,0x110000,0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x0,0xf000f,
0x10688,0x10001,0x1,0x20001,0x10003,0x10001,0x1,0x0,0x10000,0x20004,0x20002,0x30000,0x80010000,0x80018001,0x8001,0x0,0x0,0x100012,0x10000030,0xa13006,0xa0040080,0x40801c1a,0xa0040103,0x40801c26,0x6,0x1c010000,0x55535020,0x17,0x110,0x1,0x0,0x148,0x0,0x3,0x6d,0x1,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x40005,0x0,0x2,0x0,0x0,0x0,0x0,0xfffc0000,0x1,0x10004,0x0,0x110000,0xffffffff,0x0,0x56780000,0x40000,0x10000,0x10004,0x0,0x2,0x40000,0x110000,
0x5,0x1,0x80018001,0x80018001,0x0,0x0,0x0,0xf000f,0x10688,0x10001,0x1,0x20001,0x10003,0x10001,0x1,0x0,0x10000,0x20004,0x20002,0x30000,0x80010000,0x80018001,0x8001,0x0,0x0,0x100012,0x10000030,0xa13004,0x40080,0x40801c18,0x40103,0x40801c24,0x6,0x3000000,0x78655473,0x65727574,0x18000000,0x1000003,0x20000,0x1000100,0x65540000,0x6f6f4378,0x6472,0x50300,0x100,0x2040001,0x300,0x6867694c,0x6c6f4374,0x72756f,0x5050000,0x10000,0x100,0xf0004,0x0,
};

// Register FragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsc("FragShader.fsc", _FragShader_fsc, 729);

// ******** End: FragShader.fsc ********

