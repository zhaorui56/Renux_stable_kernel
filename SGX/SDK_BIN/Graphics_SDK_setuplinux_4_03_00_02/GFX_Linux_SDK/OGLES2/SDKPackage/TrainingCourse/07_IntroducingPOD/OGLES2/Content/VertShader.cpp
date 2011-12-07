// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: VertShader.vsh ********

// File data
static const char _VertShader_vsh[] = 
	"attribute highp   vec3  inVertex;\r\n"
	"attribute mediump vec3  inNormal;\r\n"
	"attribute mediump vec2  inTexCoord;\r\n"
	"\r\n"
	"uniform highp   mat4  MVPMatrix;\r\n"
	"uniform mediump vec3  LightDirection;\r\n"
	"\r\n"
	"varying lowp    float  LightIntensity;\r\n"
	"varying mediump vec2   TexCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\t// Transform position\r\n"
	"\tgl_Position = MVPMatrix * vec4(inVertex, 1.0);\r\n"
	"\r\n"
	"\t// Pass through texcoords\r\n"
	"\tTexCoord = inTexCoord;\r\n"
	"\t\r\n"
	"\t// Simple diffuse lighting in model space\r\n"
	"\tLightIntensity = dot(inNormal, -LightDirection);\r\n"
	"}";

// Register VertShader.vsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsh("VertShader.vsh", _VertShader_vsh, 503);

// ******** End: VertShader.vsh ********

// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: VertShader.vsc ********

// File data
A32BIT _VertShader_vsc[] = {
0x10fab438,0x21cef5bb,0x35050100,0x901,0xf121629f,0x0,0x0,0x5e030000,0x0,0x4000200,0x0,0x19000000,0x202,0x0,0x1020000,0x0,0x0,0xe0010000,0x55535020,0x17,0x1d4,0x1,0x0,0xc,0x0,0x3,0x6d,0x1,0x8,0x0,0xffffffff,0x0,0x76000a,0xffff,0xb,0x0,0x130000,0x0,0x0,0x0,0x0,0xfffc0000,0x0,0x0,0x0,0x110000,0xffffffff,0x130000,0x5678000b,0x10000,0x4,0x10000,0x10005,0x10000,0x20006,0x10000,0x30007,0x10000,0x40008,0x10000,0x50009,0x10000,0x6000a,0x10000,
0x7000b,0x10000,0x8000c,0x10000,0x9000d,0x10000,0xa000e,0x10000,0xb000f,0x10000,0xc0010,0x10000,0xd0011,0x10000,0xe0012,0x10000,0xf0013,0x10000,0x100014,0x10000,0x110015,0x10000,0x120016,0x7370000,0x40000,0x110000,0x2,0x2,0x80018001,0x80018001,0x0,0x0,0x0,0xa0800200,0x28a11001,0xb080041a,0x10a02009,0x2,0xc,0x80018000,0x80048004,0x0,0x0,0x4,0x10000,0x10001,0x10001,0x1,0x0,0x10404,0xfa100000,0x60800700,0x28831002,0xf060050b,0x10a82206,0x7000da16,0x821005,0xf000060d,0x38980606,0x70201a17,0x821005,0xf0004811,0x38820606,0xf0008a15,
0x38a20206,0xe0200080,0x28831002,0xd0000c0e,0x811206,0x70605a19,0x821005,0x60410180,0x801005,0x6,0x1c00,0x0,0x0,0x803f0000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3f0000,0x3f0000,0x0,0x0,0x8000000,0x65566e69,0x78657472,0x4000000,0x1000004,0x10000,0x7000400,0x6c670000,0x736f505f,0x6f697469,0x100006e,0x505,0x1000001,0x40000,0x4d00000f,0x614d5056,0x78697274,0x16000000,0x1000003,0x10000,0xffff1004,0x65540000,0x6f6f4378,0x6472,0x50300,0x100,
0x2000001,0x300,0x65546e69,0x6f6f4378,0x6472,0x40300,0x100,0x4040001,0x300,0x6f4e6e69,0x6c616d72,0x4000000,0x1000004,0x10000,0x7000408,0x694c0000,0x44746867,0x63657269,0x6e6f6974,0x4000000,0x1000003,0x10000,0x7000414,0x694c0000,0x49746867,0x6e65746e,0x79746973,0x2000000,0x1000005,0x10000,0x1000104,0x0,
};

// Register VertShader.vsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsc("VertShader.vsc", _VertShader_vsc, 894);

// ******** End: VertShader.vsc ********

