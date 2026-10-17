// IGI native provenance: AI_FireWeapon_23 - 0x00465800 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00465800-AI_FireWeapon_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_23.h"
int32_t AI_FireWeapon_23(int32_t context, int32_t param_2)

{
    memcpy(context, param_2 + 0xe0, 0x18);
    return param_2;
}
