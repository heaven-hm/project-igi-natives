#include "00475DF0-Mine_Update.h"
/* 0x00475df0 Mine_Update full linked: callers=0 callees=5 */
struct status_msg* sub_475df0(void* a1, void* a2)

{
    struct status_msg* result;
    result = *(a1 + 0x249);

    if (!result)
    {
        double var_30;
        double* __saved_edi_1 = &var_30;
        var_30 = *(a2 + 8) - *(a1 + 0x20);
        double var_28_1 = *(a2 + 0x10) - *(a1 + 0x28);
        double var_20_1 = *(a2 + 0x18) - *(a1 + 0x30);
        long double st0_1;
        st0_1 = sub_4b3130(__saved_edi_1);
        long double x87_r6_2 = st0_1 - *(a2 + 0x20);
        long double x87_r5_2 = *(a1 + 0x244) * 4096f;
        x87_r5_2 - x87_r6_2;
        result = (x87_r5_2 < x87_r6_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_2, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            double var_18 =
                *(a1 + 0x88) * var_20_1 + *(a1 + 0x7c) * var_28_1 + *(a1 + 0x70) * var_30;
            long double x87_r7_16 =
                *(a1 + 0x8c) * var_20_1 + *(a1 + 0x80) * var_28_1 + *(a1 + 0x74) * var_30;
            double var_10_1 = x87_r7_16;
            double var_8_1 =
                *(a1 + 0x90) * var_20_1 + *(a1 + 0x84) * var_28_1 + *(a1 + 0x78) * var_30;
            memcpy(&var_30, &var_18, 0x18);
            long double temp0_1 = 0.0;
            x87_r7_16 - temp0_1;
            result = (x87_r7_16 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                result = *(a1 + 0x238);

                if (!result)
                {
                    result = *(a1 + 0x248);

                    if (!result)
                    {
                        result = sub_4e6b00(sub_4f0ee0(), "proxy_arm");

                        if (result)
                            result = sub_4e6c30(result, a1 + 0x20);

                        *(a1 + 0x248) = 1;
                    }
                }
            }
        }
    }

    return result;
}
