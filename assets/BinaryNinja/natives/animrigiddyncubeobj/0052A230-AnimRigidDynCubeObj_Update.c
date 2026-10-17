// Original IGI.EXE function: AnimRigidDynCubeObj_Update (VA 0x0052A230; static CFG gate PASS, CFG score 0.857).
#include "AnimRigidDynCubeObj_Update.h"
int32_t AnimRigidDynCubeObj_Update(void* context, int32_t* param_2)

{
    if (!*param_2)
    {
        long double fpu_val_7_1 = *(context + 0x9c);
        long double fpu_val_6_1 = *(context + 0xa0);
        fpu_val_6_1 - fpu_val_7_1;
        memcpy(context + 0x70, context + 0x108, 0x28);
        memcpy(context + 0x130, context + 0x108, 0x28);
        long double fpu_val_7_2;

        if (!(*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_2 = *(context + 0xa0);
        else
            fpu_val_7_2 = *(context + 0x9c);

        long double fpu_val_6_2 = *(context + 0x98);
        fpu_val_6_2 - fpu_val_7_2;
        long double fpu_val_7_4;

        if (*(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_5 = *(context + 0x9c);
            long double fpu_val_6_3 = *(context + 0xa0);
            fpu_val_6_3 - fpu_val_7_5;

            if (!(*(&((fpu_val_6_3 < fpu_val_7_5 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_5) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_5 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_4 = *(context + 0xa0);
            else
                fpu_val_7_4 = *(context + 0x9c);
        }
        else
            fpu_val_7_4 = *(context + 0x98);

        long double fpu_val_7_7 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_4;
        WorldObject_CommitTransform(*(context + 0x68), context, context + 0xf0, fpu_val_7_7);
    }

    void* data_4 = param_2[1];
    long double fpu_val_7_9 = *(data_4 + 0xc) * 0.0009765625f;
    float item_54 = *(data_4 + 0x10) * 0.0009765625f;
    float item_50 = *(data_4 + 0x14) * 0.0009765625f;
    *(data_4 + 0xc) = *(data_4 + 0x18) + *(data_4 + 0xc);
    void* data_5 = param_2[1];
    *(data_5 + 0x10) = *(data_5 + 0x1c) + *(data_5 + 0x10);
    void* data_6 = param_2[1];
    *(data_6 + 0x14) = *(data_6 + 0x20) + *(data_6 + 0x14);
    float* data_8 = param_2[1];
    float temp_3 = *(context + 0x84);
    float entity_4 = *(context + 0x90);
    float item_54_2 = *(context + 0x80) * data_8[0xa] * 0.0009765625f
        + *(context + 0x7c) * data_8[9] * 0.0009765625f + item_54;
    float item_50_2 = *(context + 0x8c) * data_8[0xa] * 0.0009765625f
        + *(context + 0x88) * data_8[9] * 0.0009765625f + item_50;
    long double fpu_val_6_39 = *(context + 0x78) * data_8[0xb] * 0.0009765625f + fpu_val_7_9
        + *(context + 0x70) * data_8[9] * 0.0009765625f + *(context + 0x74) * data_8[0xa] * 0.0009765625f;
    float item_58 = fpu_val_6_39;
    float item_54_3 = temp_3 * data_8[0xb] * 0.0009765625f + item_54_2;
    float item_a0_3 = entity_4;
    float item_50_3 = entity_4 * data_8[0xb] * 0.0009765625f + item_50_2;
    *data_8 = item_58 + *data_8;
    void* data_9 = param_2[1];
    *(data_9 + 4) = item_54_3 + *(data_9 + 4);
    void* data_10 = param_2[1];
    *(data_10 + 8) = item_50_3 + *(data_10 + 8);
    void* data_11 = param_2[1];
    *(data_11 + 0x24) = *(data_11 + 0x30) + *(data_11 + 0x24);
    void* data_12 = param_2[1];
    *(data_12 + 0x28) = *(data_12 + 0x34) + *(data_12 + 0x28);
    void* data_13 = param_2[1];
    *(data_13 + 0x2c) = *(data_13 + 0x38) + *(data_13 + 0x2c);
    void* data_14 = param_2[1];
    *(data_14 + 0x3c) = *(data_14 + 0x48) + *(data_14 + 0x3c);
    void* data_15 = param_2[1];
    *(data_15 + 0x40) = *(data_15 + 0x4c) + *(data_15 + 0x40);
    void* data_16 = param_2[1];
    *(data_16 + 0x44) = *(data_16 + 0x50) + *(data_16 + 0x44);
    void* data_17 = param_2[1];
    float item_a4_2 = entity_4;
    float item_a8_2 = entity_4;
    float item_80;
    int32_t entity_5 = Sys_ReadFileBlock_12(&item_80,
        *(data_17 + 0x3c) * 0.0009765625f * 3.1415926535897944 * 0.000244140625,
        *(data_17 + 0x40) * 0.0009765625f * 3.1415926535897944 * 0.000244140625,
        *(data_17 + 0x44) * 0.0009765625f * 3.1415926535897944 * 0.000244140625);
    float data_19 = *(param_2[1] + 0x54);

    if (data_19 <= 0)
        data_19 = nanf;

    void* data_20 = Script_ExecuteLevelScript_4(data_19);
    double item_18;
    long double fpu_val_7_137;
    float item_7c;
    float item_78;
    float item_74;
    float item_70;
    float item_6c;
    float item_68;
    float item_64;
    float item_60;
    int32_t item_5c;
    float item_40;
    float item_30;

    if (!data_20)
    {
        item_40 = item_68 * *(context + 0x78) + item_80 * *(context + 0x70) + item_74 * *(context + 0x74);
        float item_3c_2 =
            item_64 * *(context + 0x78) + item_7c * *(context + 0x70) + item_70 * *(context + 0x74);
        float item_38_2 =
            item_60 * *(context + 0x78) + item_78 * *(context + 0x70) + item_6c * *(context + 0x74);
        float item_34_2 =
            item_74 * *(context + 0x80) + item_68 * *(context + 0x84) + item_80 * *(context + 0x7c);
        item_30 = item_70 * *(context + 0x80) + item_64 * *(context + 0x84) + item_7c * *(context + 0x7c);
        float item_2c_2 =
            item_6c * *(context + 0x80) + item_60 * *(context + 0x84) + item_78 * *(context + 0x7c);
        float item_28_2 =
            item_68 * *(context + 0x90) + item_80 * *(context + 0x88) + item_74 * *(context + 0x8c);
        float item_24_2 =
            item_64 * *(context + 0x90) + item_7c * *(context + 0x88) + item_70 * *(context + 0x8c);
        int32_t item_1c_2 = *(context + 0x94) + item_5c + 1;
        float item_20_2 =
            item_60 * *(context + 0x90) + item_78 * *(context + 0x88) + item_6c * *(context + 0x8c);
        long double fpu_val_7_175 = item_58 + *(context + 0x20);
        memcpy(context + 0x70, &item_40, 0x28);
        item_18 = fpu_val_7_175;
        double item_10_2 = item_54_3 + *(context + 0x28);
        fpu_val_7_137 = item_50_3 + *(context + 0x30);
    }
    else
    {
        int16_t data_21 = DynObj_LookupHashItem_5();
        entity_5 = *(data_20 + 0x1c);
        float item_8c_1;
        float* data_23;

        if (!TaskType_IsDerivedFrom(entity_5, data_21))
        {
            item_8c_1 = data_20 + 0x20;
            data_23 = data_20 + 0x78;
        }
        else
        {
            data_23 = data_20 + 0x70;
            item_8c_1 = data_20 + 0x20;
        }

        item_40 = item_68 * *(context + 0x138) + item_80 * *(context + 0x130) + item_74 * *(context + 0x134);
        float item_3c =
            item_64 * *(context + 0x138) + item_7c * *(context + 0x130) + item_70 * *(context + 0x134);
        float item_38 =
            item_60 * *(context + 0x138) + item_78 * *(context + 0x130) + item_6c * *(context + 0x134);
        float item_34 =
            item_68 * *(context + 0x144) + item_80 * *(context + 0x13c) + item_74 * *(context + 0x140);
        item_30 = item_64 * *(context + 0x144) + item_7c * *(context + 0x13c) + item_70 * *(context + 0x140);
        float item_2c =
            item_60 * *(context + 0x144) + item_78 * *(context + 0x13c) + item_6c * *(context + 0x140);
        float item_28 =
            item_80 * *(context + 0x148) + item_74 * *(context + 0x14c) + item_68 * *(context + 0x150);
        float item_24 =
            item_70 * *(context + 0x14c) + item_64 * *(context + 0x150) + item_7c * *(context + 0x148);
        int32_t item_1c = *(context + 0x154) + item_5c + 1;
        float item_20 =
            item_6c * *(context + 0x14c) + item_60 * *(context + 0x150) + item_78 * *(context + 0x148);
        memcpy(context + 0x130, &item_40, 0x28);
        item_40 =
            *(context + 0x148) * data_23[2] + *(context + 0x130) * *data_23 + *(context + 0x13c) * data_23[1];
        float item_3c_1 =
            *(context + 0x14c) * data_23[2] + *data_23 * *(context + 0x134) + data_23[1] * *(context + 0x140);
        float item_38_1 =
            *(context + 0x150) * data_23[2] + *(context + 0x138) * *data_23 + *(context + 0x144) * data_23[1];
        float item_34_1 =
            *(context + 0x148) * data_23[5] + data_23[3] * *(context + 0x130) + data_23[4] * *(context + 0x13c);
        item_30 =
            data_23[3] * *(context + 0x134) + data_23[5] * *(context + 0x14c) + data_23[4] * *(context + 0x140);
        float item_2c_1 =
            *(context + 0x150) * data_23[5] + data_23[3] * *(context + 0x138) + data_23[4] * *(context + 0x144);
        int32_t item_1c_1 = data_23[9] + *(context + 0x154) + 1;
        float item_28_1 =
            data_23[7] * *(context + 0x13c) + *(context + 0x148) * data_23[8] + data_23[6] * *(context + 0x130);
        float item_24_1 =
            data_23[6] * *(context + 0x134) + data_23[7] * *(context + 0x140) + *(context + 0x14c) * data_23[8];
        float item_20_1 =
            data_23[7] * *(context + 0x144) + *(context + 0x150) * data_23[8] + data_23[6] * *(context + 0x138);
        long double fpu_val_7_124 = item_58;
        memcpy(context + 0x70, &item_40, 0x28);
        float* entity_9 = param_2[1];
        *entity_9 = fpu_val_7_124 + *entity_9;
        void* entity_10 = param_2[1];
        *(entity_10 + 4) = item_54_3 + *(entity_10 + 4);
        void* entity_11 = param_2[1];
        *(entity_11 + 8) = item_50_3 + *(entity_11 + 8);
        float* flagP1 = param_2[1];
        long double fpu_val_7_130 = *flagP1;
        item_18 = fpu_val_7_130;
        long double fpu_val_6_112 = flagP1[1];
        double item_10 = fpu_val_6_112;
        long double fpu_val_5_1 = flagP1[2];
        double item_8_1 = fpu_val_5_1;
        item_58 = data_23[2] * fpu_val_5_1 + data_23[1] * fpu_val_6_112 + *data_23 * fpu_val_7_130;
        item_50_3 = data_23[3] * fpu_val_7_130 + data_23[5] * fpu_val_5_1 + data_23[4] * fpu_val_6_112;
        double item_48_1 = data_23[6] * fpu_val_7_130 + data_23[8] * fpu_val_5_1 + data_23[7] * fpu_val_6_112;
        long double fpu_val_7_132 = item_58;
        memcpy(&item_18, &item_58, 0x18);
        item_18 = fpu_val_7_132 + *item_8c_1;
        double item_10_1 = item_10 + *(item_8c_1 + 8);
        fpu_val_7_137 = item_8_1 + *(item_8c_1 + 0x10);
    }
    double item_8_2 = fpu_val_7_137;
    long double fpu_val_7_179 = *(context + 0x9c);
    long double fpu_val_6_150 = *(context + 0xa0);
    fpu_val_6_150 - fpu_val_7_179;
    long double fpu_val_7_180;

    if (!(*(&((fpu_val_6_150 < fpu_val_7_179 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_150, fpu_val_7_179) ? 1 : 0) << 0xa
            | (fpu_val_6_150 == fpu_val_7_179 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_180 = *(context + 0xa0);
    else
        fpu_val_7_180 = *(context + 0x9c);

    long double fpu_val_6_151 = *(context + 0x98);
    fpu_val_6_151 - fpu_val_7_180;
    long double fpu_val_7_182;

    if (*(&((fpu_val_6_151 < fpu_val_7_180 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_6_151, fpu_val_7_180) ? 1 : 0) << 0xa
        | (fpu_val_6_151 == fpu_val_7_180 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_183 = *(context + 0x9c);
        long double fpu_val_6_152 = *(context + 0xa0);
        fpu_val_6_152 - fpu_val_7_183;

        if (!(*(&((fpu_val_6_152 < fpu_val_7_183 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_152, fpu_val_7_183) ? 1 : 0) << 0xa
                | (fpu_val_6_152 == fpu_val_7_183 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_182 = *(context + 0xa0);
        else
            fpu_val_7_182 = *(context + 0x9c);
    }
    else
        fpu_val_7_182 = *(context + 0x98);

    long double fpu_val_7_185 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_182;
    return WorldObject_CommitTransform(*(context + 0x68), context, &item_18, fpu_val_7_185);
}
