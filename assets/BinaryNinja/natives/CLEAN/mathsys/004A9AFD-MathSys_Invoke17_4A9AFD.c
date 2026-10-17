// IGI native provenance: MathSys_Invoke17_4A9AFD - 0x004A9AFD - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9AFD-MathSys_Invoke17_4A9AFD.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke17_4A9AFD.h"

long double __fastcall MathSys_Invoke17_4A9AFD(int16_t arg1, void* arg2)

{
    long double x87_r0;
    int32_t result_val = Camera_ApplyWideScreen_17(x87_r0);
    arg1 = arg1;
    long double 544540_1;

    if (arg1)
    {
        *(arg2 - 0x90) = 2;
        544540_1 = g_544540;

        if (result_val == 1)
        {
            *(&arg1 + 1) = *(&arg1 + 1);

            if (*(&arg1 + 1))
                return -(544540_1);
        }
    }
    else
    {
        544540_1 = 0;

        if (result_val == 1)
        {
            *(&arg1 + 1) = *(&arg1 + 1);

            if (*(&arg1 + 1))
                return -(544540_1);
        }
    }

    return 544540_1;
}
