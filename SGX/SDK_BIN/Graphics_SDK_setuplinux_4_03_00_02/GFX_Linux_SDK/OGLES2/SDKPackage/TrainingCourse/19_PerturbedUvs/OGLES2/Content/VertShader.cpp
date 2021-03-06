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
	"attribute mediump vec3  inTangent;\r\n"
	"\r\n"
	"uniform highp   mat4  MVPMatrix;\r\n"
	"uniform mediump vec3  EyePosModel;\r\n"
	"\r\n"
	"varying mediump vec3  EyeDirection;\r\n"
	"varying mediump vec2  TexCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\t// Transform position\r\n"
	"\tgl_Position = MVPMatrix * vec4(inVertex,1.0);\r\n"
	"\t\r\n"
	"\t// Calculate direction from eye position in model space\r\n"
	"\tmediump vec3 eyeDirModel = normalize(EyePosModel - inVertex);\r\n"
	"\t\t\t\r\n"
	"\t// transform light direction from model space to tangent space\r\n"
	"\tmediump vec3 binormal = cross(inNormal, inTangent);\r\n"
	"\tmediump mat3 tangentSpaceXform = mat3(inTangent, binormal, inNormal);\r\n"
	"\tEyeDirection = eyeDirModel * tangentSpaceXform;\t\r\n"
	"\r\n"
	"\tTexCoord = inTexCoord;\r\n"
	"}\r\n";

// Register VertShader.vsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsh("VertShader.vsh", _VertShader_vsh, 779);

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
0x10fab438,0x6429c295,0x35050100,0x901,0xf121629f,0x0,0x0,0x4a040000,0x0,0x4000200,0x0,0x19000000,0x203,0x0,0x2020000,0x0,0x0,0xb6020000,0x55535020,0x17,0x2aa,0x1,0x0,0xc,0x0,0x3,0x6d,0x1,0x8,0x0,0xffffffff,0x0,0x76000a,0xffff,0x4000e,0x0,0x130000,0x0,0x0,0x0,0x0,0xfffc0000,0x0,0x0,0x0,0x110000,0xffffffff,0x130000,0x5678000e,0x10000,0x4,0x10000,0x10005,0x10000,0x20006,0x10000,0x30007,0x10000,0x40008,0x10000,0x50009,0x10000,0x6000a,0x10000,
0x7000b,0x10000,0x8000c,0x10000,0x9000d,0x10000,0xa000e,0x10000,0xb000f,0x10000,0xc0010,0x10000,0xd0011,0x10000,0xe0012,0x10000,0xf0013,0x10000,0x100014,0x10000,0x110015,0x10000,0x120016,0x37770000,0x40000,0x110000,0x2,0x9,0x80018001,0x80018001,0x0,0x0,0x0,0x0,0x0,0x0,0x1a1a0000,0x10847020,0x9a1c00a2,0x108670e0,0x41020082,0x14020060,0xc3830080,0x1006a061,0x1800080,0x12428160,0xc5b00880,0x10049061,0x84b00081,0x10069061,0x45030081,0x100ca001,0x6000080,0x1001a0e0,0x228a1,0x30000,0x80000000,0x80048001,0x8004,0x0,0x40000,0x0,0x10404,0xfa100000,
0x60e00700,0x28831002,0xf060050b,0x10a82206,0x2,0x15,0x80008001,0x800280f7,0x0,0x0,0x10005,0x10001,0x10001,0x10001,0x10001,0x10001,0x10001,0x10001,0x0,0x10001,0xf7020000,0x100,0xda16fa10,0x10057000,0x60d0082,0x606f000,0x1a173898,0x10057020,0x48110082,0x606f000,0x8a153882,0x206f000,0xc0e38a2,0x1206d020,0xc0820081,0x6060002,0x3898,0x1002e060,0x1a192883,0x10057060,0xc1810082,0x10056041,0xc0300080,0x10061040,0x5030081,0x606a001,0x84003898,0x100eb021,0x820081,0x1006a040,0x2810080,0x1006b020,0xc3010081,0x1001a0c0,0x2830080,0x606a022,0x48038ab,0x100eb021,0x4810081,0x1006b000,0xc5000081,0x1001a080,0x600a0,0x1c000000,
0x0,0x0,0x0,0x803f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3f,0x3f,0x0,0x0,0x6e690900,0x74726556,0x7865,0x40400,0x100,0x4000001,0x700,0x505f6c67,0x7469736f,0x6e6f69,0x5050100,0x10000,0x100,0xf0004,0x50564d00,0x7274614d,0x7869,0x31600,0x100,0x10040001,0xffff,0x50657945,0x6f4d736f,0x6c6564,0x3040000,0x10000,0x14000100,0x70004,0x4e6e6900,0x616d726f,0x6c,0x404,0x1000001,0x40400,0x69000007,0x6e61546e,
0x746e6567,0x4000000,0x1000004,0x10000,0x7000408,0x79450000,0x72694465,0x69746365,0x6e6f,0x50400,0x100,0x3000001,0x700,0x43786554,0x64726f6f,0x3000000,0x1000005,0x10000,0x3000204,0x6e690000,0x43786554,0x64726f6f,0x3000000,0x1000004,0x10000,0x300040c,0x0,
};

// Register VertShader.vsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsc("VertShader.vsc", _VertShader_vsc, 1130);

// ******** End: VertShader.vsc ********

