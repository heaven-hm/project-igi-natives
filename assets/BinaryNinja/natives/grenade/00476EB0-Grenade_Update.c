// Original IGI.EXE function: Grenade_Update (VA 0x00476EB0; static CFG gate PASS, CFG score 1.000).
#include "Grenade_Update.h"
int32_t Grenade_Update(float context, float param_2)

{
    int32_t result = *(context + 0x720);

    if (result)
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

        int32_t item_8_1 = 0;
        float item_14_1 = context;
        long double fp0_2;
        fp0_2 = Level_CheckQTaskID_5(param_2, context + 0x20, Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_4);
        long double f0_1 = 0.0f;
        fp0_2 - f0_1;
        result = (fp0_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f0_1) ? 1 : 0) << 0xa
            | (fp0_2 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            *(context + 0x720) = 0;
    }

    return result;
}
