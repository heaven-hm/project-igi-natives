// IGI native provenance: VehiclePhysics_ExecutePipeline_435E50 - 0x00435E50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00435E50-VehiclePhysics_ExecutePipeline_435E50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ExecutePipeline_435E50.h"

float* VehiclePhysics_ExecutePipeline_435E50(void* arg1)

{
    float* result = *(arg1 + 0x138);
    void* data_val = *(arg1 + 0x130);
    long double x87_r7 = *result;
    result = *(data_val + 0x82d);
    long double x87_r7_1 = x87_r7 * 0.0174532924f;
    long double x87_r6_2;

    if (result)
        x87_r6_2 = *(arg1 + 0x13c) * 0.970000029f;
    else
    {
        result = *(data_val + 0x832);

        if (result)
            x87_r6_2 = *(arg1 + 0x13c) * 0.970000029f;
        else
            x87_r6_2 = *(arg1 + 0x13c) * 0.970000029f + x87_r7_1 * 0.0299999714f;
    }

    *(arg1 + 0x13c) = x87_r6_2;
    long double x87_r6_4 = *(arg1 + 0x13c);
    long double temp1 = 0f;
    x87_r6_4 - temp1;
    long double x87_r6_5 = *(arg1 + 0x13c);
    result = (x87_r6_4 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp1) ? 1 : 0) << 0xa
        | (x87_r6_4 == temp1 ? 1 : 0) << 0xe | 0x3000;

    if (*(&result + 1) & 1)
        x87_r6_5 = -(x87_r6_5);

    long double temp2 = 0.100000001f;
    x87_r6_5 - temp2;
    result = (x87_r6_5 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, temp2) ? 1 : 0) << 0xa
        | (x87_r6_5 == temp2 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
    {
        *(data_val + 0x833) = 1;
        return result;
    }

    long double x87_r6_6 = *(arg1 + 0x13c);
    long double temp3 = 0f;
    x87_r6_6 - temp3;
    long double x87_r6_7 = *(arg1 + 0x13c);
    result = (x87_r6_6 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, temp3) ? 1 : 0) << 0xa
        | (x87_r6_6 == temp3 ? 1 : 0) << 0xe | 0x3000;

    if (*(&result + 1) & 1)
        x87_r6_7 = -(x87_r6_7);

    long double x87_r5_4 = x87_r7_1 - x87_r6_7;
    long double temp4 = 0f;
    x87_r5_4 - temp4;
    long double x87_r6_9 = *(arg1 + 0x13c);
    result = (x87_r5_4 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_4, temp4) ? 1 : 0) << 0xa
        | (x87_r5_4 == temp4 ? 1 : 0) << 0xe | 0x3000;
    long double temp5 = 0f;
    x87_r6_9 - temp5;
    bool cond:0 = !(*(&result + 1) & 1);
    result = (x87_r6_9 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, temp5) ? 1 : 0) << 0xa
        | (x87_r6_9 == temp5 ? 1 : 0) << 0xe | 0x3800;
    long double x87_r7_4;

    if (cond:0)
    {
        long double x87_r6_15 = *(arg1 + 0x13c);

        if (*(&result + 1) & 1)
            x87_r6_15 = -(x87_r6_15);

        x87_r7_4 = x87_r7_1 - x87_r6_15;
    }
    else
    {
        long double x87_r6_10 = *(arg1 + 0x13c);

        if (*(&result + 1) & 1)
            x87_r6_10 = -(x87_r6_10);

        x87_r7_4 = -((x87_r7_1 - x87_r6_10));
    }

    long double temp6 = 0.10000000000000001f;
    x87_r7_4 - temp6;
    result = (x87_r7_4 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp6) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp6 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        *(data_val + 0x833) = 0xff;
        return result;
    }

    *(data_val + 0x833) = 0;
    return result;
}
