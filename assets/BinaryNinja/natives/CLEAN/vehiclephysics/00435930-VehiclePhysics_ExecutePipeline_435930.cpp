// IGI native provenance: VehiclePhysics_ExecutePipeline_435930 - 0x00435930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00435930-VehiclePhysics_ExecutePipeline_435930.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ExecutePipeline_435930.h"

float* VehiclePhysics_ExecutePipeline_435930(void* arg1)

{
    float* result = *(arg1 + 0x138);
    void* data_val = *(arg1 + 0x130);
    long double x87_r7 = *result;
    result = *(data_val + 0x82d);
    long double x87_r7_1 = x87_r7 * 0.0174532924f;
    long double x87_r6;

    if (!result || *(data_val + 0x833) != 1)
        x87_r6 = x87_r7_1;
    else
        x87_r6 = 0f;

    long double temp1 = *(arg1 + 0x13c);
    x87_r6 - temp1;
    result = (x87_r6 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp1) ? 1 : 0) << 0xa
        | (x87_r6 == temp1 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&result + 1) & 0x40))
        *(arg1 + 0x13c) = *(arg1 + 0x13c) * 0.980000019f + x87_r6 * 0.0199999809f;

    long double x87_r5_5 = *(arg1 + 0x13c) - x87_r6;
    long double temp2 = 0f;
    x87_r5_5 - temp2;
    result = (x87_r5_5 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_5, temp2) ? 1 : 0) << 0xa
        | (x87_r5_5 == temp2 ? 1 : 0) << 0xe | 0x2800;

    if (*(&result + 1) & 1)
        x87_r5_5 = -(x87_r5_5);

    long double temp3 = 0.00999999978f;
    x87_r5_5 - temp3;
    result = (x87_r5_5 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_5, temp3) ? 1 : 0) << 0xa
        | (x87_r5_5 == temp3 ? 1 : 0) << 0xe | 0x3000;

    if (*(&result + 1) & 1)
        *(arg1 + 0x13c) = x87_r6;

    long double x87_r6_2 = *(arg1 + 0x13c);
    long double temp4 = 0f;
    x87_r6_2 - temp4;
    long double x87_r6_3 = *(arg1 + 0x13c);
    result = (x87_r6_2 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp4) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp4 ? 1 : 0) << 0xe | 0x3000;

    if (*(&result + 1) & 1)
        x87_r6_3 = -(x87_r6_3);

    long double temp5 = 0.100000001f;
    x87_r6_3 - temp5;
    result = (x87_r6_3 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp5) ? 1 : 0) << 0xa
        | (x87_r6_3 == temp5 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
    {
        *(data_val + 0x832) = 1;
        return result;
    }

    long double x87_r6_4 = *(arg1 + 0x13c);
    long double temp6 = 0f;
    x87_r6_4 - temp6;
    long double x87_r6_5 = *(arg1 + 0x13c);
    result = (x87_r6_4 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp6) ? 1 : 0) << 0xa
        | (x87_r6_4 == temp6 ? 1 : 0) << 0xe | 0x3000;

    if (*(&result + 1) & 1)
        x87_r6_5 = -(x87_r6_5);

    long double x87_r5_7 = x87_r7_1 - x87_r6_5;
    long double temp7 = 0f;
    x87_r5_7 - temp7;
    long double x87_r6_7 = *(arg1 + 0x13c);
    result = (x87_r5_7 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_7, temp7) ? 1 : 0) << 0xa
        | (x87_r5_7 == temp7 ? 1 : 0) << 0xe | 0x3000;
    long double temp8 = 0f;
    x87_r6_7 - temp8;
    bool cond:0 = !(*(&result + 1) & 1);
    result = (x87_r6_7 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, temp8) ? 1 : 0) << 0xa
        | (x87_r6_7 == temp8 ? 1 : 0) << 0xe | 0x3800;
    long double x87_r7_4;

    if (cond:0)
    {
        long double x87_r6_13 = *(arg1 + 0x13c);

        if (*(&result + 1) & 1)
            x87_r6_13 = -(x87_r6_13);

        x87_r7_4 = x87_r7_1 - x87_r6_13;
    }
    else
    {
        long double x87_r6_8 = *(arg1 + 0x13c);

        if (*(&result + 1) & 1)
            x87_r6_8 = -(x87_r6_8);

        x87_r7_4 = -((x87_r7_1 - x87_r6_8));
    }

    long double temp9 = 0.10000000000000001f;
    x87_r7_4 - temp9;
    result = (x87_r7_4 < temp9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp9) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp9 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        *(data_val + 0x832) = 0xff;
        return result;
    }

    *(data_val + 0x832) = 0;
    return result;
}
