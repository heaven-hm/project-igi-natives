// Original IGI.EXE function: ExplodeObject_Cleanup_3 (VA 0x00482390; static CFG gate PASS, CFG score 1.000).
#include "ExplodeObject_Cleanup_3.h"
int32_t ExplodeObject_Cleanup_3(float context, void* param_2)

{
    int32_t* dest_val = context;
    long double fpu7 = dest_val[0x27];
    long double fpu6 = dest_val[0x28];
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = dest_val[0x28];
    else
        fpu_val_7_1 = dest_val[0x27];

    long double fpu_val_6_1 = dest_val[0x26];
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = dest_val[0x27];
        long double fpu_val_6_2 = dest_val[0x28];
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = dest_val[0x28];
        else
            fpu_val_7_3 = dest_val[0x27];
    }
    else
        fpu_val_7_3 = dest_val[0x26];

    long double fpu_val_7_6 = Render_ComputeNormals(dest_val[0x1b]) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(*(param_2 + 4), dest_val, &dest_val[8], fpu_val_7_6, 2);
    double* data_2 = DynObj_UpdateDynTree_4(dest_val);
    int32_t result = Render_ComputeNormals_14(*(param_2 + 4), dest_val, data_2);
    int32_t* i = dest_val[2];

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

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

            *((entity_1 << 2) + &g_afa6e0) = data_7;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_9 = DynObj_UpdateDynTree_12();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            result = *(((data_9 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, param_2);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    dest_val[0x8d] = 1;
    return result;
}
