// IGI native provenance: Plane_ReceiveChannels - 0x004337E0 - CFG score 97.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 004337E0-Plane_ReceiveChannels.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Plane_ReceiveChannels.h"
void* Plane_ReceiveChannels(float context, int32_t* param_2)

{
    int32_t* entity_11 = param_2;
    void* data_val = entity_11[1];

    if (*(data_val + 0xc) != 0xbf800000)
        *(context + 0x730) = *(data_val + 0xc);

    *(context + 0x734) = *entity_11[1];
    *(context + 0x738) = *(entity_11[1] + 4);
    *(context + 0x73c) = *(entity_11[1] + 8);
    void* data_3 = entity_11[1];
    int64_t item_c;

    if (*(data_3 + 0x14) != 0xbf800000)
    {
        char data_4 = *(context + 0x82c);
        item_c = *(data_3 + 0x14);
        *(context + 0x82c) = data_4 ^ item_c;
    }

    void* data_5 = entity_11[1];

    if (*(data_5 + 0x18) != 0xbf800000)
    {
        char temp_2 = *(context + 0x82d);
        item_c = *(data_5 + 0x18);
        *(context + 0x82d) = temp_2 ^ item_c;
    }

    long double fpu_val_7_7 = *(entity_11[1] + 0x1c);
    long double f0 = -1.0f;
    fpu_val_7_7 - f0;
    char data_8;

    data_8 = *(&((fpu_val_7_7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40 ? 0 : 1;

    *(context + 0x744) = data_8;
    long double fpu_val_7_8 = *(entity_11[1] + 0x20);
    long double f1 = -1.0f;
    fpu_val_7_8 - f1;
    char data_11;

    data_11 = *(&((fpu_val_7_8 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_8 == f1 ? 1 : 0) << 0xe) + 1) & 0x40 ? 0 : 1;

    *(context + 0x82e) = data_11;
    void* data_12 = entity_11[1];

    if (*(data_12 + 0x24) != 0xbf800000)
    {
        char data_13 = *(context + 0x82f);
        item_c = *(data_12 + 0x24);
        *(context + 0x82f) = data_13 ^ item_c;
    }

    if (!*entity_11)
    {
        long double fpu_val_7_10 = *(context + 0x9c);
        long double fpu_val_6_1 = *(context + 0xa0);
        fpu_val_6_1 - fpu_val_7_10;
        long double fpu_val_7_11;

        if (!(*(&((fpu_val_6_1 < fpu_val_7_10 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_1, fpu_val_7_10) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_10 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_11 = *(context + 0xa0);
        else
            fpu_val_7_11 = *(context + 0x9c);

        long double fpu_val_6_2 = *(context + 0x98);
        fpu_val_6_2 - fpu_val_7_11;
        long double fpu_val_7_13;

        if (*(&((fpu_val_6_2 < fpu_val_7_11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_11) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_14 = *(context + 0x9c);
            long double fpu_val_6_3 = *(context + 0xa0);
            fpu_val_6_3 - fpu_val_7_14;

            if (!(*(&((fpu_val_6_3 < fpu_val_7_14 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_14) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_14 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_13 = *(context + 0xa0);
            else
                fpu_val_7_13 = *(context + 0x9c);
        }
        else
            fpu_val_7_13 = *(context + 0x98);

        float item_20_2 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_13;
        WorldObject_CommitTransform(Level_StartMission_4(), context, context + 0x168, item_20_2);
        char* temp_5 = *(context + 0x1b4);
        memcpy(context + 0x70, context + 0x18c, 0x28);
        Script_ParseEnumReal32_28(context, temp_5);
        *(context + 0x720) = *(context + 0x740);
        long double fpu_val_7_18 = *(context + 0x740);
        *(context + 0x734) = 0;
        *(context + 0x738) = 0;
        *(context + 0x730) = fpu_val_7_18;
        *(context + 0x724) = 0;
        *(context + 0x728) = 0;
        *(context + 0x72c) = 0;
        *(context + 0x73c) = 0;
        Script_ParseEnumInt32_17(context);
        CarGun_ConstructPath(context);
        Vehicle_UpdateRudder_3(context);
        long double fpu_val_7_19 = *(context + 0x180);
        long double f2_1 = 0.0f;
        fpu_val_7_19 - f2_1;
        void* data_21;
        float entity_4;
        int32_t* temp_6;

        if (!(*(&((fpu_val_7_19 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_19, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_19 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_433a68:
            data_21 = context + 0xf0;
            temp_6 = data_21 + 0x18;
            *(data_21 + 0x18) = *(context + 0x180);
            temp_6[1] = *(context + 0x184);
            entity_4 = *(context + 0x188);
        }
        else
        {
            long double fpu_val_7_20 = *(context + 0x184);
            long double f3_1 = 0.0f;
            fpu_val_7_20 - f3_1;

            if (!(*(&((fpu_val_7_20 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_20, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_20 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_433a68;

            long double fpu_val_7_21 = *(context + 0x188);
            long double f4_1 = 0.0f;
            fpu_val_7_21 - f4_1;

            if (!(*(&((fpu_val_7_21 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_21, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_21 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_433a68;

            data_21 = context + 0xf0;
            temp_6 = data_21 + 0x18;
            long double fpu_val_7_24 = **(*(context + 0x1b4) + 0x2d4) * *(context + 0x720) * 30.3407402f;
            item_c = fpu_val_7_24 * *(context + 0x74);
            int32_t entity_2 = item_c;
            *(&item_c + 4) = fpu_val_7_24 * *(context + 0x80);
            long double fpu_val_7_25 = fpu_val_7_24 * *(context + 0x8c);
            *temp_6 = entity_2;
            temp_6[1] = *(&item_c + 4);
            entity_4 = fpu_val_7_25;
        }

        temp_6[2] = entity_4;
        SoundSys_InitSoundSys_17(data_21);
        void* data_22 = *(context + 0xe8);

        if (data_22)
        {
            *(&item_c + 4) = context + 0x70;
            item_c = context + 0x20;
            float item_4_2 = context;
            int32_t* i = *(data_22 + 8);

            if (*i && i)
            {
                int32_t entity_7 = g_afa7e0;

                do
                {
                    int32_t* temp_8 = *i;
                    void* data_26;

                    if (!temp_8)
                        data_26 = nullptr;
                    else
                    {
                        int32_t data_23 = *temp_8;
                        int32_t data_24 = -(data_23);
                        data_26 = (data_24 - data_24) & temp_8;
                    }

                    *((entity_7 << 2) + &g_afa6e0) = data_26;
                    g_afa7e0 = entity_7 + 1;
                    uint32_t data_28 = MagicObj_GetEventId();
                    int32_t entity_9 = 0;
                    entity_9 = i[7];
                    int32_t data_32 = *(((data_28 * 0x180 + entity_9) << 2) + &g_a96ae0);

                    if (data_32)
                        data_32(i, &item_c);

                    entity_7 = g_afa7e0 - 1;
                    g_afa7e0 = entity_7;
                    i = *((entity_7 << 2) + &g_afa6e0);
                } while (i);
            }
        }

        entity_11 = param_2;
    }

    void* result = *entity_11;

    if (result <= 0)
        return result;

    FUN_00433B50(context);
    return VehicleChild_Dispatch(context);
}
