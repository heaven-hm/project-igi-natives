#include "gi_platform.h"
#include "004EDB60-LODSettings_LoadParameters.h"
float* LODSettings_LoadParameters(void* a1)

{
    int32_t i = 0;
    float* tmpD = a1 + 0x30;

    do
    {
        if (i)
        {
            long double x87_r7_1 = *tmpD;
            long double f0_1 = tmpD[-1];
            x87_r7_1 - f0_1;

            if (*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
                *tmpD = tmpD[-1];
        }

        i += 1;
        tmpD = &tmpD[1];
    } while (i < 5);

    float* result = DynObj_Missing(a1 + 0x20);

    if (result)
    {
        result[9] = 1;
        void* objC = &result[0xa];
        result = a1 + 0x30;
        int32_t i_2 = 5;
        int32_t i_1;

        do
        {
            long double x87_r7_3 = *result * 4096.0f;
            result = &result[1];
            objC += 4;
            i_1 = i_2;
            i_2 -= 1;
            *(objC - 4) = x87_r7_3;
        } while (i_1 != 1);
    }

    return result;
}
