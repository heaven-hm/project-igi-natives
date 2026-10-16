#include "Script_EvaluateCondition_19.h"
int32_t Script_EvaluateCondition_19(void* a1)

{
    int32_t dstD = 0;
    int32_t result = *(a1 + 0x2ca8);

    if (result > 0)
    {
        int32_t* ctxB1 = a1 + 0x2b4c;

        do
        {
            float* valA = *ctxB1;
            *valA = valA[3] + *valA;
            valA[1] = valA[4] + valA[1];
            long double x87_r7_6 = valA[5] + valA[2];
            valA[2] = x87_r7_6;
            long double x87_r6_2 = *(a1 + 0x2c7c) * -0.5f;
            x87_r7_6 - x87_r6_2;

            if (*(&((x87_r7_6 < x87_r6_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, x87_r6_2) ? 1 : 0) << 0xa
                    | (x87_r7_6 == x87_r6_2 ? 1 : 0) << 0xe) + 1) & 1)
                Script_FormatString_19(a1, dstD);

            result = *(a1 + 0x2ca8);
            dstD += 1;
            ctxB1 = &ctxB1[1];
        } while (dstD < result);
    }

    return result;
}
