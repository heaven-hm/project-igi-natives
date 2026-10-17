// Original IGI.EXE function: Display_SyncVSync_12 (VA 0x00496E60; static CFG gate FAIL, CFG score 0.800).
#include "Display_SyncVSync_12.h"
char Display_SyncVSync_12(int32_t context, int32_t* param_2)

{
    char data_11 = g_6840e9;

    if (data_11)
    {
        int16_t data_1 = *(*(context + 0xc) + 0x14);

        if (data_1 == 2 || !data_1)
        {
            char data_2 = Display_ClearSurfaces_12(context);

            if (!data_2)
            {
                *param_2 = 0;
                return data_2;
            }
        }

        long double fpu_val_7_2 = *(param_2 + 0x10) * 4096.0;
        char data_3 = *(context + 8);
        float item_20;
        memcpy(&item_20, param_2, 0x20);
        double item_10_1 = fpu_val_7_2;
        double item_8_1 = *(param_2 + 0x18) * 4096.0;
        float item_18;

        if (data_3 & 2 && !(data_3 & 4))
        {
            double item_50 = *(param_2 + 0x20) - g_5ca138;
            double item_48_1 = *(param_2 + 0x28) - g_5ca140;
            double item_40 = *(param_2 + 0x30) - g_5ca148;
            long double fp0_1 = Sys_OpenFileStream_11(&item_50);
            long double f0_1 = item_8_1;
            fp0_1 - f0_1;

            if (!(*(&((fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                item_20 = 0.0f;
            else
            {
                long double f2_1 = item_10_1;
                fp0_1 - f2_1;

                if (!(*(&((fp0_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f2_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double fpu_val_6_5 =
                        (1.0 - (fp0_1 - item_10_1) / (item_8_1 - item_10_1)) * item_20;
                    item_20 = fpu_val_6_5;
                    long double f4_1 = 0.0f;
                    fpu_val_6_5 - f4_1;

                    if (*(&((fpu_val_6_5 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_5, f4_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_5 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        item_20 = 0.0f;
                    else
                    {
                        long double fpu_val_6_6 = item_20;
                        long double f5_1 = 1.0f;
                        fpu_val_6_6 - f5_1;

                        if (!(*(&((fpu_val_6_6 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_6, f5_1) ? 1 : 0) << 0xa
                                | (fpu_val_6_6 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                            item_20 = 1.0f;
                    }
                }
            }

            long double f3_1 = 0.0;
            fp0_1 - f3_1;

            if (*(&((fp0_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f3_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                item_18 = 0.0f;
            else
            {
                double item_38 =
                    g_5ca178 * item_40 + g_5ca16c * item_48_1 + g_5ca160 * item_50;
                double item_30_1 =
                    g_5ca17c * item_40 + g_5ca170 * item_48_1 + g_5ca164 * item_50;
                double item_28_1 =
                    g_5ca180 * item_40 + g_5ca174 * item_48_1 + g_5ca168 * item_50;
                memcpy(&item_50, &item_38, 0x18);
                item_18 = fp0_1 / (item_8_1 + item_10_1) * item_38 / fp0_1;
                long double fpu_val_7_13 = item_18;
                long double f9_1 = -1.0f;
                fpu_val_7_13 - f9_1;

                if (!(*(&((fpu_val_7_13 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_13, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_13 == f9_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double fpu_val_7_14 = item_18;
                    long double f10_1 = 1.0f;
                    fpu_val_7_14 - f10_1;

                    if (!(*(&((fpu_val_7_14 < f10_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_14, f10_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_14 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        item_18 = 1.0f;
                }
                else
                    item_18 = -1.0f;
            }
        }

        int32_t entity_2;

        if (!(*(context + 8) & 0x20))
            entity_2 = g_54390c * item_20 * 10000.0f;
        else
            entity_2 = g_543908 * g_543904 * item_20 * 10000.0f;

        int32_t* data_6 = *(context + 0x10);
        (*(*data_6 + 0x3c))(data_6, (&g_67a4a0)[entity_2]);
        long double fpu_val_7_23 = item_18;
        long double f1_1 = 0.0f;
        fpu_val_7_23 - f1_1;
        int32_t entity_4;
        int32_t temp_2;

        if (!(*(&((fpu_val_7_23 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_23, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_23 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            temp_2 = 1;
            entity_4 = (1.0f - item_18) * 10000.0f;
        }
        else
        {
            temp_2 = 0xffffffff;
            entity_4 = (item_18 + 1.0f) * 10000.0f;
        }

        if (!(*(context + 8) & 4))
        {
            int32_t dest_1 = g_543914;
            int32_t dest_2 = -(dest_1);
            int32_t* data_9 = *(context + 0x10);
            (*(*data_9 + 0x40))(data_9,
                (&g_67a4a0)[entity_4] * (((dest_2 - dest_2) & 0xfffffffe) + 1) * temp_2);
        }

        float item_1c;
        long double fpu_val_7_30 = item_1c;
        long double f6_1 = 0.5f;
        fpu_val_7_30 - f6_1;

        if (!(*(&((fpu_val_7_30 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_30, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_7_30 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double fpu_val_7_31 = item_1c;
            long double f8_1 = 2.0f;
            fpu_val_7_31 - f8_1;

            if (!(*(&((fpu_val_7_31 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_31, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_31 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                item_1c = 2.0f;
        }
        else
            item_1c = 0.5f;

        int32_t* data_10 = *(context + 0x10);
        (*(*data_10 + 0x44))(data_10, *(*(context + 0xc) + 0x1c) * item_1c);
        data_11 = *(context + 8);

        if (data_11 & 1)
        {
            int32_t entity_10;

            if (!(data_11 & 0x20))
                entity_10 = g_54390c * item_20 * 10000.0f;
            else
                entity_10 = g_543908 * g_543904 * item_20 * 10000.0f;

            int32_t* data_12 = *(context + 0x10);
            (*(*data_12 + 0x3c))(data_12, (&g_67a4a0)[entity_10]);
            long double fpu_val_7_41 = item_18;
            long double f11_1 = 0.0f;
            fpu_val_7_41 - f11_1;
            int32_t entity_12;
            int32_t temp_5;

            if (!(*(&((fpu_val_7_41 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_41, f11_1) ? 1 : 0) << 0xa
                | (fpu_val_7_41 == f11_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                temp_5 = 1;
                entity_12 = (1.0f - item_18) * 10000.0f;
            }
            else
            {
                temp_5 = 0xffffffff;
                entity_12 = (item_18 + 1.0f) * 10000.0f;
            }

            if (!(*(context + 8) & 4))
            {
                int32_t dest_6 = g_543914;
                int32_t dest_7 = -(dest_6);
                int32_t* data_15 = *(context + 0x10);
                (*(*data_15 + 0x40))(data_15,
                    (&g_67a4a0)[entity_12] * (((dest_7 - dest_7) & 0xfffffffe) + 1) * temp_5);
            }

            long double fpu_val_7_48 = item_1c;
            long double f12_1 = 0.5f;
            fpu_val_7_48 - f12_1;

            if (!(*(&((fpu_val_7_48 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_48, f12_1) ? 1 : 0) << 0xa
                | (fpu_val_7_48 == f12_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double fpu_val_7_49 = item_1c;
                long double f14_1 = 2.0f;
                fpu_val_7_49 - f14_1;

                if (!(*(&((fpu_val_7_49 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_49, f14_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_49 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    item_1c = 2.0f;
            }
            else
                item_1c = 0.5f;

            int32_t* data_16 = *(context + 0x10);
            data_11 = (*(*data_16 + 0x44))(data_16, *(*(context + 0xc) + 0x1c) * item_1c);
        }

        memcpy(param_2, &item_20, 0x20);
    }

    return data_11;
}
