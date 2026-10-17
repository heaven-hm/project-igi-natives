// IGI native provenance: ExplosionObj_InvokeTrailUpdate_43B110 - 0x0043B110 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043B110-ExplosionObj_InvokeTrailUpdate_43B110.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_InvokeTrailUpdate_43B110.h"

char* ExplosionObj_InvokeTrailUpdate_43B110(void* arg1)

{
    (*((FX_TrailUpdate() << 2) + &g_a976e0))(arg1);
    int32_t* eax_3 = *(arg1 + 0x238);

    if (eax_3)
    {
        Qtask_UpdateList(eax_3);
        *(arg1 + 0x238) = 0;
    }

    return Script_CallNativeHandler_6(arg1 + 0x244);
}
