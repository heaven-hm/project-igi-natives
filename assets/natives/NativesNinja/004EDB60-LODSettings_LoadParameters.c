#include "004EDB60-LODSettings_LoadParameters.h"
/* 0x004edb60 LODSettings_LoadParameters full linked: callers=0 callees=1 */
float* sub_4edb60(void* a1)

{
    int32_t i = 0;
    float* edx = a1 + 0x30;

    do
    {
        if (i)
        {
            long double x87_r7_1 = *edx;
            long double temp0_1 = edx[-1];
            x87_r7_1 - temp0_1;

            if (*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
                *edx = edx[-1];
        }

        i += 1;
        edx = &edx[1];
    } while (i < 5);

    float* result = sub_4cec10(a1 + 0x20);

    if (result)
    {
        result[9] = 1;
        void* ecx = &result[0xa];
        result = a1 + 0x30;
        int32_t i_2 = 5;
        int32_t i_1;

        do
        {
            long double x87_r7_3 = *result * 4096f;
            result = &result[1];
            ecx += 4;
            i_1 = i_2;
            i_2 -= 1;
            *(ecx - 4) = x87_r7_3;
        } while (i_1 != 1);
    }

    return result;
}
