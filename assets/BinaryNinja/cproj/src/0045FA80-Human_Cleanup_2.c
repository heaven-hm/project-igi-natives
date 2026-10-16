#include "gi_platform.h"
#include "0045FA80-Human_Cleanup_2.h"
void* Human_Cleanup_2(void* a1, int32_t* a2)

{
    void* result = DynObj_UpdateDynTree_4(a1);
    void* result_2 = result;
    void* tmpD = *a2;
    result = (*(int32_t*)(uintptr_t)(a1 + 0xcf6));
    double v_a0;
    memcpy(&v_a0, result_2, 0x18);
    double v_b8;
    memcpy(&v_b8, tmpD + 0x20, 0x18);
    double v_88 = v_b8 - v_a0;
    double v_b0;
    double v_98;
    double v_80 = v_b0 - v_98;
    double v_a8;
    double v_90;
    double v_78 = v_a8 - v_90;

    if (result)
    {
        long double x87_r7_6 = *(tmpD + 0x9c);
        long double x87_r6_1 = *(tmpD + 0xa0);
        x87_r6_1 - x87_r7_6;
        long double x87_r7_7;

        if (!(*(&((x87_r6_1 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_6) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_7 = *(tmpD + 0xa0);
        else
            x87_r7_7 = *(tmpD + 0x9c);

        long double x87_r6_2 = *(tmpD + 0x98);
        x87_r6_2 - x87_r7_7;
        long double x87_r7_9;

        if (*(&((x87_r6_2 < x87_r7_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_7) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_10 = *(tmpD + 0x9c);
            long double x87_r6_3 = *(tmpD + 0xa0);
            x87_r6_3 - x87_r7_10;

            if (!(*(&((x87_r6_3 < x87_r7_10 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_10) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_9 = *(tmpD + 0xa0);
            else
                x87_r7_9 = *(tmpD + 0x9c);
        }
        else
            x87_r7_9 = *(tmpD + 0x98);

        float v_e4_1 = x87_r7_9;
        v_e4_1 = Render_ComputeNormals(*(tmpD + 0x6c)) * v_e4_1;
        long double fp0_2;
        fp0_2 = Sys_OpenFileStream_11(&v_88);
        long double f0_1 = v_e4_1;
        fp0_2 - f0_1;
        result = (fp0_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f0_1) ? 1 : 0) << 0xa
            | (fp0_2 == f0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x41)
        {
            double* v_dc = &v_a0;
            double* v_d8_1 = &v_b8;
            char v_d0 = 0xff;
            int32_t v_cc_1 = 0;
            char v_70;
            void* v_bc_1 = &v_70;
            int32_t v_d4_1 = 1;
            int32_t v_c8_1 = 0;
            int32_t v_c4_1 = 0;
            int32_t v_c0;
            __builtin_strncpy(&v_c0, "DCBA", 4);
            void* result_1 = nullptr;
            int32_t v_24_1 = 0;
            int32_t v_20_1 = 0;
            int16_t valA2 = DynObj_LookupHashItem_5();
            ((int(*)())(uintptr_t)(*((valA2 << 2) + &g_a9a0e0)))(*a2, &v_dc);
            result = result_1;

            if (!result || v_20_1)
            {
                float* valA5 = a2[1];
                float v_e4_2 = 0.0f;
                long double x87_r7_14 = valA5[2];
                long double x87_r6_4 = valA5[1];
                long double x87_r5_1 = *valA5;
                long double x87_r4_5 =
                    sqrtl(x87_r6_4 * x87_r6_4 + x87_r7_14 * x87_r7_14 + x87_r5_1 * x87_r5_1);
                long double f1_1 = 50.0f;
                x87_r4_5 - f1_1;

                if (!(*(&((x87_r4_5 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_5, f1_1) ? 1 : 0) << 0xa
                        | (x87_r4_5 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                    v_e4_2 = 10000.0f;

                (*(int32_t*)(uintptr_t)(a1 + 0x2e8)) = 0xd;
                char valA7 = AI_CheckHearing_19(a1);

                if (valA7)
                    result = Human_HitDamage();

                if (!valA7 || !result)
                {
                    result = (*(int32_t*)(uintptr_t)(a1 + 0x800));

                    if (!result || !*(result + 0x3abc))
                    {
                        (*(int32_t*)(uintptr_t)(a1 + 0x2c8)) = v_e4_2 + (*(int32_t*)(uintptr_t)(a1 + 0x2c8));
                        long double x87_r7_19 = v_e4_2 + (*(int32_t*)(uintptr_t)(a1 + 0x254));
                        (*(int32_t*)(uintptr_t)(a1 + 0x254)) = x87_r7_19;
                        long double f2_1 = (*(int32_t*)(uintptr_t)(a1 + 0x258));
                        x87_r7_19 - f2_1;
                        result = (x87_r7_19 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_19, f2_1) ? 1 : 0) << 0xa
                            | (x87_r7_19 == f2_1 ? 1 : 0) << 0xe;

                        if (!(*(&result + 1) & 1))
                        {
                            int32_t valA8 = (*(int32_t*)(uintptr_t)(a1 + 0x2f4));
                            (*(int32_t*)(uintptr_t)(a1 + 0xcf5)) = 1;
                            result = valA8 | 0x20000;
                            (*(int32_t*)(uintptr_t)(a1 + 0x2f4)) = result;
                        }
                    }
                }
            }
        }
    }

    return result;
}
