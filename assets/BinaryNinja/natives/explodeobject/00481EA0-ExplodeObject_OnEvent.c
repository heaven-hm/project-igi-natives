// Original IGI.EXE function: ExplodeObject_OnEvent (VA 0x00481EA0; static CFG gate PASS, CFG score 1.000).
#include "ExplodeObject_OnEvent.h"
int32_t ExplodeObject_OnEvent(float context, float param_2)

{
    int32_t result;
    result = *(context + 0x190);

    if (!result)
    {
        result = *(context + 0x234);

        if (result)
        {
            long double fpu_val_7_1 = *(context + 0x9c);
            long double fpu_val_6_1 = *(context + 0xa0);
            fpu_val_6_1 - fpu_val_7_1;
            long double fpu_val_7_2;

            if (!(*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_2 = *(context + 0xa0);
            else
                fpu_val_7_2 = *(context + 0x9c);

            long double fpu_val_6_2 = *(context + 0x98);
            fpu_val_6_2 - fpu_val_7_2;
            long double fpu_val_7_4;

            if (*(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
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

            int32_t item_10_1 = 1;
            float item_1c_1 = context;
            long double fp0_2;
            fp0_2 = Level_CheckQTaskID_5(param_2, context + 0x20, Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_4);
            long double fpu_val_7_9 = fp0_2 + *(context + 0x1e8);
            *(context + 0x1e8) = fpu_val_7_9;
            long double f0_1 = *(context + 0x1ec);
            fpu_val_7_9 - f0_1;
            result = (fpu_val_7_9 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_9 == f0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 1))
            {
                result = *(context + 0x208) * 30.0f;
                *(context + 0x1f4) = result;
            }
        }
    }

    return result;
}
