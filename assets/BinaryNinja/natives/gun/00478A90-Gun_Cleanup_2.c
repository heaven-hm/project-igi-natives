// IGI native provenance: Gun_Cleanup_2 - 0x00478A90 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 00478A90-Gun_Cleanup_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_Cleanup_2.h"
int32_t Gun_Cleanup_2(float context, double** param_2)

{
    int16_t data_val;
    data_val = *(context + 0xf0);
    double** flagP;

    if (!data_val)
    {
        flagP = param_2;
        memcpy(context + 0x20, *flagP, 0x18);
    }
    else
    {
        long double fpu_val_7_1 = *(context + 0x9c);
        long double fpu_val_6_1 = *(context + 0xa0);
        fpu_val_6_1 - fpu_val_7_1;
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
        flagP = param_2;
        WorldObject_CommitTransform(Level_StartMission_4(), context, *flagP, fpu_val_7_7);
    }

    memcpy(context + 0x70, flagP[1], 0x28);
    WeaponType_UpdateAnim(context + 0x178, context, 2);
    int32_t* temp_val = *(context + 0x130);
    *(context + 0x178) = *(context + 0x20) + *(context + 0x178);
    *(context + 0x180) = *(context + 0x28) + *(context + 0x180);
    *(context + 0x188) = *(context + 0x30) + *(context + 0x188);
    return Weapon_CycleFireMode_6(*temp_val, context + 0x178);
}
