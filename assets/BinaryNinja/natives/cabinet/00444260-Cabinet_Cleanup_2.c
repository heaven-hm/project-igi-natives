// Original IGI.EXE function: Cabinet_Cleanup_2 (VA 0x00444260; static CFG gate PASS, CFG score 1.000).
#include "Cabinet_Cleanup_2.h"
int32_t Cabinet_Cleanup_2(float context)

{
    void* entity_val = *(context + 0x130);

    if (*(entity_val + 0x11c))
    {
        long double fpu_val_7_2 = *(context + 0x154) + 153.600006f;
        *(context + 0x154) = fpu_val_7_2;
        long double f0_1 = 1843.19995f;
        fpu_val_7_2 - f0_1;

        if (!(*(&((fpu_val_7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            *(context + 0x154) = 0x44e66666;
            *(entity_val + 0x130) = 0;
        }
    }

    if (*(entity_val + 0x11d))
    {
        long double fpu_val_7_4 = *(context + 0x154) - 102.400002f;
        *(context + 0x154) = fpu_val_7_4;
        long double f1_1 = 0.0f;
        fpu_val_7_4 - f1_1;

        if (*(&((fpu_val_7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            *(context + 0x154) = 0;
            *(entity_val + 0x130) = 0;
        }
    }

    if (*(entity_val + 0x11e))
    {
        *(context + 0x154) = 0;
        *(entity_val + 0x11e) = 0;
        *(entity_val + 0x130) = 0;
    }

    long double fpu_val_7_8 = *(context + 0x78) * *(context + 0x158) + *(context + 0x74) * *(context + 0x154)
        + *(context + 0x70) * *(context + 0x150);
    long double fpu_val_6_7 = *(context + 0x84) * *(context + 0x158) + *(context + 0x80) * *(context + 0x154)
        + *(context + 0x7c) * *(context + 0x150);
    long double fpu_val_6_11 = *(context + 0x90) * *(context + 0x158) + *(context + 0x8c) * *(context + 0x154)
        + *(context + 0x88) * *(context + 0x150);
    double item_18 = fpu_val_7_8 + *(context + 0x138);
    double item_10 = fpu_val_6_7 + *(context + 0x140);
    double item_8 = fpu_val_6_11 + *(context + 0x148);
    long double fpu_val_7_14 = *(context + 0x9c);
    long double fpu_val_6_12 = *(context + 0xa0);
    fpu_val_6_12 - fpu_val_7_14;
    long double fpu_val_7_15;

    if (!(*(&((fpu_val_6_12 < fpu_val_7_14 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, fpu_val_7_14) ? 1 : 0) << 0xa
            | (fpu_val_6_12 == fpu_val_7_14 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_15 = *(context + 0xa0);
    else
        fpu_val_7_15 = *(context + 0x9c);

    long double fpu_val_6_13 = *(context + 0x98);
    fpu_val_6_13 - fpu_val_7_15;
    long double fpu_val_7_17;

    if (*(&((fpu_val_6_13 < fpu_val_7_15 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_13, fpu_val_7_15) ? 1 : 0) << 0xa
        | (fpu_val_6_13 == fpu_val_7_15 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_18 = *(context + 0x9c);
        long double fpu_val_6_14 = *(context + 0xa0);
        fpu_val_6_14 - fpu_val_7_18;

        if (!(*(&((fpu_val_6_14 < fpu_val_7_18 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_14, fpu_val_7_18) ? 1 : 0) << 0xa
                | (fpu_val_6_14 == fpu_val_7_18 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_17 = *(context + 0xa0);
        else
            fpu_val_7_17 = *(context + 0x9c);
    }
    else
        fpu_val_7_17 = *(context + 0x98);

    float item_2c_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_17;
    return WorldObject_CommitTransform(Level_StartMission_4(), context, &item_18, item_2c_1);
}
