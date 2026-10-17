// IGI native provenance: RigidDynCubeObj_Cleanup_2 - 0x004C4660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C4660-RigidDynCubeObj_Cleanup_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RigidDynCubeObj_Cleanup_2.h"
void RigidDynCubeObj_Cleanup_2(int32_t* context, float param_2)

{
    int32_t* dest_val = param_2;

    if (!*dest_val)
    {
        long double fpu_val_7_1 = context[0x27];
        long double fpu_val_6_1 = context[0x28];
        fpu_val_6_1 - fpu_val_7_1;
        long double fpu_val_7_2;

        if (!(*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_2 = context[0x28];
        else
            fpu_val_7_2 = context[0x27];

        long double fpu_val_6_2 = context[0x26];
        fpu_val_6_2 - fpu_val_7_2;
        long double fpu_val_7_4;

        if (*(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_5 = context[0x27];
            long double fpu_val_6_3 = context[0x28];
            fpu_val_6_3 - fpu_val_7_5;

            if (!(*(&((fpu_val_6_3 < fpu_val_7_5 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_5) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_5 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_4 = context[0x28];
            else
                fpu_val_7_4 = context[0x27];
        }
        else
            fpu_val_7_4 = context[0x26];

        int32_t data_2 = dest_val[2];
        long double fpu_val_7_7 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_4;
        DynObj_LinkDynamicCube_8(dest_val[1], context, &context[8], fpu_val_7_7, data_2);
    }

    int32_t* i = context[2];

    if (!*i || !i)
        return;

    int32_t entity_2 = g_afa7e0;

    do
    {
        int32_t* temp_2 = *i;
        void* data_7;

        if (!temp_2)
            data_7 = nullptr;
        else
        {
            int32_t data_4 = *temp_2;
            int32_t data_5 = -(data_4);
            data_7 = (data_5 - data_5) & temp_2;
        }

        *((entity_2 << 2) + &g_afa6e0) = data_7;
        g_afa7e0 = entity_2 + 1;
        uint32_t data_9 = DynObj_UpdateDynTree_12();
        int32_t temp_3 = 0;
        temp_3 = i[7];
        int32_t data_val = *(((data_9 * 0x180 + temp_3) << 2) + &g_a96ae0);

        if (data_val)
            data_val(i, dest_val);

        entity_2 = g_afa7e0 - 1;
        g_afa7e0 = entity_2;
        i = *((entity_2 << 2) + &g_afa6e0);
    } while (i);
}
