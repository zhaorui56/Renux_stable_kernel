// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: SlowFragShader.fsh ********

// File data
static const char _SlowFragShader_fsh[] = 
	"varying lowp vec3  DiffuseIntensity; \r\n"
	"varying lowp vec3  SpecularIntensity;\r\n"
	"\r\n"
	"const lowp vec3 cBaseColor = vec3(0.9, 0.1, 0.1); \r\n"
	" \r\n"
	"void main() \r\n"
	"{ \r\n"
	"\tgl_FragColor = vec4((cBaseColor * DiffuseIntensity) + SpecularIntensity, 1.0); \r\n"
	"}\r\n";

// Register SlowFragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_SlowFragShader_fsh("SlowFragShader.fsh", _SlowFragShader_fsh, 238);

// ******** End: SlowFragShader.fsh ********

// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: SlowFragShader.fsc ********

// File data
A32BIT _SlowFragShader_fsc[] = {
0x10fab438,0xee956c48,0x35050100,0x901,0xf121629f,0x0,0x0,0xb3020000,0x1000000,0x4000100,0x0,0x18000000,0x303,0xc0000000,0x1010020,0x0,0x21,0x8010000,0x55535020,0x17,0xfc,0x1,0x0,0x48,0x0,0x3,0x6d,0x1,0x8,0x0,0xffffffff,0x0,0x770009,0xffff,0x6,0x0,0x30002,0x0,0x0,0x0,0x0,0xfffc0000,0x3,0x10004,0x0,0x110000,0xffffffff,0x30000,0x56780000,0x40000,0x10000,0x10003,0x4,0x30002,0x10001,0x0,0x10000,0x10001,0x10000,0x20002,0x40000,0x110000,0x2,0x6,
0x80018001,0x80018001,0x0,0x0,0x0,0x0,0x100012,0xd00004b0,0x811006,0xe0804504,0x801006,0xe0208585,0x801006,0x60001a03,0x821006,0xa0040200,0x40801c1a,0x900400b4,0x40811c26,0x6,0x16010000,0x55535020,0x17,0x10a,0x1,0x0,0x148,0x0,0x3,0x6d,0x1,0x8,0x0,0xffffffff,0x0,0x770009,0xffff,0x30006,0x0,0x30002,0x0,0x0,0x0,0x0,0xfffc0000,0x1,0x10004,0x0,0x110000,0xffffffff,0x30000,0x56780000,0x40000,0x10000,0x10003,0x4,0x30002,0x10001,0x0,0x10000,0x10001,0x10000,0x20002,0x40000,
0x110000,0x2,0x2,0x80014092,0x80018001,0x0,0x0,0x4,0x92010101,0xfa100008,0xe0000483,0xa02004,0x2,0x3,0x80018001,0x80018001,0x0,0x0,0x120004,0x1010010,0x101,0x2fa10,0x1c180004,0xb44080,0x1c241004,0x64081,0x8000000,0x6666663f,0xcdcccc3d,0xcdcccc3d,0x0,0x0,0x0,0x0,0x803f,0x69440200,0x73756666,0x746e4965,0x69736e65,0x7974,0x50400,0x100,0x3000001,0x700,0x63657053,0x72616c75,0x65746e49,0x7469736e,0x79,0x504,0x1000001,0x30400,0x7,
};

// Register SlowFragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_SlowFragShader_fsc("SlowFragShader.fsc", _SlowFragShader_fsc, 723);

// ******** End: SlowFragShader.fsc ********

