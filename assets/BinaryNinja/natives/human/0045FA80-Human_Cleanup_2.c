// IGI native provenance: Human_Cleanup_2 - 0x0045FA80 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045FA80-Human_Cleanup_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_Cleanup_2.h"
void* Human_Cleanup_2(void* context, int32_t* param_2)

{
    void* result = DynObj_UpdateDynTree_4(context);
    void* result_2 = result;
    void* temp_val = *param_2;
    result = *(context + 0xcf6);
    double item_a0;
    memcpy(&item_a0, result_2, 0x18);
    double item_b8;
    memcpy(&item_b8, temp_val + 0x20, 0x18);
    double item_88 = item_b8 - item_a0;
    double item_b0;
    double item_98;
    double item_80 = item_b0 - item_98;
    double item_a8;
    double item_90;
    double item_78 = item_a8 - item_90;

    if (result)
    {
        long double fpu_val_7_6 = *(temp_val + 0x9c);
        long double fpu_val_6_1 = *(temp_val + 0xa0);
        fpu_val_6_1 - fpu_val_7_6;
        long double fpu_val_7_7;

        if (!(*(&((fpu_val_6_1 < fpu_val_7_6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_6) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_7 = *(temp_val + 0xa0);
        else
            fpu_val_7_7 = *(temp_val + 0x9c);

        long double fpu_val_6_2 = *(temp_val + 0x98);
        fpu_val_6_2 - fpu_val_7_7;
        long double fpu_val_7_9;

        if (*(&((fpu_val_6_2 < fpu_val_7_7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_7) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_10 = *(temp_val + 0x9c);
            long double fpu_val_6_3 = *(temp_val + 0xa0);
            fpu_val_6_3 - fpu_val_7_10;

            if (!(*(&((fpu_val_6_3 < fpu_val_7_10 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_10) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_10 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_9 = *(temp_val + 0xa0);
            else
                fpu_val_7_9 = *(temp_val + 0x9c);
        }
        else
            fpu_val_7_9 = *(temp_val + 0x98);

        float item_e4_1 = fpu_val_7_9;
        item_e4_1 = Render_ComputeNormals(*(temp_val + 0x6c)) * item_e4_1;
        long double fp0_2;
        fp0_2 = Sys_OpenFileStream_11(&item_88);
        long double f0_1 = item_e4_1;
        fp0_2 - f0_1;
        result = (fp0_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f0_1) ? 1 : 0) << 0xa
            | (fp0_2 == f0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x41)
        {
            double* item_dc = &item_a0;
            double* item_d8_1 = &item_b8;
            char item_d0 = 0xff;
            int32_t item_cc_1 = 0;
            void item_70;
            void* item_bc_1 = &item_70;
            int32_t item_d4_1 = 1;
            int32_t item_c8_1 = 0;
            int32_t item_c4_1 = 0;
            int32_t item_c0;
            strncpy(&item_c0, "DCBA", 4);
            void* result_1 = nullptr;
            int32_t item_24_1 = 0;
            int32_t item_20_1 = 0;
            int16_t data_2 = DynObj_LookupHashItem_5();
            (*((data_2 << 2) + &g_a9a0e0))(*param_2, &item_dc);
            result = result_1;

            if (!result || item_20_1)
            {
                float* data_5 = param_2[1];
                float item_e4_2 = 0.0f;
                long double fpu_val_7_14 = data_5[2];
                long double fpu_val_6_4 = data_5[1];
                long double fpu_val_5_1 = *data_5;
                long double fpu_val_4_5 =
                    sqrtl(fpu_val_6_4 * fpu_val_6_4 + fpu_val_7_14 * fpu_val_7_14 + fpu_val_5_1 * fpu_val_5_1);
                long double f1_1 = 50.0f;
                fpu_val_4_5 - f1_1;

                if (!(*(&((fpu_val_4_5 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_4_5, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_4_5 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                    item_e4_2 = 10000.0f;

                *(context + 0x2e8) = 0xd;
                char data_7 = AI_CheckHearing_19(context);

                if (data_7)
                    result = Human_HitDamage();

                if (!data_7 || !result)
                {
                    result = *(context + 0x800);

                    if (!result || !*(result + 0x3abc))
                    {
                        *(context + 0x2c8) = item_e4_2 + *(context + 0x2c8);
                        long double fpu_val_7_19 = item_e4_2 + *(context + 0x254);
                        *(context + 0x254) = fpu_val_7_19;
                        long double f2_1 = *(context + 0x258);
                        fpu_val_7_19 - f2_1;
                        result = (fpu_val_7_19 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_19, f2_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_19 == f2_1 ? 1 : 0) << 0xe;

                        if (!(*(&result + 1) & 1))
                        {
                            int32_t data_8 = *(context + 0x2f4);
                            *(context + 0xcf5) = 1;
                            result = data_8 | 0x20000;
                            *(context + 0x2f4) = result;
                        }
                    }
                }
            }
        }
    }

    return result;
}
