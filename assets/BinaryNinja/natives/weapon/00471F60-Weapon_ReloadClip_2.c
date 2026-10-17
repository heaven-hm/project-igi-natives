// Original IGI.EXE function: Weapon_ReloadClip_2 (VA 0x00471F60; static CFG gate PASS, CFG score 1.000).
#include "Weapon_ReloadClip_2.h"
int32_t Weapon_ReloadClip_2(void* context, int32_t param_2, float param_3, int32_t param_4, int32_t* param_5, int32_t param_6, int32_t param_7, int32_t param_8)

{
    int32_t data_val = 0;
    int32_t* entity_val = context + 0x2c44;
    int32_t* temp_val = entity_val;
    int32_t* source_1;

    while (true)
    {
        if (*temp_val == param_2)
        {
            source_1 = context + data_val * 0x2c + 0x2c44;

            if (source_1)
                break;
        }
        else
        {
            data_val += 1;
            temp_val = &temp_val[0xb];

            if (data_val < 0xa)
                continue;
        }

        int32_t data_2 = 0;

        while (true)
        {
            if (!*entity_val)
            {
                source_1 = context + data_2 * 0x2c + 0x2c44;
                source_1[8] = Timer_Now();

                if (source_1)
                    break;
            }
            else
            {
                data_2 += 1;
                entity_val = &entity_val[0xb];

                if (data_2 < 0xa)
                    continue;
            }

            int32_t entity_2 = 0;
            float* temp_3 = context + 0x2c5c;

            while (true)
            {
                long double fpu_val_7_1 = *temp_3;
                long double f0_1 = param_3;
                fpu_val_7_1 - f0_1;

                if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    source_1 = context + entity_2 * 0x2c + 0x2c44;
                    source_1[8] = Timer_Now();

                    if (source_1)
                        break;
                }
                else
                {
                    entity_2 += 1;
                    temp_3 = &temp_3[0xb];

                    if (entity_2 < 0xa)
                        continue;
                }

                return 0;
            }

            break;
        }

        break;
    }

    *source_1 = param_2;
    source_1[6] = param_3;
    source_1[4] = 1;
    source_1[5] = param_4;
    source_1[3] = param_6;
    source_1[7] = Timer_Now();
    source_1[2] = param_7;
    source_1[1] = param_8;
    source_1[9] = *param_5;
    source_1[0xa] = param_5[1];
    return 1;
}
