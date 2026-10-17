// Original IGI.EXE function: Gun_Cleanup_3 (VA 0x00479B20; static CFG gate PASS, CFG score 0.933).
#include "Gun_Cleanup_3.h"
int32_t Gun_Cleanup_3(float context)

{
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    Weapon_UpdateZoom_5(context);
    char result = *(context + 0xf1);

    if (!result)
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

        float item_24_2 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_4;
        result = DynObj_LinkDynamicCube_8(Level_StartMission_4(), context, &item_18, item_24_2, 2);
        *(context + 0xf0) = 1;
    }

    return result;
}
