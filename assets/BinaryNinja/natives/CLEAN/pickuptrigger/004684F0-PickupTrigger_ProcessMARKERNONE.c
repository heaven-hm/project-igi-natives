// IGI native provenance: PickupTrigger_ProcessMARKERNONE - 0x004684F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004684F0-PickupTrigger_ProcessMARKERNONE.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_ProcessMARKERNONE.h"

int32_t* PickupTrigger_ProcessMARKERNONE(void* arg1)

{
    Script_ExecuteLevelScript_6(arg1 + 0x38);
    *(arg1 + 0x8c) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x18c) = 0;
    *(arg1 + 0x290) = 0;
    Game_DataSymbolLoad(arg1 + 0x294, "MARKER_NONE");
    *(arg1 + 0x2b4) = 0xffffffff;
    Game_DataSymbolLoad(arg1 + 0x2b8, "MARKER_COLOR_NONE");
    *(arg1 + 0x2d8) = 0xffffffff;
    *(arg1 + 0x2dc) = 0;
    *(arg1 + 0x3dc) = 0;
    return DynObj_QtasklistIsFull(g_5bdc80, arg1);
}
