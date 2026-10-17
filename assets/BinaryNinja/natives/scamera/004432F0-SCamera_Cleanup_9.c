// Original IGI.EXE function: SCamera_Cleanup_9 (VA 0x004432F0; static CFG gate PASS, CFG score 1.000).
#include "SCamera_Cleanup_9.h"
int32_t SCamera_Cleanup_9(float context, void* param_2)

{
    int32_t* source_val = context;
    double* dest_val = source_val[0x974];
    double item_18;
    WeaponType_UpdateAnim(&item_18, dest_val, 0);
    item_18 = item_18 + dest_val[4];
    double item_10;
    double item_10_1 = item_10 + dest_val[5];
    double item_8;
    double item_8_1 = item_8 + dest_val[6];
    long double fpu_val_7_6 = source_val[0x27];
    long double fpu6 = source_val[0x28];
    fpu6 - fpu_val_7_6;
    long double fpu_val_7_7;

    if (!(*(&((fpu6 < fpu_val_7_6 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_6) ? 1 : 0) << 0xa
            | (fpu6 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_7 = source_val[0x28];
    else
        fpu_val_7_7 = source_val[0x27];

    long double fpu_val_6_1 = source_val[0x26];
    fpu_val_6_1 - fpu_val_7_7;
    long double fpu_val_7_9;

    if (*(&((fpu_val_6_1 < fpu_val_7_7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_7) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_10 = source_val[0x27];
        long double fpu_val_6_2 = source_val[0x28];
        fpu_val_6_2 - fpu_val_7_10;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_10 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_2, fpu_val_7_10) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_10 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_9 = source_val[0x28];
        else
            fpu_val_7_9 = source_val[0x27];
    }
    else
        fpu_val_7_9 = source_val[0x26];

    long double fpu_val_7_12 = Render_ComputeNormals(source_val[0x1b]) * fpu_val_7_9;
    DynObj_LinkDynamicCube_8(*(param_2 + 4), source_val, &item_18, fpu_val_7_12, 1);
    double* data_3 = DynObj_UpdateDynTree_4(source_val);
    int32_t result = Render_ComputeNormals_14(source_val[0x1a], source_val, data_3);
    int32_t* i = source_val[2];

    if (*i && i)
    {
        int32_t entity_2 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_7;

            if (!temp_1)
                data_7 = nullptr;
            else
            {
                int32_t data_4 = *temp_1;
                int32_t data_5 = -(data_4);
                data_7 = (data_5 - data_5) & temp_1;
            }

            *((entity_2 << 2) + &g_afa6e0) = data_7;
            g_afa7e0 = entity_2 + 1;
            uint32_t data_9 = DynObj_UpdateDynTree_12();
            int32_t data_10 = 0;
            data_10 = i[7];
            result = *(((data_9 * 0x180 + data_10) << 2) + &g_a96ae0);

            if (result)
                result = result(i, param_2);

            entity_2 = g_afa7e0 - 1;
            g_afa7e0 = entity_2;
            i = *((entity_2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
