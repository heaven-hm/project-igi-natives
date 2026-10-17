// IGI native provenance: CombatState_DefaultHandler_485570 - 0x00485570 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485570-CombatState_DefaultHandler_485570.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_DefaultHandler_485570.h"

int32_t* CombatState_DefaultHandler_485570(void* arg1)

{
    *(arg1 + 0xb0) = 0;
    *(arg1 + 0xb4) = 0;
    *(arg1 + 0x1b4) = 0;
    *(arg1 + 0x1c4) = 0;
    *(arg1 + 0x1c5) = 0;
    *(arg1 + 0x1c6) = 0;
    int32_t* result = Script_ExecuteLevelScript_6(arg1 + 0x60);
    *(arg1 + 0x1c8) = 0xfffe7960;
    *(arg1 + 0x1d4) = 0;
    *(arg1 + 0x1d5) = 0;
    *(arg1 + 0x1cc) = 0xffffffff;
    *(arg1 + 0x1d0) = 0;
    *(arg1 + 0x1d6) = 0;
    *(arg1 + 0x1d8) = 0x40000000;
    return result;
}
