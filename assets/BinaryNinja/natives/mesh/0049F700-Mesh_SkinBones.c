// Original IGI.EXE function: Mesh_SkinBones (VA 0x0049F700; static CFG gate PASS, CFG score 0.939).
#include "Mesh_SkinBones.h"
int32_t* Mesh_SkinBones(int32_t* context)

{
    int32_t* result = context;
    float flagP = *result;
    float item_1bc = flagP;
    int32_t source_val = *(flagP + 0x74);
    int32_t item_1cc = source_val;

    if (source_val)
    {
        uint32_t item_1d0;
        result = Render_DrawLightmapMesh(flagP, &item_1d0);

        if (!result)
        {
            int32_t context_1 = DynObj_ParseConfigFile_16(flagP);
            result = *(flagP + 0xd4);

            if (!result)
            {
                context_1 = 0;
            label_49f760:
                void item_a8;

                if (!result)
                {
                    memcpy(&item_a8, &g_bcaae0, 0xa8);
                    void item_190;
                    memcpy(&item_190, &item_a8, 0xa8);
                    float item_150 = (&g_b81700)[*(flagP + 0xd4)];
                    float item_14c_1 =
                        g_bcabc4 * (&g_b81700)[*(flagP + 0xd4)] / (Display_ClearSurfaces_4() * g_bcabc0);
                    int32_t item_130_1 = 0;
                    int32_t* item_1e8_2 = &item_190;
                    float item_144_1 = Display_ClearSurfaces_4() * g_bcabc8 / item_150;
                    Transcontext_SetActiveTransContext(item_1e8_2);
                    source_val = item_1cc;
                }

                void* data_2 = *(source_val + (context_1 << 2));
                void* source_1 = *(*(data_2 + 0xc) + 0xc);
                float item_1c8;
                int32_t* item_1e8_3 = &item_1c8;
                item_1c8 = *(flagP + 0x20) - g_bcab08;
                float item_1c4_1 = *(flagP + 0x28) - g_bcab10;
                long double fpu_val_7_16 = *(flagP + 0x30) - g_bcab18;
                float item_1b8;
                int32_t* item_1ec_1 = &item_1b8;
                void item_e8;
                int32_t* item_1f0_1 = &item_e8;
                int32_t item_194_1 = 0;
                item_1c8 = g_bcabec * item_1c8;
                float item_1c4_2 = g_bcabec * item_1c4_1;
                float item_1c0_1 = g_bcabec * fpu_val_7_16;
                long double fpu_val_7_18 = g_bcabec;
                item_1b8 = fpu_val_7_18;
                long double fpu_val_6_7 = 0.0f;
                float item_1b4_1 = fpu_val_6_7;
                float item_1b0_1 = fpu_val_6_7;
                float item_1ac_1 = fpu_val_6_7;
                float item_1a8_1 = fpu_val_7_18;
                float item_1a4_1 = fpu_val_6_7;
                float item_1a0_1 = fpu_val_6_7;
                float item_19c_1 = fpu_val_6_7;
                float item_198_1 = fpu_val_7_18;
                Display_SetGammaRamp_7(item_1f0_1, item_1ec_1, item_1e8_3);
                int32_t* data_3 = g_5ca114;
                (*(*data_3 + 0x2c))(data_3, 1, &item_e8);
                Display_CreateSurface_18(flagP + 0x20, *(source_1 + 0x3c));

                if (*(source_1 + 0x20) == 1)
                {
                    int32_t* dest_2 = *(source_1 + 0x24);
                    void* source_2 = dest_2[7];
                    int32_t data_6 = Bone_PaletteSkinner(dest_2, item_1cc, flagP + 0x68, context_1);
                    int32_t entity_3 = g_7205b0;
                    void* data_7 = g_bcade8;

                    if (*(data_7 + 4) != entity_3)
                    {
                        *(data_7 + 4) = entity_3;
                        (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
                    }

                    void* data_9 = g_bcad7c;
                    int32_t entity_5 = g_7ac09c;

                    if (*(data_9 + 4) != entity_5)
                    {
                        *(data_9 + 4) = entity_5;
                        (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
                    }

                    void* data_11 = g_bcadac;
                    int32_t entity_6 = g_7234b8;

                    if (*(data_11 + 4) != entity_6)
                    {
                        *(data_11 + 4) = entity_6;
                        (*(g_bcadac + (g_7234b8 << 2) + 0x14))(0);
                    }

                    uint32_t data_15 = item_1d0;
                    int32_t entity_8 = g_bcade0;

                    if (!data_15)
                        entity_8 = g_bcacec;

                    void* temp_6 = g_bcadc4;

                    if (*(temp_6 + 4) != entity_8)
                    {
                        int32_t data_12 = g_bcade0;

                        if (!data_15)
                            data_12 = g_bcacec;

                        *(temp_6 + 4) = data_12;
                        int32_t data_14 = g_bcade0;

                        if (!item_1d0)
                            data_14 = g_bcacec;

                        (*(g_bcadc4 + (data_14 << 2) + 0x14))(0);
                    }

                    while (true)
                    {
                        int16_t data_16 = *(source_2 + 0x10);

                        if (data_16 == 0xffff)
                        {
                            int32_t* data_22 = g_5ca114;
                            (*(*data_22 + 0x94))(data_22, 0, 1, 3);
                            int32_t* data_23 = g_5ca114;
                            (*(*data_23 + 0x8c))(data_23, 0, 0);
                            int32_t temp_16 = 0;
                            temp_16 = *(source_2 + 0xc);
                            int32_t* data_24 = g_5ca114;
                            int32_t temp_18 = 0;
                            temp_18 = *(source_2 + 0x14);
                            int32_t temp_19 = 0;
                            temp_19 = *(source_2 + 0x12);
                            (*(*data_24 + 0x80))(data_24, *dest_2, g_bcad90, temp_19 + data_6,
                                temp_18, source_2 + 0x1c, temp_16, 0);
                            int32_t* data_25 = g_5ca114;
                            (*(*data_25 + 0x94))(data_25, 0, 1, 4);
                        }
                        else
                        {
                            int32_t* entity_10 = g_5ca114;
                            (*(*entity_10 + 0x8c))(entity_10, 0,
                                *(*(*(data_2 + 0x10) + (data_16 << 2)) + 0x20));
                            int32_t temp_8 = 0;
                            temp_8 = *(source_2 + 0xc);
                            int32_t* data_20 = g_5ca114;
                            int32_t temp_10 = 0;
                            temp_10 = *(source_2 + 0x14);
                            int32_t temp_11 = 0;
                            temp_11 = *(source_2 + 0x12);
                            (*(*data_20 + 0x80))(data_20, *dest_2, g_bcad90, temp_11 + data_6,
                                temp_10, source_2 + 0x1c, temp_8, 0);
                            flagP = item_1bc;
                        }

                        int16_t data_26 = *(source_2 + 0xe);

                        if (data_26 == 0xffff)
                            break;

                        source_2 = source_2 + data_26 + 0x1c;
                    }
                }

                result = *(flagP + 0xd4);

                if (!result)
                    return Transcontext_SetActiveTransContext(&item_a8);
            }
            else if (context_1 != 0xffffffff)
                goto label_49f760;
        }
    }

    return result;
}
