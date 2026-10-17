// Original IGI.EXE function: AnimRigidDynCubeObj_Update (VA 0x0052A230; static CFG gate PASS, CFG score 0.857).
#include "AnimRigidDynCubeObj_Update.h"
int32_t AnimRigidDynCubeObj_Update(void* a1, int32_t* a2)

{
    if (!*a2)
    {
        long double x87_r7_1 = *(a1 + 0x9c);
        long double x87_r6_1 = *(a1 + 0xa0);
        x87_r6_1 - x87_r7_1;
        memcpy(a1 + 0x70, a1 + 0x108, 0x28);
        memcpy(a1 + 0x130, a1 + 0x108, 0x28);
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = *(a1 + 0xa0);
        else
            x87_r7_2 = *(a1 + 0x9c);

        long double x87_r6_2 = *(a1 + 0x98);
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = *(a1 + 0x9c);
            long double x87_r6_3 = *(a1 + 0xa0);
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = *(a1 + 0xa0);
            else
                x87_r7_4 = *(a1 + 0x9c);
        }
        else
            x87_r7_4 = *(a1 + 0x98);

        long double x87_r7_7 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_4;
        WorldObject_CommitTransform(*(a1 + 0x68), a1, a1 + 0xf0, x87_r7_7);
    }

    void* valA4 = a2[1];
    long double x87_r7_9 = *(valA4 + 0xc) * 0.0009765625f;
    float v_54 = *(valA4 + 0x10) * 0.0009765625f;
    float v_50 = *(valA4 + 0x14) * 0.0009765625f;
    *(valA4 + 0xc) = *(valA4 + 0x18) + *(valA4 + 0xc);
    void* valA5 = a2[1];
    *(valA5 + 0x10) = *(valA5 + 0x1c) + *(valA5 + 0x10);
    void* valA6 = a2[1];
    *(valA6 + 0x14) = *(valA6 + 0x20) + *(valA6 + 0x14);
    float* valA8 = a2[1];
    float tmpD3 = *(a1 + 0x84);
    float objC4 = *(a1 + 0x90);
    float v_54_2 = *(a1 + 0x80) * valA8[0xa] * 0.0009765625f
        + *(a1 + 0x7c) * valA8[9] * 0.0009765625f + v_54;
    float v_50_2 = *(a1 + 0x8c) * valA8[0xa] * 0.0009765625f
        + *(a1 + 0x88) * valA8[9] * 0.0009765625f + v_50;
    long double x87_r6_39 = *(a1 + 0x78) * valA8[0xb] * 0.0009765625f + x87_r7_9
        + *(a1 + 0x70) * valA8[9] * 0.0009765625f + *(a1 + 0x74) * valA8[0xa] * 0.0009765625f;
    float v_58 = x87_r6_39;
    float v_54_3 = tmpD3 * valA8[0xb] * 0.0009765625f + v_54_2;
    float v_a0_3 = objC4;
    float v_50_3 = objC4 * valA8[0xb] * 0.0009765625f + v_50_2;
    *valA8 = v_58 + *valA8;
    void* valA9 = a2[1];
    *(valA9 + 4) = v_54_3 + *(valA9 + 4);
    void* valA10 = a2[1];
    *(valA10 + 8) = v_50_3 + *(valA10 + 8);
    void* valA11 = a2[1];
    *(valA11 + 0x24) = *(valA11 + 0x30) + *(valA11 + 0x24);
    void* valA12 = a2[1];
    *(valA12 + 0x28) = *(valA12 + 0x34) + *(valA12 + 0x28);
    void* valA13 = a2[1];
    *(valA13 + 0x2c) = *(valA13 + 0x38) + *(valA13 + 0x2c);
    void* valA14 = a2[1];
    *(valA14 + 0x3c) = *(valA14 + 0x48) + *(valA14 + 0x3c);
    void* valA15 = a2[1];
    *(valA15 + 0x40) = *(valA15 + 0x4c) + *(valA15 + 0x40);
    void* valA16 = a2[1];
    *(valA16 + 0x44) = *(valA16 + 0x50) + *(valA16 + 0x44);
    void* valA17 = a2[1];
    float v_a4_2 = objC4;
    float v_a8_2 = objC4;
    float v_80;
    int32_t objC5 = Sys_ReadFileBlock_12(&v_80,
        *(valA17 + 0x3c) * 0.0009765625f * 3.1415926535897944 * 0.000244140625,
        *(valA17 + 0x40) * 0.0009765625f * 3.1415926535897944 * 0.000244140625,
        *(valA17 + 0x44) * 0.0009765625f * 3.1415926535897944 * 0.000244140625);
    float valA19 = *(a2[1] + 0x54);

    if (valA19 <= 0)
        valA19 = nanf;

    void* valA20 = Script_ExecuteLevelScript_4(valA19);
    double v_18;
    long double x87_r7_137;
    float v_7c;
    float v_78;
    float v_74;
    float v_70;
    float v_6c;
    float v_68;
    float v_64;
    float v_60;
    int32_t v_5c;
    float v_40;
    float v_30;

    if (!valA20)
    {
        v_40 = v_68 * *(a1 + 0x78) + v_80 * *(a1 + 0x70) + v_74 * *(a1 + 0x74);
        float v_3c_2 =
            v_64 * *(a1 + 0x78) + v_7c * *(a1 + 0x70) + v_70 * *(a1 + 0x74);
        float v_38_2 =
            v_60 * *(a1 + 0x78) + v_78 * *(a1 + 0x70) + v_6c * *(a1 + 0x74);
        float v_34_2 =
            v_74 * *(a1 + 0x80) + v_68 * *(a1 + 0x84) + v_80 * *(a1 + 0x7c);
        v_30 = v_70 * *(a1 + 0x80) + v_64 * *(a1 + 0x84) + v_7c * *(a1 + 0x7c);
        float v_2c_2 =
            v_6c * *(a1 + 0x80) + v_60 * *(a1 + 0x84) + v_78 * *(a1 + 0x7c);
        float v_28_2 =
            v_68 * *(a1 + 0x90) + v_80 * *(a1 + 0x88) + v_74 * *(a1 + 0x8c);
        float v_24_2 =
            v_64 * *(a1 + 0x90) + v_7c * *(a1 + 0x88) + v_70 * *(a1 + 0x8c);
        int32_t v_1c_2 = *(a1 + 0x94) + v_5c + 1;
        float v_20_2 =
            v_60 * *(a1 + 0x90) + v_78 * *(a1 + 0x88) + v_6c * *(a1 + 0x8c);
        long double x87_r7_175 = v_58 + *(a1 + 0x20);
        memcpy(a1 + 0x70, &v_40, 0x28);
        v_18 = x87_r7_175;
        double v_10_2 = v_54_3 + *(a1 + 0x28);
        x87_r7_137 = v_50_3 + *(a1 + 0x30);
    }
    else
    {
        int16_t valA21 = DynObj_LookupHashItem_5();
        objC5 = *(valA20 + 0x1c);
        float v_8c_1;
        float* valA23;

        if (!TaskType_IsDerivedFrom(objC5, valA21))
        {
            v_8c_1 = valA20 + 0x20;
            valA23 = valA20 + 0x78;
        }
        else
        {
            valA23 = valA20 + 0x70;
            v_8c_1 = valA20 + 0x20;
        }

        v_40 = v_68 * *(a1 + 0x138) + v_80 * *(a1 + 0x130) + v_74 * *(a1 + 0x134);
        float v_3c =
            v_64 * *(a1 + 0x138) + v_7c * *(a1 + 0x130) + v_70 * *(a1 + 0x134);
        float v_38 =
            v_60 * *(a1 + 0x138) + v_78 * *(a1 + 0x130) + v_6c * *(a1 + 0x134);
        float v_34 =
            v_68 * *(a1 + 0x144) + v_80 * *(a1 + 0x13c) + v_74 * *(a1 + 0x140);
        v_30 = v_64 * *(a1 + 0x144) + v_7c * *(a1 + 0x13c) + v_70 * *(a1 + 0x140);
        float v_2c =
            v_60 * *(a1 + 0x144) + v_78 * *(a1 + 0x13c) + v_6c * *(a1 + 0x140);
        float v_28 =
            v_80 * *(a1 + 0x148) + v_74 * *(a1 + 0x14c) + v_68 * *(a1 + 0x150);
        float v_24 =
            v_70 * *(a1 + 0x14c) + v_64 * *(a1 + 0x150) + v_7c * *(a1 + 0x148);
        int32_t v_1c = *(a1 + 0x154) + v_5c + 1;
        float v_20 =
            v_6c * *(a1 + 0x14c) + v_60 * *(a1 + 0x150) + v_78 * *(a1 + 0x148);
        memcpy(a1 + 0x130, &v_40, 0x28);
        v_40 =
            *(a1 + 0x148) * valA23[2] + *(a1 + 0x130) * *valA23 + *(a1 + 0x13c) * valA23[1];
        float v_3c_1 =
            *(a1 + 0x14c) * valA23[2] + *valA23 * *(a1 + 0x134) + valA23[1] * *(a1 + 0x140);
        float v_38_1 =
            *(a1 + 0x150) * valA23[2] + *(a1 + 0x138) * *valA23 + *(a1 + 0x144) * valA23[1];
        float v_34_1 =
            *(a1 + 0x148) * valA23[5] + valA23[3] * *(a1 + 0x130) + valA23[4] * *(a1 + 0x13c);
        v_30 =
            valA23[3] * *(a1 + 0x134) + valA23[5] * *(a1 + 0x14c) + valA23[4] * *(a1 + 0x140);
        float v_2c_1 =
            *(a1 + 0x150) * valA23[5] + valA23[3] * *(a1 + 0x138) + valA23[4] * *(a1 + 0x144);
        int32_t v_1c_1 = valA23[9] + *(a1 + 0x154) + 1;
        float v_28_1 =
            valA23[7] * *(a1 + 0x13c) + *(a1 + 0x148) * valA23[8] + valA23[6] * *(a1 + 0x130);
        float v_24_1 =
            valA23[6] * *(a1 + 0x134) + valA23[7] * *(a1 + 0x140) + *(a1 + 0x14c) * valA23[8];
        float v_20_1 =
            valA23[7] * *(a1 + 0x144) + *(a1 + 0x150) * valA23[8] + valA23[6] * *(a1 + 0x138);
        long double x87_r7_124 = v_58;
        memcpy(a1 + 0x70, &v_40, 0x28);
        float* objC9 = a2[1];
        *objC9 = x87_r7_124 + *objC9;
        void* objC10 = a2[1];
        *(objC10 + 4) = v_54_3 + *(objC10 + 4);
        void* objC11 = a2[1];
        *(objC11 + 8) = v_50_3 + *(objC11 + 8);
        float* flagP1 = a2[1];
        long double x87_r7_130 = *flagP1;
        v_18 = x87_r7_130;
        long double x87_r6_112 = flagP1[1];
        double v_10 = x87_r6_112;
        long double x87_r5_1 = flagP1[2];
        double v_8_1 = x87_r5_1;
        v_58 = valA23[2] * x87_r5_1 + valA23[1] * x87_r6_112 + *valA23 * x87_r7_130;
        v_50_3 = valA23[3] * x87_r7_130 + valA23[5] * x87_r5_1 + valA23[4] * x87_r6_112;
        double v_48_1 = valA23[6] * x87_r7_130 + valA23[8] * x87_r5_1 + valA23[7] * x87_r6_112;
        long double x87_r7_132 = v_58;
        memcpy(&v_18, &v_58, 0x18);
        v_18 = x87_r7_132 + *v_8c_1;
        double v_10_1 = v_10 + *(v_8c_1 + 8);
        x87_r7_137 = v_8_1 + *(v_8c_1 + 0x10);
    }
    double v_8_2 = x87_r7_137;
    long double x87_r7_179 = *(a1 + 0x9c);
    long double x87_r6_150 = *(a1 + 0xa0);
    x87_r6_150 - x87_r7_179;
    long double x87_r7_180;

    if (!(*(&((x87_r6_150 < x87_r7_179 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_150, x87_r7_179) ? 1 : 0) << 0xa
            | (x87_r6_150 == x87_r7_179 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_180 = *(a1 + 0xa0);
    else
        x87_r7_180 = *(a1 + 0x9c);

    long double x87_r6_151 = *(a1 + 0x98);
    x87_r6_151 - x87_r7_180;
    long double x87_r7_182;

    if (*(&((x87_r6_151 < x87_r7_180 ? 1 : 0) << 8
        | (FCMP_UO(x87_r6_151, x87_r7_180) ? 1 : 0) << 0xa
        | (x87_r6_151 == x87_r7_180 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_183 = *(a1 + 0x9c);
        long double x87_r6_152 = *(a1 + 0xa0);
        x87_r6_152 - x87_r7_183;

        if (!(*(&((x87_r6_152 < x87_r7_183 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_152, x87_r7_183) ? 1 : 0) << 0xa
                | (x87_r6_152 == x87_r7_183 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_182 = *(a1 + 0xa0);
        else
            x87_r7_182 = *(a1 + 0x9c);
    }
    else
        x87_r7_182 = *(a1 + 0x98);

    long double x87_r7_185 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_182;
    return WorldObject_CommitTransform(*(a1 + 0x68), a1, &v_18, x87_r7_185);
}
