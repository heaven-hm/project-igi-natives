#include "0051B2C0-SplinePathGuideQTask_Setup.h"
/* 0x0051b2c0 SplinePathGuideQTask_Setup full linked: callers=0 callees=2 */
void* sub_51b2c0(void* a1)

{
    g_a8375c = 0;
    long double x87_r7 = *(a1 + 0x40);
    long double temp0 = 0f;
    x87_r7 - temp0;
    long double x87_r7_1;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_2 = *(a1 + 0x40);
        long double temp1_1 = 1f;
        x87_r7_2 - temp1_1;

        if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_1 = *(a1 + 0x40);
        else
            x87_r7_1 = 1f;
    }
    else
        x87_r7_1 = 0f;

    *(a1 + 0x40) = x87_r7_1;
    long double temp2 = 0f;
    x87_r7_1 - temp2;

    if (!(*(&((x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp2 ? 1 : 0) << 0xe) + 1) & 0x41))
        sub_51b0b0(a1);

    void* result = *(a1 + 0x2c);

    if (!*(a1 + 0x34))
        result &= 0xfe;
    else
        result |= 1;

    long double x87_r7_3 = *(a1 + 0x3c);
    long double temp3 = 0f;
    x87_r7_3 - temp3;
    *(a1 + 0x2c) = result;
    result = (x87_r7_3 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp3) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp3 ? 1 : 0) << 0xe;
    long double x87_r7_4;

    if (*(&result + 1) & 0x41)
        x87_r7_4 = 0f;
    else
        x87_r7_4 = *(a1 + 0x3c);

    *(a1 + 0x3c) = x87_r7_4;
    int32_t esi_1 = *(a1 + 0x24);

    if (esi_1 > 0)
    {
        result = sub_4f1030(esi_1);

        if (result)
        {
            int32_t ecx_1 = 0;
            int32_t edx_1 = 0;
            ecx_1 = g_54ed53;
            edx_1 = *(result + 0x1c);
            int32_t ecx_5 = *(((ecx_1 * 0x180 + edx_1) << 2) + &g_a96ae0);

            if (ecx_5)
                return ecx_5(result, 0);
        }
    }

    return result;
}
