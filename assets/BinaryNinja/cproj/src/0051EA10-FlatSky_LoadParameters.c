#include "gi_platform.h"
#include "0051EA10-FlatSky_LoadParameters.h"
int32_t FlatSky_LoadParameters(void* a1)

{
    void* valA = g_a44344;
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = valA;
    (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0x3f000000;
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 0x42c80000;
    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0x40a00000;
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x80)) = 0;
    DynObj_RegisterSymbol_8(valA, a1, 0xffffffff);
    (*(int32_t*)(uintptr_t)(a1 + 0x84)) = PushButton_Process();
    (*(int32_t*)(uintptr_t)(a1 + 0x88)) = 0x41700000;
    (*(int32_t*)(uintptr_t)(a1 + 0x8c)) = 0x3e428f5c;
    (*(int32_t*)(uintptr_t)(a1 + 0x90)) = 0x3e99999a;
    (*(int32_t*)(uintptr_t)(a1 + 0x94)) = 0x3edc28f6;
    memcpy(a1 + 0x98,
        "\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x"
    "3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc"
    "3e\x00",
        0x31);
    return 0x3e428f5c;
}
