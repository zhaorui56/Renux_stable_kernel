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
	"\r\n"
	"uniform highp   mat4  MVPMatrix;\r\n"
	"uniform mediump vec3  LightDirModel;\r\n"
	"uniform mediump vec3  EyePosModel;\r\n"
	"uniform         bool  bSpecular;\r\n"
	"uniform\t\t\tbool  bRotate;\r\n"
	"\r\n"
	"varying lowp    float  SpecularIntensity;\r\n"
	"varying mediump vec2   RefractCoord;\r\n"
	"\r\n"
	"const mediump float  cShininess = 3.0;\r\n"
	"const mediump float  cRIR = 1.015;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\t// Transform position\r\n"
	"\tgl_Position = MVPMatrix * vec4(inVertex, 1.0);\r\n"
	"\t\r\n"
	"\t// Eye direction in model space\r\n"
	"\tmediump vec3 eyeDirModel = normalize(inVertex - EyePosModel);\t\r\n"
	"\t\r\n"
	"\t// GLSL offers a nice built-in refaction function\r\n"
	"\t// Calculate refraction direction in model space\r\n"
	"\tmediump vec3 refractDir = refract(eyeDirModel, inNormal, cRIR);\r\n"
	"\t\r\n"
	"\t// Project refraction\r\n"
	"\trefractDir = (MVPMatrix * vec4(refractDir, 0.0)).xyw;\r\n"
	"\r\n"
	"\t// Map refraction direction to 2d coordinates\r\n"
	"\tRefractCoord = 0.5 * (refractDir.xy / refractDir.z) + 0.5;\r\n"
	"\r\n"
	"\tif(bRotate) // If the screen is rotated then rotate the uvs\r\n"
	"\t{\r\n"
	"\t\tRefractCoord.xy = RefractCoord.yx;\r\n"
	"\t\tRefractCoord.y = -RefractCoord.y;\r\n"
	"\t}\r\n"
	"\t\t\r\n"
	"\t// Specular lighting\r\n"
	"\t// We ignore that N dot L could be negative (light coming \r\n"
	"\t// from behind the surface)\r\n"
	"\tSpecularIntensity = 0.0;\r\n"
	"\r\n"
	"\tif (bSpecular)\r\n"
	"\t{\r\n"
	"\t\tmediump vec3 halfVector = normalize(LightDirModel + eyeDirModel);\r\n"
	"\t\tlowp float NdotH = max(dot(inNormal, halfVector), 0.0);\t\t\r\n"
	"\t\tSpecularIntensity = pow(NdotH, cShininess);\r\n"
	"\t}\r\n"
	"}";

