// IGI native provenance: DynObj_LookupHashItem_6 - 0x004C5710 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004C5710-DynObj_LookupHashItem_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LookupHashItem_6.h"
int32_t DynObj_LookupHashItem_6(int32_t context, void* param_2, int32_t param_3)

{
    DynObj_LookupHashItem_9(param_2);
    *(param_2 + 0x68) = context;
    *(param_2 + 0x6c) = param_3;
    *(param_2 + 0x70) = 0x3f800000;
    *(param_2 + 0x74) = 0;
    *(param_2 + 0x78) = 0;
    *(param_2 + 0x7c) = 0;
    *(param_2 + 0x80) = 0x3f800000;
    *(param_2 + 0x84) = 0;
    *(param_2 + 0x88) = 0;
    *(param_2 + 0x8c) = 0;
    *(param_2 + 0x90) = 0x3f800000;
    *(param_2 + 0x94) = 0;
    *(param_2 + 0x98) = 0x3f800000;
    *(param_2 + 0x9c) = 0x3f800000;
    *(param_2 + 0xa0) = 0x3f800000;
    *(param_2 + 0xe4) = 0;
    *(param_2 + 0xa4) = 0;
    *(param_2 + 0xd4) = 2;
    *(param_2 + 0xa8) = 0x3f800000;
    *(param_2 + 0xac) = 0x3f800000;
    *(param_2 + 0xb0) = 0x3f800000;
    memset(param_2 + 0xb4, 0, 0x20);
    *(param_2 + 0xd8) = 1;
    *(param_2 + 0xdc) = 0;
    *(param_2 + 0xe0) = 1;
    *(param_2 + 0xe8) = 0;
    *(param_2 + 0xec) = 1;
    return 0;
}
