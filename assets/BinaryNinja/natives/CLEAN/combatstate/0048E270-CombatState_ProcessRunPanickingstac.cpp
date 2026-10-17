// IGI native provenance: CombatState_ProcessRunPanickingstac - 0x0048E270 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048E270-CombatState_ProcessRunPanickingstac.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_ProcessRunPanickingstac.h"

int32_t* CombatState_ProcessRunPanickingstac(void* arg1, int32_t* arg2)

{
    int32_t* eax_3 = arg2;
    void* source_ptr = eax_3[0xa];
    eax_3[6] = FX_RunPanicking;
    *(source_ptr + 0x28) = 0xffffffff;
    int32_t* result;
    long double st0;
    st0 = Vec3_Distance(source_ptr + 8, arg1 + 0x20);
    long double x87_r6_1 = *(source_ptr + 0x20) * 4096.0f;
    x87_r6_1 - st0;
    result = (x87_r6_1 < st0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, st0) ? 1 : 0) << 0xa
        | (x87_r6_1 == st0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        void* eax_1 = *(arg1 + 0x3b6c);

        if (*(eax_1 + 0x5c) >= 0x400)
            return Warning_Show("RunPanicking stack not large enough");

        Physics_ApplyImpulse_8(&arg2, eax_1, source_ptr + 8);
        result = arg2;

        if (result)
            return FX_FireBallUpdate_20(arg1, result, 0xa, FX_FragmentSimulate_20, source_ptr + 8);
    }

    return result;
}
