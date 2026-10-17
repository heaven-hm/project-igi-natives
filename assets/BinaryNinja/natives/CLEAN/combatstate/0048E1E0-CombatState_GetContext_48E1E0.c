// IGI native provenance: CombatState_GetContext_48E1E0 - 0x0048E1E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048E1E0-CombatState_GetContext_48E1E0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_GetContext_48E1E0.h"

int32_t* CombatState_GetContext_48E1E0(void* arg1, int32_t* arg2)

{
    int32_t* eax_1 = arg2;
    void* source_ptr = eax_1[0xa];
    eax_1[6] = AIAction_KickGrenade_Run;
    eax_1[8] = CombatState_ProcessKickgrenade;
    Physics_ApplyImpulse_8(&arg2, *(arg1 + 0x3b6c), source_ptr + 8);
    int32_t* result = arg2;
    int32_t ecx_1 = *result;
    *(source_ptr + 0x24) = 0;
    *(source_ptr + 0x20) = ecx_1;
    return result;
}
