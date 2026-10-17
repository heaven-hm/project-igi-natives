// IGI native provenance: Weapon_UpdateBarrel - 0x00470F70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470F70-Weapon_UpdateBarrel.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateBarrel.h"
void* Weapon_UpdateBarrel(void* context, float* param_2, float* param_3, float param_4)

{
    long double fpu7 = 1.0 / param_4;
    *param_2 = *(context + 0x48) * *param_3 * fpu7;
    param_2[1] = *(context + 0x4c) * param_3[1] * fpu7;
    return context;
}
