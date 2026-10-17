// IGI native provenance: VehiclePhysics_ExecutePipeline_4273B0 - 0x004273B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004273B0-VehiclePhysics_ExecutePipeline_4273B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ExecutePipeline_4273B0.h"

void* VehiclePhysics_ExecutePipeline_4273B0(void* arg1)

{
    void* result_val;

    if (!*(arg1 + 0x140))
    {
        long double x87_r7_7 = *(arg1 + 0x13c);
        long double temp0_1 = 0f;
        x87_r7_7 - temp0_1;
        result_val = (x87_r7_7 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result_val + 1) & 0x40))
        {
            long double x87_r7_8 = *(arg1 + 0x13c);
            long double temp2_1 = 0f;
            x87_r7_8 - temp2_1;
            result_val = (x87_r7_8 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe;

            if (!(*(&result_val + 1) & 1))
            {
                long double x87_r7_11 = *(arg1 + 0x13c);
                long double temp4_1 = 0f;
                x87_r7_11 - temp4_1;
                result_val = (x87_r7_11 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp4_1 ? 1 : 0) << 0xe;

                if (!(*(&result_val + 1) & 0x41))
                {
                    result_val = *(arg1 + 0x138);
                    long double x87_r7_13 = *(arg1 + 0x13c) - *(result_val + 4);
                    *(arg1 + 0x13c) = x87_r7_13;
                    long double temp8_1 = 0f;
                    x87_r7_13 - temp8_1;
                    result_val = (x87_r7_13 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == temp8_1 ? 1 : 0) << 0xe;

                    if (*(&result_val + 1) & 1)
                        *(arg1 + 0x13c) = 0;
                }
            }
            else
            {
                result_val = *(arg1 + 0x138);
                long double x87_r7_10 = *(result_val + 4) + *(arg1 + 0x13c);
                *(arg1 + 0x13c) = x87_r7_10;
                long double temp5_1 = 0f;
                x87_r7_10 - temp5_1;
                result_val = (x87_r7_10 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp5_1 ? 1 : 0) << 0xe;

                if (!(*(&result_val + 1) & 0x41))
                    *(arg1 + 0x13c) = 0;
            }
        }
    }
    else
    {
        void* edx_1 = *(arg1 + 0x138);
        long double x87_r7 = *(arg1 + 0x13c);
        long double temp1_1 = *(edx_1 + 8);
        x87_r7 - temp1_1;
        result_val = (x87_r7 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result_val + 1) & 0x40))
        {
            long double x87_r7_1 = *(arg1 + 0x13c);
            long double temp3_1 = *(edx_1 + 8);
            x87_r7_1 - temp3_1;
            result_val = (x87_r7_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe;

            if (!(*(&result_val + 1) & 1))
            {
                long double x87_r7_4 = *(arg1 + 0x13c);
                long double temp6_1 = *(edx_1 + 8);
                x87_r7_4 - temp6_1;
                result_val = (x87_r7_4 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp6_1 ? 1 : 0) << 0xe;

                if (!(*(&result_val + 1) & 0x41))
                {
                    long double x87_r7_6 = *(arg1 + 0x13c) - *(edx_1 + 4);
                    *(arg1 + 0x13c) = x87_r7_6;
                    long double temp9_1 = *(edx_1 + 8);
                    x87_r7_6 - temp9_1;
                    result_val = (x87_r7_6 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_6, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == temp9_1 ? 1 : 0) << 0xe;

                    if (*(&result_val + 1) & 1)
                        *(arg1 + 0x13c) = *(edx_1 + 8);
                }
            }
            else
            {
                long double x87_r7_3 = *(edx_1 + 4) + *(arg1 + 0x13c);
                *(arg1 + 0x13c) = x87_r7_3;
                long double temp7_1 = *(edx_1 + 8);
                x87_r7_3 - temp7_1;
                result_val = (x87_r7_3 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp7_1 ? 1 : 0) << 0xe;

                if (!(*(&result_val + 1) & 0x41))
                {
                    int32_t eax_1 = *(edx_1 + 8);
                    *(arg1 + 0x13c) = eax_1;
                    return eax_1;
                }
            }
        }
    }

    return result_val;
}
