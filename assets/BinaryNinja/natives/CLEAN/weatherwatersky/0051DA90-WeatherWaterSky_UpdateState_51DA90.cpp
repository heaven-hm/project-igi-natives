// IGI native provenance: WeatherWaterSky_UpdateState_51DA90 - 0x0051DA90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051DA90-WeatherWaterSky_UpdateState_51DA90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_UpdateState_51DA90.h"

int32_t WeatherWaterSky_UpdateState_51DA90(float arg1)

{
    long double x87_r7_1 = *(arg1 + 0x24c) + *(arg1 + 0x254);
    *(arg1 + 0x254) = x87_r7_1;
    long double x87_r7_3 = *(arg1 + 0x250) + *(arg1 + 0x258);
    *(arg1 + 0x258) = x87_r7_3;
    long double x87_r6 = x87_r7_1;
    long double temp0 = 1f;
    x87_r6 - temp0;

    if (!(*(&((x87_r6 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp0) ? 1 : 0) << 0xa
        | (x87_r6 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        long double x87_r6_2;
        long double temp2_1;

        do
        {
            x87_r6_2 = *(arg1 + 0x254) - 1f;
            *(arg1 + 0x254) = x87_r6_2;
            temp2_1 = 1f;
            x87_r6_2 - temp2_1;
        } while (!(*(&((x87_r6_2 < temp2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_2, temp2_1) ? 1 : 0) << 0xa | (x87_r6_2 == temp2_1 ? 1 : 0) << 0xe
            | 0x3800) + 1) & 0x41));
    }

    long double temp1 = 1f;
    x87_r7_3 - temp1;

    if (!(*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        long double x87_r7_5;
        long double temp4_1;

        do
        {
            x87_r7_5 = *(arg1 + 0x258) - 1f;
            *(arg1 + 0x258) = x87_r7_5;
            temp4_1 = 1f;
            x87_r7_5 - temp4_1;
        } while (!(*(&((x87_r7_5 < temp4_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, temp4_1) ? 1 : 0) << 0xa | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe) + 1)
            & 0x41));
    }

    long double x87_r7_6 = *(arg1 + 0x254);
    long double temp3 = 0f;
    x87_r7_6 - temp3;

    if (*(&((x87_r7_6 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp3) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp3 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_8;
        long double temp6_1;

        do
        {
            x87_r7_8 = *(arg1 + 0x254) + 1f;
            *(arg1 + 0x254) = x87_r7_8;
            temp6_1 = 0f;
            x87_r7_8 - temp6_1;
        } while (*(&((x87_r7_8 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1);
    }

    long double x87_r7_9 = *(arg1 + 0x258);
    long double temp5 = 0f;
    x87_r7_9 - temp5;
    int16_t result = (x87_r7_9 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp5) ? 1 : 0) << 0xa
        | (x87_r7_9 == temp5 ? 1 : 0) << 0xe;

    while (*(&result + 1) & 1)
    {
        long double x87_r7_11 = *(arg1 + 0x258) + 1f;
        *(arg1 + 0x258) = x87_r7_11;
        long double temp7_1 = 0f;
        x87_r7_11 - temp7_1;
        result = (x87_r7_11 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp7_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp7_1 ? 1 : 0) << 0xe;
    }

    return result;
}
