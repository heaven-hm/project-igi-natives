// IGI native provenance: Script_FormatString_28 - 0x004FC0E0 - CFG score 84.4% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004FC0E0-Script_FormatString_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_FormatString_28.h"
float* Script_FormatString_28(float context, float param_2, float param_3, float param_4, float param_5, int32_t param_6, double* param_7)

{
    float item_28;
    memcpy(&item_28, context + 0x70, 0x28);
    float item_60 = param_5;
    double item_40;
    memcpy(&item_40, context + 0x20, 0x18);
    Script_EvaluateCondition_28(context, param_2, param_3, param_4);
    int16_t data_2;
    data_2 = *(context + 0x6d8);

    if (data_2)
    {
        double* item_60_1 = param_7;
        int32_t item_64_1 = param_6;
        float item_68_1 = param_5;
        float item_74_1 = context;
        Body_ResolveCollision(param_2, param_4);
    }

    data_2 = *(context + 0x6d9);

    if (data_2)
    {
        int32_t source_3 = *(context + 0x10c);
        int32_t dest_2 = *(context + 0x110);
        *(context + 0x108) = *(context + 0x108);
        int32_t item_44_1 = dest_2;
        *(context + 0x10c) = source_3;
        *(context + 0x110) = 0;
        SoundSys_InitSoundSys_17(context + 0xf0);
    }

    long double fpu7 = *(context + 0xf8);
    long double f0 = 40.9599991f;
    fpu7 - f0;
    data_2 = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&data_2 + 1) & 0x41))
    {
        item_40 = *(context + 0x108) + item_40;
        double item_38;
        double item_38_1 = *(context + 0x10c) + item_38;
        double item_30;
        double item_30_1 = *(context + 0x110) + item_30;
    }

    data_2 = *(context + 0x6d9);

    if (data_2)
    {
        float item_8;
        long double fpu_val_7_11 = item_8 * *(context + 0x7c);
        float item_10;
        long double fpu_val_6_4 = item_10 * *(context + 0x84);
        float item_c;
        *(context + 0x70) = item_8 * *(context + 0x80) - item_c * *(context + 0x84);
        long double fpu_val_7_15 = item_c * *(context + 0x7c);
        long double fpu_val_6_6 = item_10 * *(context + 0x80);
        *(context + 0x74) = -((fpu_val_7_11 - fpu_val_6_4));
        *(context + 0x78) = fpu_val_7_15 - fpu_val_6_6;
        long double fpu_val_7_21 = item_10 * *(context + 0x78);
        long double fpu_val_6_10 = item_8 * *(context + 0x70);
        *(context + 0x7c) = item_c * *(context + 0x78) - item_8 * *(context + 0x74);
        long double fpu_val_7_25 = item_10 * *(context + 0x74);
        long double fpu_val_6_12 = item_c * *(context + 0x70);
        *(context + 0x80) = -((fpu_val_7_21 - fpu_val_6_10));
        *(context + 0x88) = item_10;
        *(context + 0x84) = fpu_val_7_25 - fpu_val_6_12;
        *(context + 0x8c) = item_c;
        *(context + 0x90) = item_8;
    }

    long double fpu_val_7_27 = *(context + 0x9c);
    long double fpu_val_6_13 = *(context + 0xa0);
    fpu_val_6_13 - fpu_val_7_27;
    long double fpu_val_7_28;

    if (!(*(&((fpu_val_6_13 < fpu_val_7_27 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_13, fpu_val_7_27) ? 1 : 0) << 0xa
            | (fpu_val_6_13 == fpu_val_7_27 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_28 = *(context + 0xa0);
    else
        fpu_val_7_28 = *(context + 0x9c);

    long double fpu_val_6_14 = *(context + 0x98);
    fpu_val_6_14 - fpu_val_7_28;
    long double fpu_val_7_30;

    if (*(&((fpu_val_6_14 < fpu_val_7_28 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_14, fpu_val_7_28) ? 1 : 0) << 0xa
        | (fpu_val_6_14 == fpu_val_7_28 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_31 = *(context + 0x9c);
        long double fpu_val_6_15 = *(context + 0xa0);
        fpu_val_6_15 - fpu_val_7_31;

        if (!(*(&((fpu_val_6_15 < fpu_val_7_31 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_15, fpu_val_7_31) ? 1 : 0) << 0xa
                | (fpu_val_6_15 == fpu_val_7_31 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_30 = *(context + 0xa0);
        else
            fpu_val_7_30 = *(context + 0x9c);
    }
    else
        fpu_val_7_30 = *(context + 0x98);

    void* source_4 = param_5;
    WorldObject_CommitTransform(source_4, context, &item_40, Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_30);

    if (!Script_ParseEnumInt32_29(context, source_4, param_6, param_7))
    {
        long double fpu_val_7_34 = *(context + 0x9c);
        long double fpu_val_6_16 = *(context + 0xa0);
        fpu_val_6_16 - fpu_val_7_34;
        long double fpu_val_7_35;

        if (!(*(&((fpu_val_6_16 < fpu_val_7_34 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_16, fpu_val_7_34) ? 1 : 0) << 0xa
                | (fpu_val_6_16 == fpu_val_7_34 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_35 = *(context + 0xa0);
        else
            fpu_val_7_35 = *(context + 0x9c);

        long double fpu_val_6_17 = *(context + 0x98);
        fpu_val_6_17 - fpu_val_7_35;
        long double fpu_val_7_37;

        if (*(&((fpu_val_6_17 < fpu_val_7_35 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_17, fpu_val_7_35) ? 1 : 0) << 0xa
            | (fpu_val_6_17 == fpu_val_7_35 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_38 = *(context + 0x9c);
            long double fpu_val_6_18 = *(context + 0xa0);
            fpu_val_6_18 - fpu_val_7_38;

            if (!(*(&((fpu_val_6_18 < fpu_val_7_38 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_18, fpu_val_7_38) ? 1 : 0) << 0xa
                    | (fpu_val_6_18 == fpu_val_7_38 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_37 = *(context + 0xa0);
            else
                fpu_val_7_37 = *(context + 0x9c);
        }
        else
            fpu_val_7_37 = *(context + 0x98);

        WorldObject_CommitTransform(source_4, context, context + 0x6c0, Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_37);
        memcpy(context + 0x70, context + 0x694, 0x28);
    }

    *(context + 0x708) = *(context + 0x20) - *(context + 0x6c0);
    *(context + 0x710) = *(context + 0x28) - *(context + 0x6c8);
    *(context + 0x718) = *(context + 0x30) - *(context + 0x6d0);
    int32_t item_24 = *(context + 0x6a0);
    int32_t data_17 = *(context + 0x698);
    item_28 = *(context + 0x694);
    int32_t item_1c = data_17;
    int32_t item_20 = *(context + 0x6ac);
    int32_t item_14 = *(context + 0x6b0);
    int32_t item_18 = *(context + 0x6a4);
    long double fpu_val_7_47 = *(context + 0x78);
    int32_t item_c_1 = *(context + 0x6a8);
    int32_t item_10_1 = *(context + 0x69c);
    int32_t item_4 = *(context + 0x6b8);
    int32_t item_8_1 = *(context + 0x6b4);
    memcpy(context + 0x6dc, &item_28, 0x28);
    item_28 = fpu_val_7_47 * *(context + 0x6f4) + *(context + 0x70) * *(context + 0x6dc)
        + *(context + 0x74) * *(context + 0x6e8);
    long double fpu_val_7_54 = *(context + 0x78) * *(context + 0x6f8) + *(context + 0x6e0) * *(context + 0x70)
        + *(context + 0x74) * *(context + 0x6ec);
    float item_24_1 = fpu_val_7_54;
    long double fpu_val_7_58 = *(context + 0x6f0) * *(context + 0x74) + *(context + 0x6fc) * *(context + 0x78)
        + *(context + 0x70) * *(context + 0x6e4);
    float item_20_1 = fpu_val_7_58;
    long double fpu_val_7_62 = *(context + 0x7c) * *(context + 0x6dc) + *(context + 0x6f4) * *(context + 0x84)
        + *(context + 0x80) * *(context + 0x6e8);
    float item_1c_1 = fpu_val_7_62;
    int32_t item_4_1 = *(context + 0x700) + *(context + 0x94) + 1;
    long double fpu_val_7_66 = *(context + 0x84) * *(context + 0x6f8) + *(context + 0x80) * *(context + 0x6ec)
        + *(context + 0x7c) * *(context + 0x6e0);
    float item_18_1 = fpu_val_7_66;
    long double fpu_val_7_70 = *(context + 0x6fc) * *(context + 0x84) + *(context + 0x6f0) * *(context + 0x80)
        + *(context + 0x7c) * *(context + 0x6e4);
    float item_14_1 = fpu_val_7_70;
    long double fpu_val_7_74 = *(context + 0x6e8) * *(context + 0x8c) + *(context + 0x88) * *(context + 0x6dc)
        + *(context + 0x6f4) * *(context + 0x90);
    float item_10_2 = fpu_val_7_74;
    long double fpu_val_7_78 = *(context + 0x90) * *(context + 0x6f8) + *(context + 0x8c) * *(context + 0x6ec)
        + *(context + 0x88) * *(context + 0x6e0);
    float item_c_2 = fpu_val_7_78;
    long double fpu_val_7_82 = *(context + 0x88) * *(context + 0x6e4) + *(context + 0x6fc) * *(context + 0x90)
        + *(context + 0x6f0) * *(context + 0x8c);
    float item_8_2 = fpu_val_7_82;
    memcpy(context + 0x6dc, &item_28, 0x28);
    memcpy(context + 0x6c0, context + 0x20, 0x18);
    memcpy(context + 0x694, context + 0x70, 0x28);
    return context + 0x6dc;
}
