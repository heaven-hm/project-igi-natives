// IGI native provenance: AI_FireWeapon_6 - 0x004544C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004544C0-AI_FireWeapon_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_6.h"
int32_t AI_FireWeapon_6(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(param_2 + 0x664) = *(param_2 + 0x688);
    int32_t result = *(param_2 + 0x68c);
    *(param_2 + 0x668) = result;
    *(param_2 + 0x66c) = *(param_2 + 0x690);
    *(context + 0x14) = AI_MoveToNode_6;
    return result;
}
