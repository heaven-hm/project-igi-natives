// IGI native provenance: EditRigidObj_Cleanup - 0x004F30A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F30A0-EditRigidObj_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditRigidObj_Cleanup.h"
int32_t EditRigidObj_Cleanup(float context, void* param_2)

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
    DynObj_LinkDynamicCube_8(*(param_2 + 4), dest_val, &dest_val[0x3c], fpu_val_7_6, 2);
    double* data_2 = DynObj_UpdateDynTree_4(dest_val);
    Render_ComputeNormals_14(*(param_2 + 4), dest_val, data_2);
    int32_t* i = dest_val[2];
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* entity_4;

            if (!temp_1)
                entity_4 = nullptr;
            else
            {
                int32_t entity_1 = *temp_1;
                int32_t entity_2 = -(entity_1);
                entity_4 = (entity_2 - entity_2) & temp_1;
            }

            *((result << 2) + &g_afa6e0) = entity_4;
            g_afa7e0 = result + 1;
            uint32_t data_6 = DynObj_UpdateDynTree_12();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            int32_t data_7 = *(((data_6 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (data_7)
                data_7(i, param_2);

            result = g_afa7e0 - 1;
            g_afa7e0 = result;
            i = *((result << 2) + &g_afa6e0);
        } while (i);
    }

    void* entity_8 = dest_val[0x3a];

    if (entity_8)
    {
        int32_t* i_1 = *(entity_8 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* temp_3 = *i_1;
                void* entity_12;

                if (!temp_3)
                    entity_12 = nullptr;
                else
                {
                    int32_t entity_9 = *temp_3;
                    int32_t entity_10 = -(entity_9);
                    entity_12 = (entity_10 - entity_10) & temp_3;
                }

                *((result << 2) + &g_afa6e0) = entity_12;
                g_afa7e0 = result + 1;
                uint32_t data_11 = DynObj_UpdateDynTree_12();
                int32_t entity_13 = 0;
                entity_13 = i_1[7];
                int32_t data_15 = *(((data_11 * 0x180 + entity_13) << 2) + &g_a96ae0);

                if (data_15)
                    data_15(i_1, param_2);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    dest_val[0x66] = 1;
    return result;
}
