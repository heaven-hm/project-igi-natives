// IGI native provenance: MathSys_Invoke17_4A9A30 - 0x004A9A30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9A30-MathSys_Invoke17_4A9A30.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke17_4A9A30.h"

int32_t __fastcall MathSys_Invoke17_4A9A30(int16_t arg1, void* arg2, long double arg3, long double arg4)

{
    *(arg2 - 0x90) = 0xfe;
    *(&arg1 + 1) = *(&arg1 + 1);
    long double x87_r0;
    long double x87_r1;

    if (*(&arg1 + 1))
    {
        int32_t eax_2 = Camera_ApplyWideScreen_17(arg3);

        if (!eax_2)
            /* tailcall */
            return Camera_UpdateTransform_16();

        *(&arg1 + 1) = 0;

        if (eax_2 != 2)
            *(&arg1 + 1) = 0xff;

        x87_r1 = arg3;
        x87_r0 = fabsl(arg4);
    }
    else
    {
        x87_r0 = arg4;
        x87_r1 = arg3;
    }

    long double st1;
    bool c1;
    st1 = __fyl2x(x87_r0, x87_r1);
    long double x87_r2;
    long double x87_r3;
    /* tailcall */
    return MathSys_Invoke17_4A9A4E(arg2, x87_r2, x87_r3);
}
