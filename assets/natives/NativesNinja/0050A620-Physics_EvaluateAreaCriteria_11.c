#include "0050A620-Physics_EvaluateAreaCriteria_11.h"
/* 0x0050a620 Physics_EvaluateAreaCriteria_11 full linked: callers=1 callees=0 */
long double sub_50a620(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t i_1 = a2 * a3;
    int32_t ecx_2 = i_1 * 0xff;
    a2 = ecx_2;

    if (i_1 > 0)
    {
        int32_t* edx_1 = a1;
        int32_t i;

        do
        {
            int32_t esi_1 = *edx_1;
            edx_1 = &edx_1[1];
            ecx_2 -= esi_1 >> 0x18;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    int32_t var_4 = 0;
    return ecx_2 / a2;
}
