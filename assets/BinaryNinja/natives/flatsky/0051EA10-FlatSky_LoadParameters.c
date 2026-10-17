// IGI native provenance: FlatSky_LoadParameters - 0x0051EA10 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051EA10-FlatSky_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FlatSky_LoadParameters.h"
int32_t FlatSky_LoadParameters(void* context)

{
    void* data_val = g_a44344;
    *(context + 0x68) = data_val;
    *(context + 0x74) = 0x3f000000;
    *(context + 0x70) = 0x42c80000;
    *(context + 0x6c) = 0x40a00000;
    *(context + 0x78) = 0;
    *(context + 0x7c) = 0;
    *(context + 0x80) = 0;
    DynObj_RegisterSymbol_8(data_val, context, 0xffffffff);
    *(context + 0x84) = PushButton_Process();
    *(context + 0x88) = 0x41700000;
    *(context + 0x8c) = 0x3e428f5c;
    *(context + 0x90) = 0x3e99999a;
    *(context + 0x94) = 0x3edc28f6;
    memcpy(context + 0x98,
        "\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x"
    "3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc"
    "3e\x00",
        0x31);
    return 0x3e428f5c;
}
