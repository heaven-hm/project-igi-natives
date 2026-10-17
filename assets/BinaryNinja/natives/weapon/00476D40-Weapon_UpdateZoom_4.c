// IGI native provenance: Weapon_UpdateZoom_4 - 0x00476D40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00476D40-Weapon_UpdateZoom_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateZoom_4.h"
int32_t* Weapon_UpdateZoom_4(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    int32_t item_1c = param_2;
    int32_t item_10 = param_4;
    int32_t item_14 = param_3;
    int32_t item_18 = 0xffffffff;
    int32_t item_c = context + 0x20;
    int32_t item_8 = context;
    int32_t item_4 = 0;
    return AI_EventBroadcast(&item_1c);
}
