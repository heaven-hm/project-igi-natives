// IGI native provenance: WeatherWaterSky_Invoke2 - 0x0051D8F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051D8F0-WeatherWaterSky_Invoke2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke2.h"

int32_t* WeatherWaterSky_Invoke2(int32_t arg1)

{
    int16_t ba2018_2 = g_ba2018;
    int32_t dest_ptr = 0;
    int32_t context_val = *(arg1 + 0x74);
    data_ba2000 = *(arg1 + 0x70);
    data_ba2004 = context_val;
    data_ba2008 = 0;
    data_ba200c = 0;
    data_ba2010 = 0;
    int32_t* i = QTask_DeleteTask_2(arg1, ba2018_2);

    if (i)
    {
        do
        {
            int16_t ba2018_1 = g_ba2018;
            dest_ptr += 1;
            data_ba2008 = data_ba2008 + i[0x98];
            data_ba200c = data_ba200c + i[0x99];
            data_ba2010 = data_ba2010 + i[0x9a];
            i = QTask_TriggerEvent_2(i, ba2018_1);
        } while (i);

        if (dest_ptr > 0)
        {
            long double x87_r7_8 = 1f / dest_ptr;
            data_ba2008 = x87_r7_8 * data_ba2008;
            data_ba200c = x87_r7_8 * data_ba200c;
            data_ba2010 = x87_r7_8 * data_ba2010;
        }
    }

    long double x87_r7_10 = *(arg1 + 0x80);
    long double temp0 = 0f;
    x87_r7_10 - temp0;
    i = (x87_r7_10 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp0) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp0 ? 1 : 0) << 0xe;
    long double x87_r7_11;

    if (!(*(&i + 1) & 1))
    {
        long double x87_r7_12 = *(arg1 + 0x80);
        long double temp1_1 = 1f;
        x87_r7_12 - temp1_1;
        i = (x87_r7_12 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_12 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&i + 1) & 0x41)
            x87_r7_11 = *(arg1 + 0x80);
        else
            x87_r7_11 = 1f;
    }
    else
        x87_r7_11 = 0f;

    *(arg1 + 0x80) = x87_r7_11;
    long double x87_r7_13 = *(arg1 + 0x84);
    long double temp2 = 0f;
    x87_r7_13 - temp2;
    i = (x87_r7_13 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp2) ? 1 : 0) << 0xa
        | (x87_r7_13 == temp2 ? 1 : 0) << 0xe;
    long double x87_r7_14;

    if (!(*(&i + 1) & 1))
    {
        long double x87_r7_15 = *(arg1 + 0x84);
        long double temp3_1 = 1f;
        x87_r7_15 - temp3_1;
        i = (x87_r7_15 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == temp3_1 ? 1 : 0) << 0xe;

        if (*(&i + 1) & 0x41)
            x87_r7_14 = *(arg1 + 0x84);
        else
            x87_r7_14 = 1f;
    }
    else
        x87_r7_14 = 0f;

    *(arg1 + 0x84) = x87_r7_14;
    long double x87_r7_16 = *(arg1 + 0x88);
    long double temp4 = 0f;
    x87_r7_16 - temp4;
    i = (x87_r7_16 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, temp4) ? 1 : 0) << 0xa
        | (x87_r7_16 == temp4 ? 1 : 0) << 0xe;

    if (*(&i + 1) & 1)
    {
        *(arg1 + 0x88) = 0;
        return i;
    }

    long double x87_r7_17 = *(arg1 + 0x88);
    long double temp5 = 1f;
    x87_r7_17 - temp5;
    i = (x87_r7_17 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp5) ? 1 : 0) << 0xa
        | (x87_r7_17 == temp5 ? 1 : 0) << 0xe;

    if (*(&i + 1) & 0x41)
    {
        *(arg1 + 0x88) = *(arg1 + 0x88);
        return i;
    }

    *(arg1 + 0x88) = 0x3f800000;
    return i;
}
