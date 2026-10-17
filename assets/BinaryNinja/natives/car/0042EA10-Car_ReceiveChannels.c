// IGI native provenance: Car_ReceiveChannels - 0x0042EA10 - CFG score 96.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042EA10-Car_ReceiveChannels.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Car_ReceiveChannels.h"
int32_t* Car_ReceiveChannels(void* context, float param_2)

{
    int32_t* context_val = param_2;
    void* data_val = context_val[1];

    if (*(data_val + 4) != 0xbf800000)
        *(context + 0x730) = *(data_val + 4);

    *(context + 0x73c) = *context_val[1];
    long double fpu_val_7_3 = *(context_val[1] + 0xc);
    long double f0 = -1.0f;
    fpu_val_7_3 - f0;
    char data_3;

    data_3 = *(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe) + 1) & 0x40 ? 0 : 1;

    *(context + 0x744) = data_3;

    if (*context_val)
    {
        VehicleChild_Dispatch(context);
        *(context + 0x2ecc) = 1;
        return Car_Tick(context);
    }

    long double fpu_val_7_4 = *(context + 0x9c);
    long double fpu_val_6_1 = *(context + 0xa0);
    fpu_val_6_1 - fpu_val_7_4;
    long double fpu_val_7_5;

    if (!(*(&((fpu_val_6_1 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_4) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_5 = *(context + 0xa0);
    else
        fpu_val_7_5 = *(context + 0x9c);

    long double fpu_val_6_2 = *(context + 0x98);
    fpu_val_6_2 - fpu_val_7_5;
    long double fpu_val_7_7;

    if (*(&((fpu_val_6_2 < fpu_val_7_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_5) ? 1 : 0) << 0xa
        | (fpu_val_6_2 == fpu_val_7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_8 = *(context + 0x9c);
        long double fpu_val_6_3 = *(context + 0xa0);
        fpu_val_6_3 - fpu_val_7_8;

        if (!(*(&((fpu_val_6_3 < fpu_val_7_8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, fpu_val_7_8) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == fpu_val_7_8 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_7 = *(context + 0xa0);
        else
            fpu_val_7_7 = *(context + 0x9c);
    }
    else
        fpu_val_7_7 = *(context + 0x98);

    float item_20_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_7;
    WorldObject_CommitTransform(Level_StartMission_4(), context, context + 0x168, item_20_1);
    memcpy(context + 0x70, context + 0x18c, 0x28);
    *(context_val[1] + 4) = 0xbf800000;
    *(context_val[1] + 8) = 0xc0000000;
    Script_ParseEnumReal32_28(context, *(context + 0x1b4));
    Script_CallNativeHandler_16(context);
    Menu_DrawWidget_22(context);
    int32_t* i_1 = *(context + 0xe8);
    *(context + 0x720) = *(context + 0x740);
    *(context + 0x730) = *(context + 0x740);
    *(context + 0x91c) = 0;
    *(context + 0x2ed5) = 0;
    *(context + 0x72c) = 0;
    *(context + 0x73c) = 0;

    if (i_1)
    {
        void* item_4_1 = context;
        void* item_c = context + 0x20;
        void* item_8_1 = context + 0x70;
        i_1 = i_1[2];

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t entity_4 = g_afa7e0;
                int32_t data_16;

                do
                {
                    int32_t* temp_3 = *i;
                    void* data_12;

                    if (!temp_3)
                        data_12 = nullptr;
                    else
                    {
                        int32_t data_9 = *temp_3;
                        int32_t data_10 = -(data_9);
                        data_12 = (data_10 - data_10) & temp_3;
                    }

                    *((entity_4 << 2) + &g_afa6e0) = data_12;
                    g_afa7e0 = entity_4 + 1;
                    uint32_t data_14 = MagicObj_GetEventId();
                    int32_t data_15 = 0;
                    data_15 = i[7];
                    data_16 = *(((data_14 * 0x180 + data_15) << 2) + &g_a96ae0);

                    if (data_16)
                        data_16 = data_16(i, &item_c);

                    entity_4 = g_afa7e0 - 1;
                    g_afa7e0 = entity_4;
                    i = *((entity_4 << 2) + &g_afa6e0);
                } while (i);

                return data_16;
            }
        }
    }

    return i_1;
}
