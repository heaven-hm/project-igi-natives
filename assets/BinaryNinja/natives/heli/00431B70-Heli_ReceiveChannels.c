// Original IGI.EXE function: Heli_ReceiveChannels (VA 0x00431B70; static CFG gate PASS, CFG score 0.972).
#include "Heli_ReceiveChannels.h"
int32_t Heli_ReceiveChannels(float context, int32_t* param_2)

{
    int32_t* source_val = param_2;
    uint32_t context_val = context;
    void* data_val = source_val[1];

    if (*(data_val + 0xc) != 0xbf800000)
        *(context_val + 0x730) = *(data_val + 0xc);

    *(context_val + 0x734) = *source_val[1];
    *(context_val + 0x738) = *(source_val[1] + 4);
    *(context_val + 0x73c) = *(source_val[1] + 8);

    if (!*source_val)
    {
        long double fpu_val_7_5 = *(context_val + 0x9c);
        long double fpu_val_6_1 = *(context_val + 0xa0);
        fpu_val_6_1 - fpu_val_7_5;
        long double fpu_val_7_6;

        if (!(*(&((fpu_val_6_1 < fpu_val_7_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_5) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_5 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_6 = *(context_val + 0xa0);
        else
            fpu_val_7_6 = *(context_val + 0x9c);

        long double fpu_val_6_2 = *(context_val + 0x98);
        fpu_val_6_2 - fpu_val_7_6;
        long double fpu_val_7_8;

        if (*(&((fpu_val_6_2 < fpu_val_7_6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_6) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_9 = *(context_val + 0x9c);
            long double fpu_val_6_3 = *(context_val + 0xa0);
            fpu_val_6_3 - fpu_val_7_9;

            if (!(*(&((fpu_val_6_3 < fpu_val_7_9 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_9) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_9 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_8 = *(context_val + 0xa0);
            else
                fpu_val_7_8 = *(context_val + 0x9c);
        }
        else
            fpu_val_7_8 = *(context_val + 0x98);

        float item_20_2 = Render_ComputeNormals(*(context_val + 0x6c)) * fpu_val_7_8;
        WorldObject_CommitTransform(Level_StartMission_4(), context_val, context_val + 0x168, item_20_2);
        *(source_val[1] + 0xc) = 0xbf800000;
        *(source_val[1] + 0x10) = 0xc0000000;
        *source_val[1] = 0;
        *(source_val[1] + 4) = 0;
        *(source_val[1] + 8) = 0;
        memcpy(context_val + 0x70, context_val + 0x18c, 0x28);
        Script_ParseEnumReal32_28(context_val, *(context_val + 0x1b4));
        Script_CallNativeHandler_16(context_val);
        *(context_val + 0x720) = *(context_val + 0x740);
        *(context_val + 0x730) = *(context_val + 0x740);
        *(context_val + 0x724) = 0;
        *(context_val + 0x728) = 0;
        *(context_val + 0x72c) = 0;
        *(context_val + 0x734) = 0;
        *(context_val + 0x738) = 0;
        *(context_val + 0x73c) = 0;
        Script_ParseEnumInt32_17(context_val);
        CarGun_ConstructPath(context_val);
        long double fpu_val_7_17 = *(context_val + 0x78) * *(context_val + 0x188) + *(context_val + 0x74) * *(context_val + 0x184)
            + *(context_val + 0x180) * *(context_val + 0x70);
        void* item_c = fpu_val_7_17;
        long double fpu_val_7_21 = *(context_val + 0x84) * *(context_val + 0x188) + *(context_val + 0x80) * *(context_val + 0x184)
            + *(context_val + 0x7c) * *(context_val + 0x180);
        float item_8_1 = fpu_val_7_21;
        long double fpu_val_7_25 = *(context_val + 0x90) * *(context_val + 0x188) + *(context_val + 0x8c) * *(context_val + 0x184)
            + *(context_val + 0x88) * *(context_val + 0x180);
        float item_4_1 = fpu_val_7_25;
        *(context_val + 0x108) = item_c;
        *(context_val + 0x10c) = item_8_1;
        *(context_val + 0x110) = item_4_1;
        SoundSys_InitSoundSys_17(context_val + 0xf0);
        void* data_8 = *(context_val + 0xe8);

        if (data_8)
        {
            float* item_8_2 = context_val + 0x70;
            item_c = context_val + 0x20;
            uint32_t item_4_2 = context_val;
            int32_t* i_1 = *(data_8 + 8);

            if (*i_1)
            {
                int32_t* i = i_1;

                if (i)
                {
                    int32_t entity_7 = g_afa7e0;

                    do
                    {
                        int32_t* temp_5 = *i;
                        void* data_12;

                        if (!temp_5)
                            data_12 = nullptr;
                        else
                        {
                            int32_t data_9 = *temp_5;
                            int32_t data_10 = -(data_9);
                            data_12 = (data_10 - data_10) & temp_5;
                        }

                        *((entity_7 << 2) + &g_afa6e0) = data_12;
                        g_afa7e0 = entity_7 + 1;
                        uint32_t data_14 = MagicObj_GetEventId();
                        int32_t entity_9 = 0;
                        entity_9 = i[7];
                        int32_t data_18 = *(((data_14 * 0x180 + entity_9) << 2) + &g_a96ae0);

                        if (data_18)
                            data_18(i, &item_c);

                        entity_7 = g_afa7e0 - 1;
                        g_afa7e0 = entity_7;
                        i = *((entity_7 << 2) + &g_afa6e0);
                    } while (i);
                }
            }
        }

        source_val = param_2;
    }

    int32_t result = *source_val;

    if (result <= 0)
        return result;

    VehicleChild_Dispatch(context_val);
    return Vehicle_DeployGear_2(context_val);
}
