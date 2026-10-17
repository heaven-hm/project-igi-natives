// Original IGI.EXE function: AIStationaryGun_Update (VA 0x0046FBA0; static CFG gate PASS, CFG score 0.875).
#include "AIStationaryGun_Update.h"
int32_t AIStationaryGun_Update(double* context, int32_t* param_2)

{
    float* data_val = param_2[1];
    double item_94 = data_val[2] * context[0x20] + data_val[1] * context[0x1f] + *data_val * context[0x1e];
    double item_8c = data_val[5] * context[0x20] + data_val[4] * context[0x1f] + data_val[3] * context[0x1e];
    double* data_1 = *param_2;
    double item_84 = data_val[8] * context[0x20] + data_val[7] * context[0x1f] + data_val[6] * context[0x1e];
    long double fpu_val_7_12 = item_94;
    double item_40;
    memcpy(&item_40, &item_94, 0x18);
    item_40 = fpu_val_7_12 + *data_1;
    double item_38;
    double item_38_1 = item_38 + data_1[1];
    double item_30;
    double item_30_1 = item_30 + data_1[2];
    long double fpu_val_7_18 = *(context + 0x9c);
    long double fpu_val_6_12 = context[0x14];
    fpu_val_6_12 - fpu_val_7_18;
    long double fpu_val_7_19;

    if (!(*(&((fpu_val_6_12 < fpu_val_7_18 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, fpu_val_7_18) ? 1 : 0) << 0xa
            | (fpu_val_6_12 == fpu_val_7_18 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_19 = context[0x14];
    else
        fpu_val_7_19 = *(context + 0x9c);

    long double fpu_val_6_13 = context[0x13];
    fpu_val_6_13 - fpu_val_7_19;
    long double fpu_val_7_21;

    if (*(&((fpu_val_6_13 < fpu_val_7_19 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_13, fpu_val_7_19) ? 1 : 0) << 0xa
        | (fpu_val_6_13 == fpu_val_7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_22 = *(context + 0x9c);
        long double fpu_val_6_14 = context[0x14];
        fpu_val_6_14 - fpu_val_7_22;

        if (!(*(&((fpu_val_6_14 < fpu_val_7_22 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_14, fpu_val_7_22) ? 1 : 0) << 0xa
                | (fpu_val_6_14 == fpu_val_7_22 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_21 = context[0x14];
        else
            fpu_val_7_21 = *(context + 0x9c);
    }
    else
        fpu_val_7_21 = context[0x13];

    long double fpu_val_7_24 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_21;
    void* temp_val = context[0xd];
    float item_a8_1 = fpu_val_7_24;
    double* i_1 = &item_40;
    WorldObject_CommitTransform(temp_val, context, i_1, item_a8_1);
    float data_4 = context[0x38];
    float item_68;
    int32_t* item_bc = &item_68;
    Sys_DispatchOpcode_12(item_bc, data_4);
    float item_5c;
    float item_50;
    item_94 = item_50 * context[0x22] + item_68 * context[0x21] + item_5c * *(context + 0x10c);
    float item_64;
    float item_58;
    float item_4c;
    *(&item_94 + 4) = item_4c * context[0x22] + item_64 * context[0x21] + item_58 * *(context + 0x10c);
    float item_60;
    float item_54;
    float item_48;
    item_8c = item_48 * context[0x22] + item_60 * context[0x21] + item_54 * *(context + 0x10c);
    *(&item_8c + 4) = item_50 * *(context + 0x11c) + item_68 * *(context + 0x114) + item_5c * context[0x23];
    item_84 = item_4c * *(context + 0x11c) + item_64 * *(context + 0x114) + item_58 * context[0x23];
    *(&item_84 + 4) = item_48 * *(context + 0x11c) + item_60 * *(context + 0x114) + item_54 * context[0x23];
    int32_t item_44;
    int32_t temp_2 = *(context + 0x12c) + item_44 + 1;
    float* data_6 = param_2[1];
    int32_t item_70 = temp_2;
    float item_7c = item_50 * context[0x25] + item_68 * context[0x24] + item_5c * *(context + 0x124);
    float item_78 = item_4c * context[0x25] + item_64 * context[0x24] + item_58 * *(context + 0x124);
    float item_74 = item_48 * context[0x25] + item_60 * context[0x24] + item_54 * *(context + 0x124);
    memcpy(&item_68, &item_94, 0x28);
    float item_28 = *(&item_8c + 4) * data_6[1] + item_94 * *data_6 + item_7c * data_6[2];
    float item_24 = item_84 * data_6[1] + *(&item_94 + 4) * *data_6 + item_78 * data_6[2];
    float item_20 = *(&item_84 + 4) * data_6[1] + item_8c * *data_6 + item_74 * data_6[2];
    float item_1c = *(&item_8c + 4) * data_6[4] + item_7c * data_6[5] + item_94 * data_6[3];
    int32_t item_4 = data_6[9] + temp_2 + 1;
    float item_18 = item_84 * data_6[4] + item_78 * data_6[5] + *(&item_94 + 4) * data_6[3];
    float item_14 = *(&item_84 + 4) * data_6[4] + item_74 * data_6[5] + item_8c * data_6[3];
    float item_10 = *(&item_8c + 4) * data_6[7] + item_7c * data_6[8] + item_94 * data_6[6];
    float item_c = item_84 * data_6[7] + item_78 * data_6[8] + *(&item_94 + 4) * data_6[6];
    float item_8 = *(&item_84 + 4) * data_6[7] + item_74 * data_6[8] + item_8c * data_6[6];
    memcpy(&context[0xe], &item_28, 0x28);
    Weapon_ReloadClip(context);
    double* i = context[1];
    int32_t result = *i;

    if (result && i)
    {
        *(&item_94 + 4) = &context[0xe];
        item_94 = &context[4];

        if (result && i)
        {
            int32_t entity_1 = g_afa7e0;

            do
            {
                int32_t* temp_4 = *i;
                void* data_10;

                if (!temp_4)
                    data_10 = nullptr;
                else
                {
                    int32_t data_7 = *temp_4;
                    int32_t data_8 = -(data_7);
                    data_10 = (data_8 - data_8) & temp_4;
                }

                *((entity_1 << 2) + &g_afa6e0) = data_10;
                g_afa7e0 = entity_1 + 1;
                uint32_t data_12 = MagicObj_GetEventId();
                int32_t entity_3 = 0;
                entity_3 = *(i + 0x1c);
                result = *(((data_12 * 0x180 + entity_3) << 2) + &g_a96ae0);

                if (result)
                {
                    double* item_a8_2 = &item_94;
                    i_1 = i;
                    result = result(i_1, item_a8_2);
                }

                entity_1 = g_afa7e0 - 1;
                g_afa7e0 = entity_1;
                i = *((entity_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
