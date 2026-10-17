// IGI native provenance: AnimSpline_GetContext_508290 - 0x00508290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00508290-AnimSpline_GetContext_508290.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_GetContext_508290.h"

void* AnimSpline_GetContext_508290(void* arg1)

{
    *(arg1 + 0x94) = 1;
    *(arg1 + 0x8c) = 0xffffffff;
    *(arg1 + 0x90) = 0xffffffff;
    *(arg1 + 0x95) = 1;
    *(arg1 + 0x96) = 1;
    __builtin_memset(arg1 + 0x20, 0, 0x28);
    *(arg1 + 0xa8) = 0;
    *(arg1 + 0x88) = 0x3f800000;
    *(arg1 + 0x98) = 0xbf800000;
    *(arg1 + 0x9c) = 0;
    *(arg1 + 0xa0) = 0;
    *(arg1 + 0xa4) = 0;
    *(arg1 + 0xd0) = 0x3f000000;
    *(arg1 + 0xd4) = 0;
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xdc) = 0;
    *(arg1 + 0xe0) = 0;
    int16_t* source_ptr;
    int16_t* edi_1;
    edi_1 = __builtin_memcpy(arg1 + 0xa9, "CAMERAFILTER_TYPE_NONE", 0x14);
    *edi_1 = *source_ptr;
    edi_1[1] = source_ptr[1];
    *(arg1 + 0xcc) = 0;
    return arg1;
}
