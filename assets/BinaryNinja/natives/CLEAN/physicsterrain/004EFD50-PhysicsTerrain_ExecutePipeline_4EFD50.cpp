// IGI native provenance: PhysicsTerrain_ExecutePipeline_4EFD50 - 0x004EFD50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFD50-PhysicsTerrain_ExecutePipeline_4EFD50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_ExecutePipeline_4EFD50.h"

int32_t PhysicsTerrain_ExecutePipeline_4EFD50(float arg1, float arg2)

{
    char* context_val = *(arg2 + 4);

    if (*context_val)
    {
        char i;

        do
        {
            i = context_val[1];
            context_val = &context_val[1];
        } while (i);
    }

    float* result_val = arg1;
    long double x87_r7 = *result_val;
    long double x87_r7_1 = x87_r7 * x87_r7;
    long double x87_r6_2 = result_val[3] * *result_val;
    float var_34 = x87_r6_2 + x87_r6_2;
    long double x87_r6_4 = result_val[1];
    long double x87_r5_1 = x87_r6_4 * x87_r6_4;
    float var_30 = x87_r5_1 + x87_r5_1;
    long double x87_r6_7 = result_val[2] * result_val[1];
    arg1 = x87_r6_7 + x87_r6_7;
    long double x87_r6_9 = result_val[2];
    long double x87_r5_4 = x87_r6_9 * x87_r6_9;
    arg2 = x87_r5_4 + x87_r5_4;
    float var_28 = 1f - var_30 - arg2;
    long double x87_r6_15 = result_val[3] * result_val[2];
    long double x87_r5_7 = result_val[1] * *result_val;
    float var_1c = x87_r6_15 + x87_r6_15 + x87_r5_7 + x87_r5_7;
    long double x87_r7_3 = 1f - (x87_r7_1 + x87_r7_1);
    long double x87_r6_23 = result_val[2] * *result_val;
    long double x87_r5_10 = result_val[3] * result_val[1];
    float var_10 = x87_r6_23 + x87_r6_23 - (x87_r5_10 + x87_r5_10);
    long double x87_r7_4 = x87_r7_3 - var_30;
    long double x87_r6_28 = var_28;
    long double x87_r5_12 = var_1c;
    long double x87_r4_3 = sqrtl(x87_r5_12 * x87_r5_12 + x87_r6_28 * x87_r6_28);
    var_30 = x87_r4_3;
    long double temp1 = 0.0001f;
    x87_r4_3 - temp1;
    long double x87_r5_16;
    long double x87_r6_34;
    long double x87_r7_6;

    if (*(&((x87_r4_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_3, temp1) ? 1 : 0) << 0xa
        | (x87_r4_3 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double st1_3;
        bool c1_3;
        st1_3 = __fpatan(x87_r7_3 - arg2, -((arg1 - var_34)));
        x87_r7_6 = st1_3;
        long double st1_4;
        bool c1_4;
        st1_4 = __fpatan(var_30, -(var_10));
        x87_r6_34 = st1_4;
        x87_r5_16 = 0.0f;
    }
    else
    {
        long double st1;
        bool c1;
        st1 = __fpatan(x87_r7_4, arg1 + var_34);
        x87_r7_6 = st1;
        long double st1_1;
        bool c1_1;
        st1_1 = __fpatan(var_30, -(var_10));
        x87_r6_34 = st1_1;
        long double st1_2;
        bool c1_2;
        st1_2 = __fpatan(var_28, var_1c);
        x87_r5_16 = st1_2;
    }

    long double temp2 = 0.0f;
    x87_r7_6 - temp2;

    if (*(&((x87_r7_6 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp2) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp2 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        x87_r7_6 = x87_r7_6 + 6.2831853071795889f;

    long double temp3 = 0.0f;
    x87_r6_34 - temp3;

    if (*(&((x87_r6_34 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_34, temp3) ? 1 : 0) << 0xa
            | (x87_r6_34 == temp3 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        x87_r6_34 = x87_r6_34 + 6.2831853071795889f;

    long double temp4 = 0.0f;
    x87_r5_16 - temp4;

    if (*(&((x87_r5_16 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_16, temp4) ? 1 : 0) << 0xa
            | (x87_r5_16 == temp4 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        x87_r5_16 = x87_r5_16 + 6.2831853071795889f;

    double var_3c = x87_r5_16;
    double var_44 = x87_r6_34;
    double var_4c = x87_r7_6;
    return Game_DataSymbolLoad(context_val, "%f, %f, %f");
}
