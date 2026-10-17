// IGI native provenance: Camera_UpdateViewCone_12 - 0x004A8372 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8372-Camera_UpdateViewCone_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_12.h"
int32_t Camera_UpdateViewCone_12(int32_t context, double* param_2, char param_3)

{
    int32_t dest_1 = context & 0x1f;
    long double fp0;
    long double fpu0;

    if (context & 8 && param_3 & 1)
    {
        Camera_SetFieldOfView_14(fpu0, 1);
        dest_1 &= 0xfffffff7;
    }
    else if (context & 4 && param_3 & 4)
    {
        Camera_SetFieldOfView_14(fpu0, 4);
        dest_1 &= 0xfffffffb;
    }
    else if (1 & context && param_3 & 8)
    {
        Camera_SetFieldOfView_14(fpu0, 8);
        int32_t entity_4 = param_3 & 0xc00;

        if (!entity_4)
        {
            long double fpu_val_0_10 = *param_2;
            long double f0_1 = 0.0;
            fpu_val_0_10 - f0_1;
            long double fpu_val_0_11 = g_544368;
            int16_t data_5 = (fpu_val_0_10 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_0_10, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_0_10 == f0_1 ? 1 : 0) << 0xe;

            if (TEST_BITB(*(&data_5 + 1), 6) || TEST_BITB(*(&data_5 + 1), 0))
                fpu_val_0_11 = -(fpu_val_0_11);

            *param_2 = fpu_val_0_11;
        }
        else if (entity_4 == 0x400)
        {
            long double fpu_val_0_7 = *param_2;
            long double f2_1 = 0.0;
            fpu_val_0_7 - f2_1;
            int16_t data_4 = (fpu_val_0_7 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_0_7, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_0_7 == f2_1 ? 1 : 0) << 0xe | 0x800;
            long double fpu_val_0_8;

            if (TEST_BITB(*(&data_4 + 1), 6) || TEST_BITB(*(&data_4 + 1), 0))
                fpu_val_0_8 = -(g_544368);
            else
                fpu_val_0_8 = g_544378;

            *param_2 = fpu_val_0_8;
        }
        else if (entity_4 == 0x800)
        {
            long double fpu_val_0_4 = *param_2;
            long double f3_1 = 0.0;
            fpu_val_0_4 - f3_1;
            int16_t data_3 = (fpu_val_0_4 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_0_4, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_0_4 == f3_1 ? 1 : 0) << 0xe | 0x800;
            long double fpu_val_0_5;

            if (TEST_BITB(*(&data_3 + 1), 6) || TEST_BITB(*(&data_3 + 1), 0))
                fpu_val_0_5 = -(g_544378);
            else
                fpu_val_0_5 = g_544368;

            *param_2 = fpu_val_0_5;
        }
        else if (entity_4 == 0xc00)
        {
            long double fpu_val_0_1 = *param_2;
            long double f5_1 = 0.0;
            fpu_val_0_1 - f5_1;
            long double fpu_val_0_2 = g_544378;
            int16_t data_2 = (fpu_val_0_1 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_0_1, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_0_1 == f5_1 ? 1 : 0) << 0xe;

            if (TEST_BITB(*(&data_2 + 1), 6) || TEST_BITB(*(&data_2 + 1), 0))
                fpu_val_0_2 = -(fpu_val_0_2);

            *param_2 = fpu_val_0_2;
        }

        dest_1 &= 0xfffffffe;
    }
    else if (context & 2 && param_3 & 0x10)
    {
        int32_t source_1 = 0;

        if (context & 0x10)
            source_1 = 1;

        double item_10_5 = *param_2;
        long double fpu_val_7_2 = item_10_5;
        long double f1_1 = 0.0;
        fpu_val_7_2 - f1_1;

        if (TEST_BITB(
                *(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1),
                6))
            source_1 = 1;
        else
        {
            int32_t entity_val;
            int32_t item_24_1 = entity_val;
            int32_t item_28_1 = entity_val;
            item_28_1 = item_10_5;
            int32_t item_8;
            fp0 = Camera_ApplyPostProcess_13(item_28_1, &item_8);
            int32_t data_8 = item_8;
            double item_10_6 = fp0;
            int32_t entity_6 = data_8 - 0x600;

            if (entity_6 >= 0xfffffbce)
            {
                long double fpu_val_7_6 = item_10_6;
                long double f4_1 = 0.0;
                fpu_val_7_6 - f4_1;
                data_8 = (fpu_val_7_6 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_6, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == f4_1 ? 1 : 0) << 0xe;
                int32_t temp_1;

                temp_1 = !TEST_BITB(*(&data_8 + 1), 0) ? 0 : 1;

                data_8 = *(&item_10_6 + 6);
                int16_t data_9 = data_8 & 0xf;
                data_9 |= 0x10;
                *(&item_10_6 + 6) = data_9;

                if (entity_6 < 0xfffffc03)
                {
                    int32_t i_1 = 0xfffffc03 - entity_6;
                    int32_t i;

                    do
                    {
                        if (item_10_6 & 1 && !source_1)
                            source_1 = 1;

                        item_10_6 u>>= 1;

                        if (*(&item_10_6 + 4) & 1)
                            *(&item_10_6 + 3) |= 0x80;

                        *(&item_10_6 + 4) u>>= 1;
                        i = i_1;
                        i_1 -= 1;
                    } while (i != 1);
                }

                if (temp_1)
                    item_10_6 = -(item_10_6);
            }
            else
            {
                source_1 = 1;
                item_10_6 = 0;
            }

            *param_2 = item_10_6;
        }

        if (source_1)
            Camera_SetFieldOfView_14(fpu0, 0x10);

        dest_1 &= 0xfffffffd;
    }

    if (context & 0x10 && param_3 & 0x20)
    {
🚫🚫        Camera_SetFieldOfView_14(fp0, 0x20);
        dest_1 &= 0xffffffef;
    }

    int32_t result = 0;
    result = !dest_1;
    return result;
}
