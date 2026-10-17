// Original IGI.EXE function: Sector_Cleanup (VA 0x004DBCC0; static CFG gate FAIL, CFG score 0.800).
#include "Sector_Cleanup.h"
int32_t Sector_Cleanup(int32_t* context, int32_t* param_2)

{
    int32_t result = context[0x52];

    if (result)
    {
        void item_a0;
        memcpy(&item_a0, *param_2, 0x18);
        void item_88;
        memcpy(&item_88, &item_a0, 0x18);
        long double fpu_val_7_1;

        if (!param_2[1])
            fpu_val_7_1 = 0.0f;
        else
            fpu_val_7_1 = 409.600006f;

        double item_90;
        double item_90_1 = fpu_val_7_1 + item_90;
        long double fpu_val_7_3 = context[0x27];
        long double fpu_val_6_1 = context[0x28];
        fpu_val_6_1 - fpu_val_7_3;
        long double fpu_val_7_4;

        if (!(*(&((fpu_val_6_1 < fpu_val_7_3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_3) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_3 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_4 = context[0x28];
        else
            fpu_val_7_4 = context[0x27];

        long double fpu_val_6_2 = context[0x26];
        fpu_val_6_2 - fpu_val_7_4;
        long double fpu_val_7_6;

        if (*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_7 = context[0x27];
            long double fpu_val_6_3 = context[0x28];
            fpu_val_6_3 - fpu_val_7_7;

            if (!(*(&((fpu_val_6_3 < fpu_val_7_7 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_7) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_7 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_6 = context[0x28];
            else
                fpu_val_7_6 = context[0x27];
        }
        else
            fpu_val_7_6 = context[0x26];

        long double fpu_val_7_9 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_6;
        void* item_70 = nullptr;
        int32_t item_18_1 = 0;
        int32_t* item_a4_1 = &item_70;
        result = 1;
        void* item_c0_1 = &item_88;
        double item_78;
        double item_78_1 = item_78 - (fpu_val_7_9 + fpu_val_7_9);
        void item_68;
        memcpy(&item_68, &item_88, 0x18);
        char item_b8 = 0xff;
        void* item_c4 = &item_a0;
        int32_t item_b4_1 = 0;
        int32_t item_bc_1 = 1;
        int32_t item_b0_1 = 0;
        int32_t item_ac_1 = 1;
        int32_t item_a8;
        strncpy(&item_a8, "DCBA", 4);
        int32_t* i = context;

        if (context)
        {
            do
            {
                int32_t entity_1 = 0;
                entity_1 = i[7];
                result = (*((entity_1 << 2) + &g_a9a0e0))(i, &item_c4);

                if (i != context)
                {
                    i = *i;

                    if (!i)
                        break;

                    if (!*i)
                        break;
                }
                else
                {
                    void* source_2 = i[0x52];

                    if (!source_2)
                        break;

                    i = *(source_2 + 8);

                    if (!*i)
                        break;
                }
            } while (i);

            if (item_18_1)
            {
                void* data_3 = item_70;
                param_2[2] = data_3;
                param_2[3] = context;
                long double fpu_val_6_11 =
                    context[0x21] * context[0x66] + context[0x20] * context[0x65] + context[0x1f] * context[0x64];
                long double fpu_val_6_15 =
                    context[0x24] * context[0x66] + context[0x23] * context[0x65] + context[0x22] * context[0x64];
                *(param_2 + 0x10) = context[0x1e] * context[0x66] + context[0x1d] * context[0x65]
                    + context[0x1c] * context[0x64] + *(data_3 + 0x20);
                *(param_2 + 0x18) = fpu_val_6_11 + *(data_3 + 0x28);
                *(param_2 + 0x20) = fpu_val_6_15 + *(data_3 + 0x30);
                result = context[0x67];
                param_2[0xa] = result;
            }
        }
    }

    return result;
}
