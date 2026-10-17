// Original IGI.EXE function: FX_FragmentSimulate_20 (VA 0x0048E430; static CFG gate PASS, CFG score 1.000).
#include "FX_FragmentSimulate_20.h"
int32_t FX_FragmentSimulate_20(void* a1, int32_t* a2, double* a3)

{
    double v_18[0x3];
    Script_CallNativeHandler_23(&v_18, a2);
    long double fp0 = Sys_DispatchOpcode_11(a3, &v_18);
    long double x87_r6_1 = a3[3] * 4096.0;
    x87_r6_1 - fp0;
    int16_t valA = (x87_r6_1 < fp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, fp0) ? 1 : 0) << 0xa
        | (x87_r6_1 == fp0 ? 1 : 0) << 0xe;

    if (*(&valA + 1) & 1)
    {
        valA = FX_SmokeEmit_18(a1, a2, 0, 0);

        if (valA)
        {
            int32_t valA1 = *a2;
            a3[4] = valA1;
            valA1 = 1;
            return valA1;
        }
    }

    valA = 0;
    return valA;
}
