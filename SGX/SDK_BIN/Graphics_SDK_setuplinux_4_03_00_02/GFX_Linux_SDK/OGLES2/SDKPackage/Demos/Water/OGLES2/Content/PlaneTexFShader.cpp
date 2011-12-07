// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: PlaneTexFShader.fsh ********

// File data
static const char _PlaneTexFShader_fsh[] = 
	"uniform sampler2D\t\tTexture;\r\n"
	"\r\n"
	"uniform mediump vec2 \tRcpWindowSize;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\t\r\n"
	"\tmediump vec2 vTexCoord = gl_FragCoord.xy * RcpWindowSize;\r\n"
	"\tgl_FragColor = texture2D(Texture, vTexCoord);\r\n"
	"}\r\n";

// Register PlaneTexFShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_PlaneTexFShader_fsh("PlaneTexFShader.fsh", _PlaneTexFShader_fsh, 199);

// ******** End: PlaneTexFShader.fsh ********

// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: PlaneTexFShader.fsc ********

// File data
A32BIT _PlaneTexFShader_fsc[] = {
0x10fab438,0x8bde14cb,0x35050100,0x901,0xf121629f,0x0,0x0,0x43030000,0x1000000,0x4000100,0x0,0x0,0x10000,0x0,0x10000,0x0,0x51,0x52010000,0x55535020,0x17,0x146,0x1,0x0,0x48,0x0,0x3,0x6d,0x1,0x8,0x0,0xffffffff,0x0,0x770009,0xffff,0x10002,0x0,0x50001,0x0,0x0,0x0,0x0,0xfffc0000,0x3,0x10004,0x0,0x110000,0xffffffff,0x50000,0x56780000,0x40000,0xe0000,0x10002,0x1,0x0,0x10001,0x1,0x50001,0x2,0x60001,0x3,0x70001,0x4,0x4,0x20011,
0x50000,0x80010000,0x80018001,0x8001,0x0,0x40000,0x40004,0x40004,0x70001a0c,0x2100c,0x70005a0d,0x2100e,0x70201a0b,0x21086,0xd00004b0,0x11002,0xd0204530,0x11106,0x5,0x0,0x80018001,0x80018001,0x0,0x0,0x12,0xf000f,0x3060a,0x30003,0x3,0x0,0x40000,0x40004,0x4,0x20001,0x10003,0x1,0x1404a000,0x6e003,0x0,0x50204801,0x175553,0x13c0000,0x10000,0x0,0x1480000,0x0,0x30000,0x6d0000,0x10000,0x80000,0x0,0xffff0000,0xffff,0x90000,0xffff0077,0x20000,0x3,0x10000,0x5,0x0,0x0,0x0,0x0,0x1fffc,
0x40000,0x1,0x0,0xffff0011,0xffff,0x5,0x5678,0x4,0x2000e,0x10001,0x0,0x10000,0x10001,0x10000,0x20005,0x10000,0x30006,0x10000,0x40007,0x40000,0x110000,0x2,0x4,0x80018001,0x80018001,0x0,0x0,0x40004,0x40004,0xf0200609,0x1224,0x70005a0d,0x2100c,0x70001a0b,0x21080,0xd0400530,0x11100,0x5,0x0,0x80018001,0x80018001,0x0,0x0,0x12,0xf000f,0x1060a,0x10001,0x1,0x0,0x40000,0x40004,0x4,0x20001,0x10003,0x40000003,0x1400a000,0x6e003,0x8000000,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x63520300,0x6e695770,0x53776f64,0x657a69,0x3030000,0x10000,0x100,0x30004,0x78655400,0x65727574,0x18000000,0x1000003,0x20000,0x1000100,0x6c670000,0x584d505f,0x41736f50,0x73756a64,0x57000074,0x305,0x1000001,0x40400,0xf,
};

// Register PlaneTexFShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_PlaneTexFShader_fsc("PlaneTexFShader.fsc", _PlaneTexFShader_fsc, 867);

// ******** End: PlaneTexFShader.fsc ********
