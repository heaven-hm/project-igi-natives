// IGI native provenance: MathSys_Invoke17_4A9AEF - 0x004A9AEF - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9AEF-MathSys_Invoke17_4A9AEF.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke17_4A9AEF.h"

int32_t __fastcall MathSys_Invoke17_4A9AEF(char arg1, long double arg2, long double arg3)

{
    if (arg1)
        /* tailcall */
        return Camera_UpdateTransform_16();

    long double st1;
    bool c1;
    st1 = __fyl2x(arg3, arg2);
}
