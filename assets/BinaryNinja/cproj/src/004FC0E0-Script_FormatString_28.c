#include "gi_platform.h"
#include "004FC0E0-Script_FormatString_28.h"
float* Script_FormatString_28(float a1, float a2, float a3, float a4, float a5, int32_t a6, double* a7)

{
    float v_28;
    memcpy(&v_28, a1 + 0x70, 0x28);
    float v_60 = a5;
    double v_40;
    memcpy(&v_40, a1 + 0x20, 0x18);
    Script_EvaluateCondition_28(a1, a2, a3, a4);
    int16_t valA2;
    valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x6d8));

    if (valA2)
    {
        double* v_60_1 = a7;
        int32_t v_64_1 = a6;
        float v_68_1 = a5;
        float v_74_1 = a1;
        Body_ResolveCollision(a2, a4);
    }

    valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x6d9));

    if (valA2)
    {
        int32_t srcS3 = (*(int32_t*)(uintptr_t)(a1 + 0x10c));
        int32_t dstD2 = (*(int32_t*)(uintptr_t)(a1 + 0x110));
        (*(int32_t*)(uintptr_t)(a1 + 0x108)) = (*(int32_t*)(uintptr_t)(a1 + 0x108));
        int32_t v_44_1 = dstD2;
        (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = srcS3;
        (*(int32_t*)(uintptr_t)(a1 + 0x110)) = 0;
        SoundSys_InitSoundSys_17(a1 + 0xf0);
    }

    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));
    long double f0 = 40.9599991.0f;
    fpu7 - f0;
    valA2 = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&valA2 + 1) & 0x41))
    {
        v_40 = (*(int32_t*)(uintptr_t)(a1 + 0x108)) + v_40;
        double v_38;
        double v_38_1 = (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + v_38;
        double v_30;
        double v_30_1 = (*(int32_t*)(uintptr_t)(a1 + 0x110)) + v_30;
    }

    valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x6d9));

    if (valA2)
    {
        float v_8;
        long double x87_r7_11 = v_8 * (*(int32_t*)(uintptr_t)(a1 + 0x7c));
        float v_10;
        long double x87_r6_4 = v_10 * (*(int32_t*)(uintptr_t)(a1 + 0x84));
        float v_c;
        (*(int32_t*)(uintptr_t)(a1 + 0x70)) = v_8 * (*(int32_t*)(uintptr_t)(a1 + 0x80)) - v_c * (*(int32_t*)(uintptr_t)(a1 + 0x84));
        long double x87_r7_15 = v_c * (*(int32_t*)(uintptr_t)(a1 + 0x7c));
        long double x87_r6_6 = v_10 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
        (*(int32_t*)(uintptr_t)(a1 + 0x74)) = -((x87_r7_11 - x87_r6_4));
        (*(int32_t*)(uintptr_t)(a1 + 0x78)) = x87_r7_15 - x87_r6_6;
        long double x87_r7_21 = v_10 * (*(int32_t*)(uintptr_t)(a1 + 0x78));
        long double x87_r6_10 = v_8 * (*(int32_t*)(uintptr_t)(a1 + 0x70));
        (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = v_c * (*(int32_t*)(uintptr_t)(a1 + 0x78)) - v_8 * (*(int32_t*)(uintptr_t)(a1 + 0x74));
        long double x87_r7_25 = v_10 * (*(int32_t*)(uintptr_t)(a1 + 0x74));
        long double x87_r6_12 = v_c * (*(int32_t*)(uintptr_t)(a1 + 0x70));
        (*(int32_t*)(uintptr_t)(a1 + 0x80)) = -((x87_r7_21 - x87_r6_10));
        (*(int32_t*)(uintptr_t)(a1 + 0x88)) = v_10;
        (*(int32_t*)(uintptr_t)(a1 + 0x84)) = x87_r7_25 - x87_r6_12;
        (*(int32_t*)(uintptr_t)(a1 + 0x8c)) = v_c;
        (*(int32_t*)(uintptr_t)(a1 + 0x90)) = v_8;
    }

    long double x87_r7_27 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_13 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    x87_r6_13 - x87_r7_27;
    long double x87_r7_28;

    if (!(*(&((x87_r6_13 < x87_r7_27 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_27) ? 1 : 0) << 0xa
            | (x87_r6_13 == x87_r7_27 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_28 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_28 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_14 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_14 - x87_r7_28;
    long double x87_r7_30;

    if (*(&((x87_r6_14 < x87_r7_28 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_14 == x87_r7_28 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_31 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_15 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_15 - x87_r7_31;

        if (!(*(&((x87_r6_15 < x87_r7_31 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_15, x87_r7_31) ? 1 : 0) << 0xa
                | (x87_r6_15 == x87_r7_31 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_30 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_30 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_30 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    void* srcS4 = a5;
    WorldObject_CommitTransform(srcS4, a1, &v_40, Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_30);

    if (!Script_ParseEnumInt32_29(a1, srcS4, a6, a7))
    {
        long double x87_r7_34 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_16 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_16 - x87_r7_34;
        long double x87_r7_35;

        if (!(*(&((x87_r6_16 < x87_r7_34 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_16, x87_r7_34) ? 1 : 0) << 0xa
                | (x87_r6_16 == x87_r7_34 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_35 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_35 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

        long double x87_r6_17 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
        x87_r6_17 - x87_r7_35;
        long double x87_r7_37;

        if (*(&((x87_r6_17 < x87_r7_35 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_17, x87_r7_35) ? 1 : 0) << 0xa
            | (x87_r6_17 == x87_r7_35 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_38 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
            long double x87_r6_18 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            x87_r6_18 - x87_r7_38;

            if (!(*(&((x87_r6_18 < x87_r7_38 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_18, x87_r7_38) ? 1 : 0) << 0xa
                    | (x87_r6_18 == x87_r7_38 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_37 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            else
                x87_r7_37 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        }
        else
            x87_r7_37 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

        WorldObject_CommitTransform(srcS4, a1, a1 + 0x6c0, Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_37);
        memcpy(a1 + 0x70, a1 + 0x694, 0x28);
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x708)) = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - (*(int32_t*)(uintptr_t)(a1 + 0x6c0));
    (*(int32_t*)(uintptr_t)(a1 + 0x710)) = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - (*(int32_t*)(uintptr_t)(a1 + 0x6c8));
    (*(int32_t*)(uintptr_t)(a1 + 0x718)) = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - (*(int32_t*)(uintptr_t)(a1 + 0x6d0));
    int32_t v_24 = (*(int32_t*)(uintptr_t)(a1 + 0x6a0));
    int32_t valA17 = (*(int32_t*)(uintptr_t)(a1 + 0x698));
    v_28 = (*(int32_t*)(uintptr_t)(a1 + 0x694));
    int32_t v_1c = valA17;
    int32_t v_20 = (*(int32_t*)(uintptr_t)(a1 + 0x6ac));
    int32_t v_14 = (*(int32_t*)(uintptr_t)(a1 + 0x6b0));
    int32_t v_18 = (*(int32_t*)(uintptr_t)(a1 + 0x6a4));
    long double x87_r7_47 = (*(int32_t*)(uintptr_t)(a1 + 0x78));
    int32_t v_c_1 = (*(int32_t*)(uintptr_t)(a1 + 0x6a8));
    int32_t v_10_1 = (*(int32_t*)(uintptr_t)(a1 + 0x69c));
    int32_t v_4 = (*(int32_t*)(uintptr_t)(a1 + 0x6b8));
    int32_t v_8_1 = (*(int32_t*)(uintptr_t)(a1 + 0x6b4));
    memcpy(a1 + 0x6dc, &v_28, 0x28);
    v_28 = x87_r7_47 * (*(int32_t*)(uintptr_t)(a1 + 0x6f4)) + (*(int32_t*)(uintptr_t)(a1 + 0x70)) * (*(int32_t*)(uintptr_t)(a1 + 0x6dc))
        + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * (*(int32_t*)(uintptr_t)(a1 + 0x6e8));
    long double x87_r7_54 = (*(int32_t*)(uintptr_t)(a1 + 0x78)) * (*(int32_t*)(uintptr_t)(a1 + 0x6f8)) + (*(int32_t*)(uintptr_t)(a1 + 0x6e0)) * (*(int32_t*)(uintptr_t)(a1 + 0x70))
        + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * (*(int32_t*)(uintptr_t)(a1 + 0x6ec));
    float v_24_1 = x87_r7_54;
    long double x87_r7_58 = (*(int32_t*)(uintptr_t)(a1 + 0x6f0)) * (*(int32_t*)(uintptr_t)(a1 + 0x74)) + (*(int32_t*)(uintptr_t)(a1 + 0x6fc)) * (*(int32_t*)(uintptr_t)(a1 + 0x78))
        + (*(int32_t*)(uintptr_t)(a1 + 0x70)) * (*(int32_t*)(uintptr_t)(a1 + 0x6e4));
    float v_20_1 = x87_r7_58;
    long double x87_r7_62 = (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * (*(int32_t*)(uintptr_t)(a1 + 0x6dc)) + (*(int32_t*)(uintptr_t)(a1 + 0x6f4)) * (*(int32_t*)(uintptr_t)(a1 + 0x84))
        + (*(int32_t*)(uintptr_t)(a1 + 0x80)) * (*(int32_t*)(uintptr_t)(a1 + 0x6e8));
    float v_1c_1 = x87_r7_62;
    int32_t v_4_1 = (*(int32_t*)(uintptr_t)(a1 + 0x700)) + (*(int32_t*)(uintptr_t)(a1 + 0x94)) + 1;
    long double x87_r7_66 = (*(int32_t*)(uintptr_t)(a1 + 0x84)) * (*(int32_t*)(uintptr_t)(a1 + 0x6f8)) + (*(int32_t*)(uintptr_t)(a1 + 0x80)) * (*(int32_t*)(uintptr_t)(a1 + 0x6ec))
        + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * (*(int32_t*)(uintptr_t)(a1 + 0x6e0));
    float v_18_1 = x87_r7_66;
    long double x87_r7_70 = (*(int32_t*)(uintptr_t)(a1 + 0x6fc)) * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + (*(int32_t*)(uintptr_t)(a1 + 0x6f0)) * (*(int32_t*)(uintptr_t)(a1 + 0x80))
        + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * (*(int32_t*)(uintptr_t)(a1 + 0x6e4));
    float v_14_1 = x87_r7_70;
    long double x87_r7_74 = (*(int32_t*)(uintptr_t)(a1 + 0x6e8)) * (*(int32_t*)(uintptr_t)(a1 + 0x8c)) + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * (*(int32_t*)(uintptr_t)(a1 + 0x6dc))
        + (*(int32_t*)(uintptr_t)(a1 + 0x6f4)) * (*(int32_t*)(uintptr_t)(a1 + 0x90));
    float v_10_2 = x87_r7_74;
    long double x87_r7_78 = (*(int32_t*)(uintptr_t)(a1 + 0x90)) * (*(int32_t*)(uintptr_t)(a1 + 0x6f8)) + (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * (*(int32_t*)(uintptr_t)(a1 + 0x6ec))
        + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * (*(int32_t*)(uintptr_t)(a1 + 0x6e0));
    float v_c_2 = x87_r7_78;
    long double x87_r7_82 = (*(int32_t*)(uintptr_t)(a1 + 0x88)) * (*(int32_t*)(uintptr_t)(a1 + 0x6e4)) + (*(int32_t*)(uintptr_t)(a1 + 0x6fc)) * (*(int32_t*)(uintptr_t)(a1 + 0x90))
        + (*(int32_t*)(uintptr_t)(a1 + 0x6f0)) * (*(int32_t*)(uintptr_t)(a1 + 0x8c));
    float v_8_2 = x87_r7_82;
    memcpy(a1 + 0x6dc, &v_28, 0x28);
    memcpy(a1 + 0x6c0, a1 + 0x20, 0x18);
    memcpy(a1 + 0x694, a1 + 0x70, 0x28);
    return a1 + 0x6dc;
}
