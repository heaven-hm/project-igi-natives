#include "gi_platform.h"
#include "0050A620-Physics_EvaluateAreaCriteria_11.h"
long double Physics_EvaluateAreaCriteria_11(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t i_1 = a2 * a3;
    int32_t objC2 = i_1 * 0xff;
    a2 = objC2;

    if (i_1 > 0)
    {
        int32_t* tmpD1 = a1;
        int32_t i;

        do
        {
            int32_t srcS1 = *tmpD1;
            tmpD1 = &tmpD1[1];
            objC2 -= srcS1 >> 0x18;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    int32_t v_4 = 0;
    return objC2 / a2;
}
