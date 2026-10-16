#include "004A9F5C-Camera_UpdateTransform_19.h"
/* 0x004a9f5c Camera_UpdateTransform_19 full linked: callers=1 callees=3 */
int32_t __convention("regparm") sub_4a9f5c(int32_t a1, int32_t a2, int32_t a3, double a4)

{
    int32_t var_c = a3;
    int32_t var_14 = a3;
    var_14 = a4;

    if (!(sub_4ad441(var_14, a3, var_c, a3) & 0x90))
    {
        int32_t var_14_1 = a3;
        var_14_1 = a4;
        var_c = sub_4a8689(var_14_1);
        long double x87_r7_3 = var_c;
        long double temp0_1 = a4;
        x87_r7_3 - temp0_1;

        if (TEST_BITB(
            *(&((x87_r7_3 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe) + 1),
            6))
        {
            int32_t var_10_2 = a3;
            int32_t var_14_2 = a3;
            a4 = a4 / 2.0;
            var_14_2 = a4;
            long double st0_2 = sub_4a8689(var_14_2);
            long double temp1 = a4;
            st0_2 - temp1;

            if (!TEST_BITB(
                    *(&((st0_2 < temp1 ? 1 : 0) << 8 | (FCMP_UO(st0_2, temp1) ? 1 : 0) << 0xa
                        | (st0_2 == temp1 ? 1 : 0) << 0xe) + 1),
                    6))
                return 1;

            return 2;
        }
    }

    return 0;
}
