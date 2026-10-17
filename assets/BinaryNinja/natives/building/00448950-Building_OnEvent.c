// Original IGI.EXE function: Building_OnEvent (VA 0x00448950; static CFG gate PASS, CFG score 1.000).
#include "Building_OnEvent.h"
int32_t Building_OnEvent(float context, void* param_2)

{
    long double fpu7 = *(context + 0x9c);
    long double fpu6 = *(context + 0xa0);
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = *(context + 0xa0);
    else
        fpu_val_7_1 = *(context + 0x9c);

    long double fpu_val_6_1 = *(context + 0x98);
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = *(context + 0x9c);
        long double fpu_val_6_2 = *(context + 0xa0);
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = *(context + 0xa0);
        else
            fpu_val_7_3 = *(context + 0x9c);
    }
    else
        fpu_val_7_3 = *(context + 0x98);

    long double fpu_val_7_6 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(*(param_2 + 4), context, context + 0x1d8, fpu_val_7_6, 8);
    (*(((DynObj_UpdateDynTree_12() * 0x180 + Render_ComputeNormals_15()) << 2) + &g_a96ae0))(context, param_2);
    int32_t* i = *(context + 8);
    int32_t result = *i;

    if (result && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_10;

            if (!temp_1)
                data_10 = nullptr;
            else
            {
                int32_t data_7 = *temp_1;
                int32_t data_8 = -(data_7);
                data_10 = (data_8 - data_8) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_10;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_12 = DynObj_UpdateDynTree_12();
            int32_t entity_3 = 0;
            entity_3 = i[7];
            result = *(((data_12 * 0x180 + entity_3) << 2) + &g_a96ae0);

            if (result)
                result = result(i, param_2);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
