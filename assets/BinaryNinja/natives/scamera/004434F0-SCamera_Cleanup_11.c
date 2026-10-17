// IGI native provenance: SCamera_Cleanup_11 - 0x004434F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004434F0-SCamera_Cleanup_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_Cleanup_11.h"
int32_t SCamera_Cleanup_11(float context, void* param_2)

{
    int32_t* source_val = context;
    long double fpu7 = source_val[0x27];
    long double fpu6 = source_val[0x28];
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = source_val[0x28];
    else
        fpu_val_7_1 = source_val[0x27];

    long double fpu_val_6_1 = source_val[0x26];
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = source_val[0x27];
        long double fpu_val_6_2 = source_val[0x28];
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = source_val[0x28];
        else
            fpu_val_7_3 = source_val[0x27];
    }
    else
        fpu_val_7_3 = source_val[0x26];

    long double fpu_val_7_6 = Render_ComputeNormals(source_val[0x1b]) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(*(param_2 + 4), source_val, &source_val[0x3c], fpu_val_7_6, 1);
    double* data_2 = DynObj_UpdateDynTree_4(source_val);
    int32_t result = Render_ComputeNormals_14(source_val[0x1a], source_val, data_2);
    int32_t* i = source_val[2];

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

    return result;
}
