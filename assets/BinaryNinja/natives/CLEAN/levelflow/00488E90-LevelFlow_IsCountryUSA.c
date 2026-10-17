// IGI native provenance: LevelFlow_IsCountryUSA - 0x00488E90 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488E90-LevelFlow_IsCountryUSA.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelFlow_IsCountryUSA.h"
int32_t LevelFlow_IsCountryUSA(int32_t context)

// Sig: int LevelFlow_IsCountryUSA()
// Note: RETURNS 1 if the running build is a USA country build, 0 otherwise
// (affects censorship/content paths like blood). Takes no args. Check before
// enabling content that country builds gate.
{
    int32_t item_18 = FX_SmokeEmit_26();
    char* item_8 = &g_567c74;
    double item_10 = FX_SmokeEmit_26();
    memcpy(context, &item_18, 0x18);
    return context;
}
