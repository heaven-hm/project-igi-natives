// Original IGI.EXE function: Terrain_BuildMipMaps_11 (VA 0x0051FBA0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_BuildMipMaps_11.h"
int32_t Terrain_BuildMipMaps_11(float context, void* param_2, int32_t param_3)

{
    float source_val = context;
    long double fpu7 = *(source_val + 0x1a0);
    long double f1 = *(source_val + 0x1a8);
    fpu7 - f1;
    int16_t result = (fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
    label_51fbd1:
        int32_t entity_1 = *(source_val + 0x1a0);
        int32_t data_1 = (entity_1 + 1) & 0x80000001;

        if (data_1 < 0)
            data_1 = ((data_1 - 1) | 0xfffffffe) + 1;

        long double fpu_val_7_3 = *(source_val + 0x1a0) - entity_1;
        long double fpu_val_6_2 = 1.0f - fpu_val_7_3;
        int32_t item_20_1 =
            fpu_val_6_2 * *(source_val + (entity_1 << 2) + 0x150) + fpu_val_7_3 * *(source_val + (data_1 << 2) + 0x150);
        context = fpu_val_6_2 * *(source_val + (entity_1 << 2) + 0x158) + fpu_val_7_3 * *(source_val + (data_1 << 2) + 0x158);
        void* entity_3 = source_val + entity_1 * 0x18;
        param_3 = fpu_val_6_2 * *(source_val + (entity_1 << 2) + 0x160) + fpu_val_7_3 * *(source_val + (data_1 << 2) + 0x160);
        void* data_4 = source_val + data_1 * 0x18;
        double item_18 = fpu_val_6_2 * *(source_val + ((entity_1 * 3 + 0x1e) << 3))
            + fpu_val_7_3 * *(source_val + ((data_1 * 3 + 0x1e) << 3));
        double item_10_1 = fpu_val_7_3 * *(data_4 + 0xf8) + fpu_val_6_2 * *(entity_3 + 0xf8);
        double item_8_1 = fpu_val_7_3 * *(data_4 + 0x100) + fpu_val_6_2 * *(entity_3 + 0x100);
        Sys_ReadFileBlock_12(param_2 + 0x70, item_20_1, context, param_3);
        long double fpu_val_7_7 = *(param_2 + 0x9c);
        long double fpu_val_6_7 = *(param_2 + 0xa0);
        fpu_val_6_7 - fpu_val_7_7;
        long double fpu_val_7_8;

        if (!(*(&((fpu_val_6_7 < fpu_val_7_7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_7, fpu_val_7_7) ? 1 : 0) << 0xa
                | (fpu_val_6_7 == fpu_val_7_7 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_8 = *(param_2 + 0xa0);
        else
            fpu_val_7_8 = *(param_2 + 0x9c);

        long double fpu_val_6_8 = *(param_2 + 0x98);
        fpu_val_6_8 - fpu_val_7_8;
        long double fpu_val_7_10;

        if (*(&((fpu_val_6_8 < fpu_val_7_8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, fpu_val_7_8) ? 1 : 0) << 0xa
            | (fpu_val_6_8 == fpu_val_7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_11 = *(param_2 + 0x9c);
            long double fpu_val_6_9 = *(param_2 + 0xa0);
            fpu_val_6_9 - fpu_val_7_11;

            if (!(*(&((fpu_val_6_9 < fpu_val_7_11 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_9, fpu_val_7_11) ? 1 : 0) << 0xa
                    | (fpu_val_6_9 == fpu_val_7_11 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_10 = *(param_2 + 0xa0);
            else
                fpu_val_7_10 = *(param_2 + 0x9c);
        }
        else
            fpu_val_7_10 = *(param_2 + 0x98);

        long double fpu_val_7_13 = Render_ComputeNormals(*(param_2 + 0x6c)) * fpu_val_7_10;
        result = WorldObject_CommitTransform(*(param_2 + 0x68), param_2, &item_18, fpu_val_7_13);
        int32_t temp_5 = *(source_val + 0x1a4);
        *(source_val + 0x1a8) = *(source_val + 0x1a0);
        *(source_val + 0x1ac) = temp_5;
    }
    else
    {
        result = param_3;

        if (result)
            goto label_51fbd1;
    }

    return result;
}
