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
	"attribute highp vec3  inVertex;\r\n"
	"attribute highp vec3  inNormal;\r\n"
	"attribute highp vec2  inTexCoord;\r\n"
	"\r\n"
	"uniform highp mat4  ModelViewMatrix;\r\n"
	"uniform highp mat4  ProjectionMatrix;\r\n"
	"varying highp vec4  color;\r\n"
	"varying highp vec2  TexCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\tgl_Position = ProjectionMatrix * ModelViewMatrix * vec4(inVertex, 1.0);\r\n"
	"\tTexCoord = inTexCoord;\r\n"
	"\t\r\n"
	"\tcolor = vec4(1.0, 1.0, 1.0, 1.0);\r\n"
	"}";

// Register VertShader.vsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsh("VertShader.vsh", _VertShader_vsh, 396);

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
0x10fab438,0x3ccd5946,0x35050100,0x901,0xf121629f,0x0,0x0,0x7d050000,0x0,0x4000200,0x0,0x19000000,0xd10204,0xc16500,0x3030000,0xa10000,0x910000,0xda030000,0x55535020,0x17,0x3ce,0x1,0x0,0xc,0x0,0x3,0x6d,0x1,0x8,0x0,0xffffffff,0x0,0x76000a,0xffff,0x150006,0x0,0x200000,0x0,0x0,0x0,0x0,0xfffc0000,0x0,0x0,0x0,0x110000,0xffffffff,0x200000,0x56780006,0x10000,0x0,0x10000,0x10001,0x10000,0x20002,0x10000,0x30003,0x10000,0x40004,0x10000,0x50005,0x10000,0x60006,0x10000,
0x70007,0x10000,0x80008,0x10000,0x90009,0x10000,0xa000a,0x10000,0xb000b,0x10000,0xc000c,0x10000,0xd000d,0x10000,0xe000e,0x10000,0xf000f,0x10000,0x100010,0x10000,0x110011,0x10000,0x120012,0x10000,0x130013,0x10000,0x140014,0x10000,0x150015,0x10000,0x160016,0x10000,0x170017,0x10000,0x180018,0x10000,0x190019,0x10000,0x1a001a,0x10000,0x1b001b,0x10000,0x1c001c,0x10000,0x1d001d,0x10000,0x1e001e,0x10000,0x1f001f,0x370000,0x40000,0x110000,0x2,0x5,0x80018001,0x80018001,0x0,0x0,0x0,0x0,0xd000000,0x3000e200,0xf0028a1,0x3000e180,
0x110028a1,0x3000e100,0x130028a1,0x3000e080,0x20028a1,0x1001a100,0x228a1,0x20000,0x80010000,0x80008000,0x8001,0x0,0x40000,0x10000,0x100,0x1a00fa10,0x30016080,0x228a3,0x30000,0x80000000,0x80048001,0x8004,0x0,0x40000,0x0,0x10404,0xfa100000,0x62800700,0x28831000,0xf041050b,0x10a83200,0x2,0x11,0x80018001,0x80018000,0x0,0x0,0x10005,0x10001,0x10001,0x10001,0x10001,0x10001,0x10001,0x10001,0x10001,0x101,0x50bfa10,0x600f062,0x470f3898,0x602f062,0x89133882,0x602f062,0xcb173882,0x202f0a2,0x50b38a2,0x600f023,0x470f3898,0x602f063,0x89133882,0x602f063,0xcb173882,0x202f083,0x50b38a2,
0x600f004,0x470f3898,0x602f064,0x89133882,0x602f064,0xcb173882,0x602f064,0x3882,0xc606a060,0x42003888,0x6068060,0x82813882,0x6068080,0x9a003882,0x10017000,0x200a3,0x140000,0x80000000,0x80048001,0x8004,0x0,0x40000,0x10000,0x10001,0x10001,0x10001,0x10001,0x10001,0x10001,0x10001,0x10001,0x4040000,0x1,0x60dfa10,0x3200f041,0x60d10a8,0x600f062,0x48113898,0x602f062,0x8a153882,0x602f062,0xcc193882,0x200f022,0x60d38a2,0x600f003,0x48113898,0x602f063,0x8a153882,0x602f063,0xcc193882,0x202f0a3,0x60d38a2,0x602f084,0x48113898,0x602f064,0x8a153882,0x602f064,0xcc193882,0x602f064,0x3882,0xc606a000,0x42843888,0x606a000,0x80803882,
0x6060000,0x800e3882,0x1202d000,0xda010083,0x10017060,0x1800083,0x10016045,0x60080,0x2c000000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x803f,0x803f,0x803f,0x803f,0x803f,0x3f,0x3f,0x0,0x0,0x72500700,0x63656a6f,0x6e6f6974,0x7274614d,0x7869,0x31600,0x100,0x10000001,0xffff,0x65646f4d,0x6569566c,
0x74614d77,0x786972,0x3160000,0x10000,0x10000100,0xffff10,0x566e6900,0x65747265,0x78,0x404,0x1000001,0x40000,0x67000007,0x6f505f6c,0x69746973,0x6e6f,0x50501,0x100,0x4000001,0xf00,0x43786554,0x64726f6f,0x3000000,0x1000005,0x10000,0x3000204,0x6e690000,0x43786554,0x64726f6f,0x3000000,0x1000004,0x10000,0x3000404,0x6f630000,0x726f6c,0x5050000,0x10000,0x100,0xf0004,0x0,
};

// Register VertShader.vsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsc("VertShader.vsc", _VertShader_vsc, 1437);

// ******** End: VertShader.vsc ********

