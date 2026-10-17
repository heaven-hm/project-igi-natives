// Original IGI.EXE function: FlatSky_LoadParameters (VA 0x0051EA10; static CFG gate PASS, CFG score 0.889).
#include "FlatSky_LoadParameters.h"
int32_t FlatSky_LoadParameters(void* a1)

{
    void* valA = g_a44344;
    *(a1 + 0x68) = valA;
    *(a1 + 0x74) = 0x3f000000;
    *(a1 + 0x70) = 0x42c80000;
    *(a1 + 0x6c) = 0x40a00000;
    *(a1 + 0x78) = 0;
    *(a1 + 0x7c) = 0;
    *(a1 + 0x80) = 0;
    DynObj_RegisterSymbol_8(valA, a1, 0xffffffff);
    *(a1 + 0x84) = PushButton_Process();
    *(a1 + 0x88) = 0x41700000;
    *(a1 + 0x8c) = 0x3e428f5c;
    *(a1 + 0x90) = 0x3e99999a;
    *(a1 + 0x94) = 0x3edc28f6;
    memcpy(a1 + 0x98,
        "\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x"
    "3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc"
    "3e\x00",
        0x31);
    return 0x3e428f5c;
}