// Register VertShader.vsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsh("VertShader.vsh", _VertShader_vsh, 1457);

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
0x10fab438,0x6594e0c3,0x35050100,0x901,0xf121629f,0x0,0x0,0x19080000,0x0,0x4000200,0x0,0x19000000,0x202,0x0,0x1020000,0x0,0x0,0xa0050000,0x55535020,0x17,0x594,0x1,0x0,0xc,0x4,0x3,0x6d,0x1,0x8,0x0,0xffffffff,0x0,0x76000a,0xffff,0xc0007,0x0,0x1b0000,0x0,0x0,0x0,0x0,0xfffc0000,0x0,0x0,0x0,0x110000,0xffffffff,0x1b0000,0x56780007,0x10000,0x4,0x10000,0x10005,0x10000,0x20007,0x10000,0x30008,0x10000,0x40009,0x10000,0x5000b,0x10000,0x6000c,0x10000,
0x7000d,0x10000,0x8000f,0x10000,0x90010,0x10000,0xa0011,0x10000,0xb0013,0x10000,0xc001f,0x10000,0xd0006,0x10000,0xe000a,0x10000,0xf000e,0x10000,0x100012,0x10000,0x110014,0x10000,0x120015,0x10000,0x130016,0x10000,0x14002f,0x10000,0x15003b,0x10000,0x16003c,0x10000,0x17003d,0x10000,0x18003e,0x10000,0x190047,0x40000,0x0,0x1a,0x77,0x4,0x20011,0x40000,0x40ce0000,0x80008001,0x8001,0x0,0x40000,0x0,0x10000,0x8ce01,0x1a1bfa10,0x200c7000,0x818300a2,0x14020020,0x30080,0x10022020,0x20080,0x50000,0x80010000,0x80018001,0x8001,0x0,
0x40000,0x0,0x0,0x1010101,0xfa100000,0x80200180,0x8801240,0x10e000b0,0x811000,0xe0600b00,0x28811002,0xd000cb30,0x811004,0x2,0x2,0x80018000,0x80038003,0x0,0x0,0x4,0x10303,0xfa100000,0xf060050b,0x10a82206,0x2,0x12,0x80018001,0x80018001,0x0,0x0,0x10005,0x10001,0x10001,0x10001,0x10001,0x1,0x0,0x0,0x0,0x1010101,0xfa100000,0x7000da13,0x821005,0xf0000b8c,0x38980606,0x70201a14,0x821005,0xf0004c0f,0x38820606,0xf0008c92,0x38a20206,0x71601a1a,0x821004,0x4103,0x38980602,0xe0a00000,0x28a31000,0x70601a15,0x821005,0xa0014205,0x38a0c006,0x20218380,0x801006,0x900040b4,
0x811086,0x90000030,0x811002,0x60139a00,0x48821682,0x60801800,0x2d831000,0x60801a00,0x29831000,0x10000230,0x48811280,0x3,0x0,0xf9000040,0x20012,0x30000,0x80010000,0x80018001,0x8001,0x0,0x0,0x0,0x80000000,0x8801242,0x80000000,0x8801002,0xe0604b00,0x801006,0x2,0x2,0x80018001,0x80008000,0x0,0x0,0x4,0x1010000,0xfa100000,0xd0014b30,0xa12002,0x2,0x2,0x80008001,0x80018001,0x0,0x0,0x4,0x1000101,0xfa100000,0xa100c200,0xa02084,0x4,0x20012,0x20000,0x80000000,0x80018001,0x8003,0x0,0x40000,0x1030000,0x1,0x40cfa10,0x20023000,0x210a0,0x90000,
0x80010000,0x80008001,0x8000,0x0,0x40000,0x0,0x10000,0x10001,0x1,0x1010000,0xfa100000,0x80200000,0x8801002,0xd0000f30,0x48811280,0xf002050b,0x38ab0602,0xf002468e,0x38820602,0xf0028811,0x38820602,0xb00040a4,0x38a9c206,0xe0200080,0x28831002,0x5080070e,0xa31005,0x3,0x0,0xfd000040,0x20014,0x50000,0x80010000,0x80008001,0x8000,0x0,0x0,0x0,0x0,0x60000280,0x28811002,0x60a00200,0x28811001,0xa0800000,0x28811001,0x60000280,0x28811002,0x50a01a30,0x831085,0x4,0x20014,0x20000,0x80010000,0x80008001,0x8000,0x0,0x0,0x18000000,0x100160c0,0xfb02883,0x1280d000,0x34881,0x0,0x400000,
0x16fd00,0x2,0xd,0x800180ff,0x80018000,0x0,0x0,0x4,0x0,0x0,0x10000,0x0,0x0,0x10000,0xff01,0x5a20fa10,0x20027061,0xc10200a2,0x1406a000,0x40800080,0x1006a000,0x80,0x12428000,0x40300880,0x10069020,0x1820081,0x606a000,0x420538ab,0xc006a001,0x808038a0,0x1006a001,0x300080,0x12029000,0x1881,0x14428000,0x11b00880,0x1006d000,0x81,0x160180c0,0x40880,0x160000,0x2,0x4,0x80018001,0x80018001,0x0,0x0,0x4,0x0,0x1010101,0xfa100000,0x5002c730,0x831002,0x60200700,0x28831002,0x60404180,0x801005,0x6,0x4c00,0x0,0x0,0x803f0000,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x803f0000,0x0,0x0,0x0,0x813f0000,0x85eb,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3f0000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x40400000,0x3f0000,0x3f0000,0x0,0x0,0xa000000,0x65566e69,0x78657472,0x4000000,0x1000004,0x10000,0x7000400,0x6c670000,0x736f505f,0x6f697469,0x100006e,0x505,0x1000001,0x40000,0x4d00000f,0x614d5056,0x78697274,0x16000000,0x1000003,0x10000,0xffff1004,0x79450000,0x736f5065,0x65646f4d,0x6c,0x304,0x1000001,0x41400,0x69000007,0x726f4e6e,0x6c616d,0x4040000,0x10000,0x4000100,0x70004,0x66655200,0x74636172,0x726f6f43,0x64,0x503,0x1000001,0x20000,0x62000003,0x61746f52,0x6574,0x30a00,0x100,0x42f0001,0x100,0x63657053,0x72616c75,0x65746e49,0x7469736e,0x79,0x502,0x1000001,0x10400,0x62000001,
0x63657053,0x72616c75,0xa000000,0x1000003,0x10000,0x100043b,0x694c0000,0x44746867,0x6f4d7269,0x6c6564,0x3040000,0x10000,0x3c000100,0x70004,0x0,
};

// Register VertShader.vsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsc("VertShader.vsc", _VertShader_vsc, 2105);

// ******** End: VertShader.vsc ********

