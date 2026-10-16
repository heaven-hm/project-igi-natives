#include "004F70B0-Script_EvaluateCondition_19.h"
/* 0x004f70b0 Script_EvaluateCondition_19 full linked: callers=1 callees=1 */
int32_t sub_4f70b0(void* a1)

{
    int32_t edi = 0;
    int32_t result = *(a1 + 0x2ca8);

    if (result > 0)
    {
        int32_t* ebx_1 = a1 + 0x2b4c;

        do
        {
            float* eax = *ebx_1;
            *eax = eax[3] + *eax;
            eax[1] = eax[4] + eax[1];
            long double x87_r7_6 = eax[5] + eax[2];
            eax[2] = x87_r7_6;
            long double x87_r6_2 = *(a1 + 0x2c7c) * -0.5f;
            x87_r7_6 - x87_r6_2;

            if (*(&((x87_r7_6 < x87_r6_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, x87_r6_2) ? 1 : 0) << 0xa
                    | (x87_r7_6 == x87_r6_2 ? 1 : 0) << 0xe) + 1) & 1)
                sub_4f7120(a1, edi);

            result = *(a1 + 0x2ca8);
            edi += 1;
            ebx_1 = &ebx_1[1];
        } while (edi < result);
    }

    return result;
}
