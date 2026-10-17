// IGI native provenance: Display_SyncVSync_20 - 0x0049EC70 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049EC70-Display_SyncVSync_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_20.h"
int32_t* Display_SyncVSync_20(double* context)

{
    void* source_val = context[0xa];
    Render_DrawLightmapMesh_3(source_val, context[0xc]);
    Render_ClipMesh_2(source_val);
    int32_t* entity_val = *(context + 0x54);
    void* data_1 = g_bcade8;
    void* flagP = context[0xb];
    int32_t entity_1 = g_7205b0;

    if (*(data_1 + 4) != entity_1)
    {
        *(data_1 + 4) = entity_1;
        (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
    }

    void* entity_2 = g_bcad7c;
    int32_t data_3 = g_7ac09c;

    if (*(entity_2 + 4) != data_3)
    {
        *(entity_2 + 4) = data_3;
        (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
    }

    void* data_4 = g_bcadac;
    int32_t entity_4 = g_7234b8;

    if (*(data_4 + 4) != entity_4)
    {
        *(data_4 + 4) = entity_4;
        (*(g_bcadac + (g_7234b8 << 2) + 0x14))(0);
    }

    void* data_6 = g_bcadc4;
    int32_t entity_6 = g_bcacec;

    if (*(data_6 + 4) != entity_6)
    {
        *(data_6 + 4) = entity_6;
        (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(0);
    }

    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    int32_t* data_10 = g_5ca114;
    int32_t entity_8 = *data_10;

    if (!(*(flagP + 0x18) & 1))
    {
        (*(entity_8 + 0x50))(data_10, 0x89, 1);
        int32_t* data_16 = g_5ca114;
        (*(*data_16 + 0x94))(data_16, 0, 1, 4);
        int32_t* data_17 = g_5ca114;
        (*(*data_17 + 0x50))(data_17, 0x1b, 1);
        int32_t* data_18 = g_5ca114;
        (*(*data_18 + 0x50))(data_18, 0x13, 5);
        int32_t* data_19 = g_5ca114;
        (*(*data_19 + 0x50))(data_19, 0x14, 6);
        void* entity_13 = context[0xa];
        void* data_20 = *(*(entity_13 + 0xc) + 0xc);
        long double fpu_val_7_4 = context[4] * *(data_20 + 0x38) + *(context + 0x1c) * *(data_20 + 0x34)
            + context[3] * *(data_20 + 0x30);
        long double fpu_val_6_8 = *(context + 0x2c) * *(data_20 + 0x38) + context[5] * *(data_20 + 0x34)
            + *(context + 0x24) * *(data_20 + 0x30);
        float item_1f0_1 = fpu_val_6_8;
        long double fpu_val_6_12 = context[7] * *(data_20 + 0x38) + *(context + 0x34) * *(data_20 + 0x34)
            + context[6] * *(data_20 + 0x30);
        float item_1ec_1 = fpu_val_6_12;
        double item_1a8 = fpu_val_7_4 + *context;
        double item_1a0_1 = item_1f0_1 + context[1];
        double item_198_1 = item_1ec_1 + context[2];
        Display_CreateSurface_18(&item_1a8, *(*(*(entity_13 + 0xc) + 0xc) + 0x3c));
    }
    else
    {
        (*(entity_8 + 0x50))(data_10, 0x89, 0);
        int32_t* data_11 = g_5ca114;
        (*(*data_11 + 0x94))(data_11, 0, 1, 2);
        int32_t* data_12 = g_5ca114;
        (*(*data_12 + 0x50))(data_12, 0x1b, 1);
        int32_t* data_13 = g_5ca114;
        (*(*data_13 + 0x50))(data_13, 0x13, 2);
        int32_t* data_14 = g_5ca114;
        (*(*data_14 + 0x50))(data_14, 0x14, 2);
        int32_t* data_15 = g_5ca114;
        (*(*data_15 + 0x50))(data_15, 0x1c, 0);
    }

    int32_t* data_22 = g_5ca114;
    (*(*data_22 + 0x50))(data_22, 0xf, 1);
    int32_t* data_23 = g_5ca114;
    (*(*data_23 + 0x50))(data_23, 0x18, 1);
    int32_t* data_24 = g_5ca114;
    (*(*data_24 + 0x50))(data_24, 0x19, 5);
    int32_t* data_25 = g_5ca114;
    (*(*data_25 + 0x50))(data_25, 0xe, 0);
    int32_t* data_26 = g_5ca114;
    int32_t temp_14 = 0;
    temp_14 = *(flagP + 0x1b);
    (*(*data_26 + 0x50))(data_26, 0x3c, -((temp_14 + 1)) << 0x18);
    float item_1e0 = context[1] - g_bcab10;
    float item_1dc = context[2] - g_bcab18;
    long double fpu_val_6_18 = g_bcabec * (*context - g_bcab08);
    float item_1d8;
    memcpy(&item_1d8, &context[3], 0x28);
    float item_1e4 = fpu_val_6_18;
    float item_1e0_1 = g_bcabec * item_1e0;
    float item_1dc_1 = g_bcabec * item_1dc;
    long double fpu_val_7_18 = g_bcabec * context[8];
    float item_1f0_2 = g_bcabec * *(context + 0x44);
    float item_1ec_2 = g_bcabec * context[9];
    item_1d8 = item_1d8 * fpu_val_7_18;
    float item_1d4;
    float item_1d4_1 = item_1d4 * item_1f0_2;
    float item_1d0;
    float item_1d0_1 = item_1d0 * item_1ec_2;
    float item_1cc;
    float item_1cc_1 = item_1cc * fpu_val_7_18;
    float item_1c8;
    float item_1c8_1 = item_1c8 * item_1f0_2;
    float item_1c4;
    float item_1c4_1 = item_1c4 * item_1ec_2;
    float item_1c0;
    float item_1c0_1 = item_1c0 * fpu_val_7_18;
    float item_1bc;
    float item_1bc_1 = item_1bc * item_1f0_2;
    float item_1b8;
    float item_1b8_1 = item_1b8 * item_1ec_2;
    void item_e8;
    Display_SetGammaRamp_7(&item_e8, &item_1d8, &item_1e4);
    int32_t* data_27 = g_5ca114;
    (*(*data_27 + 0x2c))(data_27, 1, &item_e8);
    void item_a8;

    if (!*(context + 0x5c))
    {
        long double fpu_val_7_25 = g_b81700 * g_bcabc4;
        float data_29 = g_b81700;
        memcpy(&item_a8, &g_bcaae0, 0xa8);
        float item_1b0_1 = fpu_val_7_25;
        void item_190;
        memcpy(&item_190, &item_a8, 0xa8);
        float item_150 = data_29;
        float item_14c_1 = item_1b0_1 / (Display_ClearSurfaces_4() * g_bcabc0);
        int32_t item_130_1 = 0;
        int32_t* item_208_24 = &item_190;
        float item_144_1 = Display_ClearSurfaces_4() * g_bcabc8 / item_150;
        Transcontext_SetActiveTransContext(item_208_24);
    }

    int16_t data_30 = *(flagP + 0x10);

    if (data_30 == 0xffff)
    {
        int32_t* data_39 = g_5ca114;
        (*(*data_39 + 0x94))(data_39, 0, 1, 3);
        int32_t* data_40 = g_5ca114;
        (*(*data_40 + 0x8c))(data_40, 0, 0);
        int32_t data_41 = 0;
        data_41 = *(flagP + 0xc);
        int32_t source_8 = 0;
        int32_t data_43 = 0;
        data_43 = *(flagP + 0x14);
        int32_t dest_1 = 0;
        dest_1 = *(flagP + 0x12);
        int32_t* entity_22 = g_5ca114;
        source_8 = entity_val[9];
        (*(*entity_22 + 0x80))(entity_22, *entity_val, *entity_val[0xa], source_8 + dest_1, data_43, flagP + 0x1c, data_41, 0);
        int32_t* data_46 = g_5ca114;
        (*(*data_46 + 0x94))(data_46, 0, 1, 4);
    }
    else
    {
        int32_t* entity_19 = g_5ca114;
        (*(*entity_19 + 0x8c))(entity_19, 0, *(*(*(context[0xa] + 0x10) + (data_30 << 2)) + 0x20));
        int32_t data_34 = 0;
        data_34 = *(flagP + 0xc);
        int32_t source_4 = 0;
        int32_t data_36 = 0;
        data_36 = *(flagP + 0x14);
        int32_t dest_val = 0;
        dest_val = *(flagP + 0x12);
        int32_t* entity_20 = g_5ca114;
        source_4 = entity_val[9];
        (*(*entity_20 + 0x80))(entity_20, *entity_val, *entity_val[0xa], source_4 + dest_val, data_36, flagP + 0x1c, data_34, 0);
    }

    if (!*(context + 0x5c))
        Transcontext_SetActiveTransContext(&item_a8);

    return Render_DrawRigidMesh_3(source_val);
}
