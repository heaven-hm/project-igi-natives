// IGI native provenance: ExplosionObj_Invoke2 - 0x0043FF70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043FF70-ExplosionObj_Invoke2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_Invoke2.h"

int32_t* ExplosionObj_Invoke2(void* arg1, int32_t* arg2)

{
    int32_t* result = arg2;
    void* dest_ptr = *result;

    if (*(arg1 + 0x11c))
    {
        long double x87_r7_2 = *(result + 8) - *(arg1 + 0x20);
        long double x87_r6_2 = *(result + 0x10) - *(arg1 + 0x28);
        long double x87_r5_2 = *(result + 0x18) - *(arg1 + 0x30);
        double var_18_1 =
            *(arg1 + 0x88) * x87_r5_2 + *(arg1 + 0x7c) * x87_r6_2 + *(arg1 + 0x70) * x87_r7_2;
        double var_10_1 =
            *(arg1 + 0x8c) * x87_r5_2 + *(arg1 + 0x80) * x87_r6_2 + *(arg1 + 0x74) * x87_r7_2;
        double var_8_1 =
            *(arg1 + 0x90) * x87_r5_2 + *(arg1 + 0x84) * x87_r6_2 + *(arg1 + 0x78) * x87_r7_2;
        float var_30;
        WeaponType_RegisterType_2(&var_30, arg1, 0);
        float var_24;
        result = WeaponType_RegisterType_2(&var_24, arg1, 1);
        long double x87_r7_5 = var_30 - 1228.8f;
        long double temp0_1 = var_18_1;
        x87_r7_5 - temp0_1;
        result = (x87_r7_5 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            long double x87_r7_7 = var_24 + 1228.8f;
            long double temp1_1 = var_18_1;
            x87_r7_7 - temp1_1;
            result = (x87_r7_7 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp1_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double x87_r7_8 = var_10_1;
                long double temp2_1 = 0.0f;
                x87_r7_8 - temp2_1;
                result = (x87_r7_8 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe | 0x3800;

                if (*(&result + 1) & 1)
                    x87_r7_8 = -(x87_r7_8);

                long double temp3_1 = 1228.8f;
                x87_r7_8 - temp3_1;
                result = (x87_r7_8 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                {
                    long double x87_r7_9 = var_8_1;
                    long double temp4_1 = 12288.0f;
                    x87_r7_9 - temp4_1;
                    result = (x87_r7_9 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == temp4_1 ? 1 : 0) << 0xe;

                    if (*(&result + 1) & 1)
                    {
                        long double x87_r7_10 = var_8_1;
                        long double temp5_1 = 0.0f;
                        x87_r7_10 - temp5_1;
                        result = (x87_r7_10 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_10, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_10 == temp5_1 ? 1 : 0) << 0xe;

                        if (!(*(&result + 1) & 0x41))
                        {
                            uint32_t eax_1 = Level_InitSprites_3();
                            int32_t eax_2 = 0;
                            eax_2 = *(dest_ptr + 0x1c);
                            result = *(((eax_1 * 0x180 + eax_2) << 2) + &g_a96ae0);

                            if (result)
                                return result(dest_ptr, 0);
                        }
                    }
                }
            }
        }
    }

    return result;
}
