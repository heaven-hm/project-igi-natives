// Original IGI.EXE function: AI_AlertAllies_21 (VA 0x004640B0; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_21.h"
int32_t AI_AlertAllies_21(float context)

{
    int32_t* dest_val = context;
    int32_t* source_val = *dest_val;
    uint32_t data_1 = Weapon_CheckAmmo_8();
    int32_t temp_val = 0;
    temp_val = *(*source_val + 0x1c);
    int32_t result = data_1 * 0x180 + temp_val;

    if (*((result << 2) + &g_a96ae0))
    {
        long double fpu_val_7_2 = *(dest_val + 8) - *(dest_val + 0x20);
        long double fpu_val_6_2 = *(dest_val + 0x10) - *(dest_val + 0x28);
        long double fpu_val_5_2 = *(dest_val + 0x18) - *(dest_val + 0x30);
        long double fpu_val_4_1 = source_val[0xe];
        long double f1_1 = 0.0f;
        fpu_val_4_1 - f1_1;
        result = (fpu_val_4_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_4_1 == f1_1 ? 1 : 0) << 0xe | 0x2800;

        if (!(*(&result + 1) & 0x40))
        {
        label_464126:
            long double fpu_val_4_4 = source_val[0x10];
            long double fpu_val_3_1 = source_val[0xf];
            long double fpu_val_2_1 = source_val[0xe];
            long double fpu_val_4_6 =
                1.0 / sqrtl(fpu_val_2_1 * fpu_val_2_1 + fpu_val_3_1 * fpu_val_3_1 + fpu_val_4_4 * fpu_val_4_4);
            source_val[0xe] = source_val[0xe] * fpu_val_4_6;
            source_val[0xf] = source_val[0xf] * fpu_val_4_6;
            source_val[0x10] = source_val[0x10] * fpu_val_4_6;
        }
        else
        {
            long double fpu_val_4_2 = source_val[0xf];
            long double f2_1 = 0.0f;
            fpu_val_4_2 - f2_1;
            result = (fpu_val_4_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_2, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_4_2 == f2_1 ? 1 : 0) << 0xe | 0x2800;

            if (!(*(&result + 1) & 0x40))
                goto label_464126;

            long double fpu_val_4_3 = source_val[0x10];
            long double f4_1 = 0.0f;
            fpu_val_4_3 - f4_1;
            result = (fpu_val_4_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_3, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_4_3 == f4_1 ? 1 : 0) << 0xe | 0x2800;

            if (!(*(&result + 1) & 0x40))
                goto label_464126;
        }

        long double fpu_val_7_4 = fpu_val_5_2 * source_val[0x10] + fpu_val_6_2 * source_val[0xf] + fpu_val_7_2 * source_val[0xe];
        long double f3_1 = 0.0f;
        fpu_val_7_4 - f3_1;
        result = (fpu_val_7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            context = Sys_AllocateMemory_14(Level_SetMission_5()) * 204.800003f + 102.400002f;
            uint32_t data_6 = Sys_FreeMemory_14(Level_SetMission_5(), 2);
            float data_10;

            if (!data_6)
                data_10 = g_5bdb14 + 0x18;
            else if (data_6 != 1)
                data_10 = context;
            else
                data_10 = g_5bdb04 + 0x18;

            int32_t* item_10 = source_val;
            void* source_1 = *source_val;
            float item_8_1 = data_10;
            int32_t item_c_1 = 0;
            float item_4_1 = context;
            uint32_t data_12 = Weapon_CheckAmmo_8();
            int32_t entity_3 = 0;
            entity_3 = *(source_1 + 0x1c);
            return (*(((data_12 * 0x180 + entity_3) << 2) + &g_a96ae0))(source_1, &item_10);
        }
    }

    return result;
}
