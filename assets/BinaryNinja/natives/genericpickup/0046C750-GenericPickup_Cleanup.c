// Original IGI.EXE function: GenericPickup_Cleanup (VA 0x0046C750; static CFG gate PASS, CFG score 1.000).
#include "GenericPickup_Cleanup.h"
int32_t GenericPickup_Cleanup(float context, int32_t param_2)

{
    int32_t* source_val = context;
    int32_t result;
    result = *(source_val + 0x11a);

    if (!result)
    {
        result = *(source_val + 0x119);

        if (!result)
        {
            long double fpu_val_7_1 = source_val[0x27];
            long double fpu_val_6_1 = source_val[0x28];
            fpu_val_6_1 - fpu_val_7_1;
            long double fpu_val_7_2;

            if (!(*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_2 = source_val[0x28];
            else
                fpu_val_7_2 = source_val[0x27];

            long double fpu_val_6_2 = source_val[0x26];
            fpu_val_6_2 - fpu_val_7_2;
            long double fpu_val_7_4;

            if (*(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_7_5 = source_val[0x27];
                long double fpu_val_6_3 = source_val[0x28];
                fpu_val_6_3 - fpu_val_7_5;

                if (!(*(&((fpu_val_6_3 < fpu_val_7_5 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_3, fpu_val_7_5) ? 1 : 0) << 0xa
                        | (fpu_val_6_3 == fpu_val_7_5 ? 1 : 0) << 0xe) + 1) & 1))
                    fpu_val_7_4 = source_val[0x28];
                else
                    fpu_val_7_4 = source_val[0x27];
            }
            else
                fpu_val_7_4 = source_val[0x26];

            float item_c_2 = Render_ComputeNormals(source_val[0x1b]) * fpu_val_7_4;
            DynObj_LinkDynamicCube_8(Level_StartMission_4(), source_val, &source_val[0x3c], item_c_2, 2);
            double* data_3 = DynObj_UpdateDynTree_4(source_val);
            result = Render_ComputeNormals_14(Level_StartMission_4(), source_val, data_3);
            *(source_val + 0x11a) = 1;
        }
    }

    int32_t* i = source_val[2];

    if (*i && i)
    {
        int32_t entity_2 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_8;

            if (!temp_1)
                data_8 = nullptr;
            else
            {
                int32_t data_5 = *temp_1;
                int32_t data_6 = -(data_5);
                data_8 = (data_6 - data_6) & temp_1;
            }

            *((entity_2 << 2) + &g_afa6e0) = data_8;
            g_afa7e0 = entity_2 + 1;
            uint32_t data_10 = DynObj_UpdateDynTree_12();
            int32_t data_11 = 0;
            data_11 = i[7];
            result = *(((data_10 * 0x180 + data_11) << 2) + &g_a96ae0);

            if (result)
                result = result(i, param_2);

            entity_2 = g_afa7e0 - 1;
            g_afa7e0 = entity_2;
            i = *((entity_2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
