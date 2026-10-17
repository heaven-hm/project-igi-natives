// Original IGI.EXE function: DynObj_LookupHashItem_3 (VA 0x004C0A10; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LookupHashItem_3.h"
int32_t DynObj_LookupHashItem_3(int32_t* context, int32_t* param_2)

{
    void item_2c8;
    int32_t result = Sys_PushStack_26(&item_2c8, param_2[6]);

    if (result)
    {
        int32_t result_1;
        result = result_1;
        char item_2cd;
        int32_t item_2cc;
        void item_2c0;

        if (result == 4)
        {
            int32_t data_1 = Camera_ResetMatrix_4(&item_2c0);
            item_2cc = data_1;

            if (data_1 < 0xffffff80 || data_1 > 0x7f)
            {
                if (data_1 >= 0xffff8000 && data_1 <= 0x7fff)
                {
                    *context = 3;
                    int32_t* entity_1 = param_2[4];
                    item_2cd = 4;
                    Sys_CloseFileStream_4(entity_1, &item_2cd, 1);
                    return Sys_CloseFileStream_4(param_2[4], &item_2cc, 2);
                }

                *context = 5;
                int32_t* data_11 = param_2[4];
                item_2cd = 2;
                Sys_CloseFileStream_4(data_11, &item_2cd, 1);
                return Sys_CloseFileStream_4(param_2[4], &item_2cc, 4);
            }

            if (!data_1)
            {
                *context = 1;
                int32_t* temp_val = param_2[4];
                item_2cd = 0xf;
                return Sys_CloseFileStream_4(temp_val, &item_2cd, 1);
            }

            if (data_1 == 1)
            {
                *context = 1;
                int32_t* temp_1 = param_2[4];
                item_2cd = 0x10;
                return Sys_CloseFileStream_4(temp_1, &item_2cd, 1);
            }

            if (data_1 == 0xffffffff)
            {
                *context = 1;
                int32_t* temp_2 = param_2[4];
                item_2cd = 0x11;
                return Sys_CloseFileStream_4(temp_2, &item_2cd, 1);
            }

            *context = 2;
            int32_t* temp_3 = param_2[4];
            item_2cd = 3;
            Sys_CloseFileStream_4(temp_3, &item_2cd, 1);
            return Sys_CloseFileStream_4(param_2[4], &item_2cc, 1);
        }

        if (result == 5)
        {
            long double fp0 = Terrain_SelectTerrainLOD_4(&item_2c0);
            item_2cc = fp0;
            long double f0 = 0.0f;
            fp0 - f0;

            if (!(*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
                | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                long double fpu_val_7_1 = item_2cc;
                long double f1_1 = 1.0f;
                fpu_val_7_1 - f1_1;

                if (!(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    long double fpu_val_7_2 = item_2cc;
                    long double f2_1 = -1.0f;
                    fpu_val_7_2 - f2_1;

                    if (!(*(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        *context = 5;
                        int32_t* data_17 = param_2[4];
                        item_2cd = 5;
                        Sys_CloseFileStream_4(data_17, &item_2cd, 1);
                        return Sys_CloseFileStream_4(param_2[4], &item_2cc, 4);
                    }

                    *context = 1;
                    item_2cd = 0x11;
                }
                else
                {
                    item_2cd = 0x10;
                    *context = 1;
                }
            }
            else
            {
                item_2cd = 0xf;
                *context = 1;
            }

            return Sys_CloseFileStream_4(param_2[4], &item_2cd, 1);
        }

        if (result == 2)
        {
            int32_t data_19 = Sys_CloseFileStream_26(param_2, &item_2c0);
            item_2cc = data_19;

            if (data_19 < 0x100)
            {
                *context = 2;
                int32_t* data_20 = param_2[4];
                item_2cd = 9;
                Sys_CloseFileStream_4(data_20, &item_2cd, 1);
                return Sys_CloseFileStream_4(param_2[4], &item_2cc, 1);
            }

            if (data_19 >= 0x10000)
            {
                *context = 5;
                int32_t* entity_8 = param_2[4];
                item_2cd = 8;
                Sys_CloseFileStream_4(entity_8, &item_2cd, 1);
                return Sys_CloseFileStream_4(param_2[4], &item_2cc, 4);
            }

            *context = 3;
            int32_t* temp_8 = param_2[4];
            item_2cd = 0xa;
            Sys_CloseFileStream_4(temp_8, &item_2cd, 1);
            return Sys_CloseFileStream_4(param_2[4], &item_2cc, 2);
        }

        if (result == 9)
        {
            int32_t data_26 = Sys_DispatchOpcode_26(param_2, &item_2c0);
            item_2cc = data_26;

            if (data_26 < 0x100)
            {
                *context = 2;
                int32_t* entity_9 = param_2[4];
                item_2cd = 0xd;
                Sys_CloseFileStream_4(entity_9, &item_2cd, 1);
                return Sys_CloseFileStream_4(param_2[4], &item_2cc, 1);
            }

            if (data_26 >= 0x10000)
            {
                *context = 5;
                int32_t* temp_12 = param_2[4];
                item_2cd = 0xc;
                Sys_CloseFileStream_4(temp_12, &item_2cd, 1);
                return Sys_CloseFileStream_4(param_2[4], &item_2cc, 4);
            }

            *context = 3;
            int32_t* data_29 = param_2[4];
            item_2cd = 0xe;
            Sys_CloseFileStream_4(data_29, &item_2cd, 1);
            return Sys_CloseFileStream_4(param_2[4], &item_2cc, 2);
        }
    }

    param_2[1] = 1;
    return result;
}
