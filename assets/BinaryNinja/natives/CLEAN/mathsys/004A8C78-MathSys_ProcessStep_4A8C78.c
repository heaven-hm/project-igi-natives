// IGI native provenance: MathSys_ProcessStep_4A8C78 - 0x004A8C78 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8C78-MathSys_ProcessStep_4A8C78.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_ProcessStep_4A8C78.h"

int32_t __fastcall MathSys_ProcessStep_4A8C78(char arg1, void* arg2) __location("st0")

{
    if (*(arg2 - 0x90) <= 0)
        /* tailcall */
        return Camera_SetFieldOfView_16(arg1, arg2);

    int32_t ecx_1;
    ecx_1 = arg1;
    return g_5443b0;
}
