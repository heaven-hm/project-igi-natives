// IGI native provenance: AI_FireWeapon_26 - 0x00469420 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00469420-AI_FireWeapon_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_26.h"
uint32_t AI_FireWeapon_26()

{
    int32_t data_val;
    data_val = g_5bdd70;
    return QTask_CloseEvent_2(data_val);
}
