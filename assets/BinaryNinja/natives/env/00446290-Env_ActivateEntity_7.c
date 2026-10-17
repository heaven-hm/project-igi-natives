// IGI native provenance: Env_ActivateEntity_7 - 0x00446290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00446290-Env_ActivateEntity_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_ActivateEntity_7.h"
int32_t Env_ActivateEntity_7(float context)

{
    long double fpu_val_7_2 = *(context + 0x108) * *(context + 0x138) * 4096.0f;
    long double fpu_val_6_2 = *(context + 0x10c) * *(context + 0x138) * 4096.0f;
    double item_28 = *(context + 0x120) * fpu_val_6_2 + *(context + 0x11c) * fpu_val_7_2;
    long double fpu_val_5_8 = *(context + 0x12c) * fpu_val_6_2 + *(context + 0x128) * fpu_val_7_2;
    double item_18 = *(context + 0x114) * fpu_val_6_2 + *(context + 0x110) * fpu_val_7_2 + *(context + 0xf0);
    double item_10 = item_28 + *(context + 0xf8);
    double item_8 = fpu_val_5_8 + *(context + 0x100);
    long double fpu_val_7_5 = *(context + 0x9c);
    long double fpu_val_6_8 = *(context + 0xa0);
    fpu_val_6_8 - fpu_val_7_5;
    long double fpu_val_7_6;

    if (!(*(&((fpu_val_6_8 < fpu_val_7_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, fpu_val_7_5) ? 1 : 0) << 0xa
            | (fpu_val_6_8 == fpu_val_7_5 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_6 = *(context + 0xa0);
    else
        fpu_val_7_6 = *(context + 0x9c);

    long double fpu_val_6_9 = *(context + 0x98);
    fpu_val_6_9 - fpu_val_7_6;
    long double fpu_val_7_8;

    if (*(&((fpu_val_6_9 < fpu_val_7_6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_9, fpu_val_7_6) ? 1 : 0) << 0xa
        | (fpu_val_6_9 == fpu_val_7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_9 = *(context + 0x9c);
        long double fpu_val_6_10 = *(context + 0xa0);
        fpu_val_6_10 - fpu_val_7_9;

        if (!(*(&((fpu_val_6_10 < fpu_val_7_9 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_10, fpu_val_7_9) ? 1 : 0) << 0xa
                | (fpu_val_6_10 == fpu_val_7_9 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_8 = *(context + 0xa0);
        else
            fpu_val_7_8 = *(context + 0x9c);
    }
    else
        fpu_val_7_8 = *(context + 0x98);

    float item_38_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_8;
    return WorldObject_CommitTransform(Level_StartMission_4(), context, &item_18, item_38_1);
}
