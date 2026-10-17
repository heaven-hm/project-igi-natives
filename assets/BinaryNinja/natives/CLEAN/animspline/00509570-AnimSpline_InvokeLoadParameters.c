// IGI native provenance: AnimSpline_InvokeLoadParameters - 0x00509570 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00509570-AnimSpline_InvokeLoadParameters.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_InvokeLoadParameters.h"

int32_t AnimSpline_InvokeLoadParameters(void* arg1, int32_t arg2)

{
    int32_t var_8 = arg2;
    Graph_LoadParameters(arg1);
    *(arg1 + 0x80) = 0;
    *(arg1 + 0xa0) = 0;
    *(arg1 + 0x84) = 0x3ff00000;
    *(arg1 + 0xa4) = 0x3ff00000;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x90) = 0;
    __builtin_strncpy(arg1 + 0x98, "3333", 4);
    *(arg1 + 0xa8) = 0x9999999a;
    *(arg1 + 0x8c) = 0x40000000;
    *(arg1 + 0x94) = 0x40080000;
    *(arg1 + 0x9c) = 0x3fd33333;
    *(arg1 + 0xac) = 0x3fa99999;
    *(arg1 + 0xbc) = 0;
    *(arg1 + 0xb0) = 0xffffffff;
    *(arg1 + 0xb4) = 0xffffffff;
    *(arg1 + 0xb8) = 0;
    return 0;
}
