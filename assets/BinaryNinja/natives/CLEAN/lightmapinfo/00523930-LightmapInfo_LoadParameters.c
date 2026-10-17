// IGI native provenance: LightmapInfo_LoadParameters - 0x00523930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00523930-LightmapInfo_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LightmapInfo_LoadParameters.h"
int32_t LightmapInfo_LoadParameters(void* context)

{
    void* source_val = context;
    int32_t i_1 = 0;
    void* context_val = *(source_val + 0x14);
    int32_t dest_val = 0;
    bool flag_0 = *(source_val + 0xcc);
    *(source_val + 0x8c) = 0x3f800000;
    context = nullptr;
    int32_t item_18 = 0;

    if (!flag_0 && *(source_val + 0x98) != 0x3f800000)
        dest_val = 1;

    if (*(source_val + 0x70) || *(source_val + 0x6f) || *(source_val + 0x71))
    {
        int32_t* data_2 = *(source_val + 0x88);
        item_18 = 1;

        if (data_2)
        {
            int32_t i_5 = *data_2;

            if (i_5 > 0)
            {
                int32_t* entity_1 = &data_2[6];
                int32_t i;

                do
                {
                    void* data_3 = *entity_1;

                    if (data_3 && !*(data_3 + 0x38))
                        context = 1;

                    entity_1 = &entity_1[9];
                    i = i_5;
                    i_5 -= 1;
                } while (i != 1);
            }
        }
    }

    *(source_val + 0xcc) = 0;
    void* data_5 = context | dest_val;
    int32_t item_8 = *(source_val + 0x88);
    uint32_t data_8 = DynObj_InsertHashItem_16();
    int32_t temp_1 = 0;
    temp_1 = *(context_val + 0x1c);
    (*(((data_8 * 0x180 + temp_1) << 2) + &g_a96ae0))(context_val, &item_8);
    int32_t item_4;
    long double fpu_val_7_1;
    long double f0_1;

    if (item_4)
    {
        fpu_val_7_1 = *(source_val + 0x98);
        f0_1 = *(source_val + 0x8c);
        fpu_val_7_1 - f0_1;
    }

    if (!item_4 || !(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1)
        & 0x40) || data_5 || *(source_val + 0xdc))
    {
        int32_t* dest_1 = *(source_val + 0x88);

        if (dest_1 && *dest_1 > 0)
        {
            int32_t context_1 = 0;

            do
            {
                void* data_12 = *(context_1 + dest_1 + 0x18);

                if (data_12)
                {
                    Light_SampleLightmap_2(data_12);
                    *(context_1 + dest_1 + 0x18) = 0;
                }

                dest_1 = *(source_val + 0x88);
                i_1 += 1;
                context_1 += 0x24;
            } while (i_1 < *dest_1);
        }

        int32_t* data_13 = *(source_val + 0xc8);

        if (data_13)
        {
            Light_SetLightColor_2(data_13);
            *(source_val + 0xc8) = 0;
        }

        int32_t item_14 = *(source_val + 0x88);

        if (FX_FireBallUpdate_25())
        {
            uint32_t data_16 = DynObj_RegisterSymbol_16();
            int32_t entity_5 = 0;
            entity_5 = *(context_val + 0x1c);
            (*(((data_16 * 0x180 + entity_5) << 2) + &g_a96ae0))(context_val, &item_14);
        }

        int32_t data_21 = item_14;
        *(source_val + 0x88) = data_21;

        if (data_21)
        {
            *(source_val + 0xa8) = 0;
            *(source_val + 0xac) = 0;
            g_a83b4c = 0;
            g_a839f4 = 0;
            int32_t* dest_2 = *(source_val + 0x88);
            int32_t i_2 = 0;
            int32_t i_4 = 0;

            if (*dest_2 > 0)
            {
                int32_t flagP = 0;

                do
                {
                    int32_t data_25;

                    if (data_5 || *(source_val + 0xdc) || item_18)
                        data_25 = 1;
                    else
                        data_25 = 0;

                    int32_t entity_6 = *(dest_2 + flagP + 0x30);
                    int32_t item_2c_4 = *(source_val + 0x94);
                    int32_t item_30_2 = item_18;
                    int32_t item_40_1 = entity_6;
                    float item_40_2 = (1 << (entity_6 & 0x1f)) * *(source_val + 0x8c) * 4096.0f;
                    int32_t* data_28 =
                        Light_RenderLensflare_3(*(dest_2 + flagP + 0x1c), entity_6, source_val + 0x78, i_2, data_25);
                    int32_t j = 0;
                    *(dest_2 + flagP + 0x18) = data_28;
                    *(dest_2 + flagP + 0x38) = 0;

                    if (data_28 && data_28[0xb] > 0)
                    {
                        int32_t* entity_8 = data_28;
                        int32_t data_29 = 0;

                        do
                        {
                            *(source_val + 0xac) += *(data_29 + entity_8 + 0x66) * *(data_29 + entity_8 + 0x64);
                            void* entity_13 = *(dest_2 + flagP + 0x18) + data_29;
                            data_29 += 0x2c;
                            j += 1;
                            *(source_val + 0xa8) += *(entity_13 + 0x66) * *(entity_13 + 0x64);
                            entity_8 = *(dest_2 + flagP + 0x18);
                        } while (j < entity_8[0xb]);

                        i_2 = i_4;
                    }

                    dest_2 = *(source_val + 0x88);
                    i_2 += 1;
                    flagP += 0x24;
                    i_4 = i_2;
                } while (i_2 < *dest_2);
            }

            int32_t i_3 = 0;
            *(source_val + 0xc0) = g_a83b4c;
            *(source_val + 0xc4) = g_a839f4;
            int32_t* data_31 = *(source_val + 0x88);

            if (*data_31 > 0)
            {
                int32_t flagP1 = 0;

                do
                {
                    if (data_31 + flagP1 + 0x18)
                    {
                        void* dest_3 = *(data_31 + flagP1 + 0x20);
                        uint32_t data_34 = DynObj_LookupHashItem_16();
                        int32_t temp_6 = 0;
                        temp_6 = *(dest_3 + 0x1c);
                        (*(((data_34 * 0x180 + temp_6) << 2) + &g_a96ae0))(dest_3, 0);
                    }

                    data_31 = *(source_val + 0x88);
                    i_3 += 1;
                    flagP1 += 0x24;
                } while (i_3 < *data_31);
            }

            int32_t item_2c_5 = *(source_val + 0x88);
        }
    }

    int32_t result = *(source_val + 0x88);
    *(source_val + 0x98) = *(source_val + 0x8c);
    *(source_val + 0xdc) = 0;

    if (result)
    {
        result = *(source_val + 0x6f);

        if (result)
        {
        label_523c91:
            *(source_val + 0xbc) = Light_ApplyLightmap_2(*(source_val + 0xa4));
            int32_t* data_38 = *(source_val + 0xc8);

            if (data_38)
            {
                Light_SetLightColor_2(data_38);
                *(source_val + 0xc8) = 0;
            }

            void* item_2c_8 = source_val;
            *(source_val + 0xc8) = 0;
            *(source_val + 0xb0) = 0;
            result = Light_UpdateGlobalLight_2(*(source_val + 0xbc));
            *(source_val + 0xbc) = 0;
        }
        else
        {
            result = *(source_val + 0x70);

            if (result)
                goto label_523c91;
        }

        result = *(source_val + 0x71);

        if (result)
        {
            int32_t item_2c_10 = *(source_val + 0xb4);
            void* item_30_4 = source_val;
        }
    }

    return result;
}
