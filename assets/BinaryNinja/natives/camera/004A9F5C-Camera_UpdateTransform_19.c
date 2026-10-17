// Original IGI.EXE function: Camera_UpdateTransform_19 (VA 0x004A9F5C; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_19.h"
int32_t __convention("regparm") Camera_UpdateTransform_19(int32_t a1, int32_t a2, int32_t a3, double a4)

{
    int32_t v_c = a3;
    int32_t v_14 = a3;
    v_14 = a4;

    if (!(Camera_ApplyPostProcess_27(v_14, a3, v_c, a3) & 0x90))
    {
        int32_t v_14_1 = a3;
        v_14_1 = a4;
        v_c = Camera_ApplyBandFilter_13(v_14_1);
        long double x87_r7_3 = v_c;
        long double f0_1 = a4;
        x87_r7_3 - f0_1;

        if (TEST_BITB(
            *(&((x87_r7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f0_1 ? 1 : 0) << 0xe) + 1),
            6))
        {
            int32_t v_10_2 = a3;
            int32_t v_14_2 = a3;
            a4 = a4 / 2.0;
            v_14_2 = a4;
            long double fp0_2 = Camera_ApplyBandFilter_13(v_14_2);
            long double f1 = a4;
            fp0_2 - f1;

            if (!TEST_BITB(
                    *(&((fp0_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f1) ? 1 : 0) << 0xa
                        | (fp0_2 == f1 ? 1 : 0) << 0xe) + 1),
                    6))
                return 1;

            return 2;
        }
    }

    return 0;
}
