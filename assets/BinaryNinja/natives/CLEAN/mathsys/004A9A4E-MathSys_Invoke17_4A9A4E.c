// IGI native provenance: MathSys_Invoke17_4A9A4E - 0x004A9A4E - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9A4E-MathSys_Invoke17_4A9A4E.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke17_4A9A4E.h"

int32_t MathSys_Invoke17_4A9A4E(void* arg1, long double arg2, long double arg3) __location("st0")

{
    int16_t context_val;
    int16_t ecx_1;
    char data_val;
    long double x87_r0;
    ecx_1 = Camera_ApplyHandiCam_17(context_val, arg1, x87_r0);
    long double x87_r1 = arg2 + 1;

    if (*(arg1 - 0x9f) & 1)
    {
        long double x87_r0_2 = 1;

        if (g_93605c == 1)
            x87_r1 = Camera_ApplyPostProcess_16(x87_r0_2, x87_r1);
        else
            x87_r1 = x87_r0_2 / x87_r0_2;
    }

    if (!(data_val & 0x40))
    {
        long double st0_2;
        bool c1_1;
        st0_2 = __fscale(x87_r1, arg3);
        x87_r1 = st0_2;
    }

    *(&ecx_1 + 1) = *(&ecx_1 + 1);

    if (*(&ecx_1 + 1))
        x87_r1 = -(x87_r1);

    /* tailcall */
    return Camera_ApplyLineFilter_15(x87_r1);
}
