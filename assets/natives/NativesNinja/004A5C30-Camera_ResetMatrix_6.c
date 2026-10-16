#include "004A5C30-Camera_ResetMatrix_6.h"
/* 0x004a5c30 Camera_ResetMatrix_6 full linked: callers=2 callees=9 */
long double sub_4a5c30(double a1)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    int32_t eax;
    int16_t x87control;
    int16_t x87control_1;
    eax = sub_4a87fc(x87control, g_543f10, 0xffff);
    int32_t var_1c_1 = 0xffff;
    var_1c_1 = a1;
    int32_t var_30;
    int32_t var_18_2;

    if ((*(&a1 + 6) & 0x7ff0) != 0x7ff0)
    {
        var_c = sub_4a8689(var_1c_1);
        long double x87_r7_7 = var_c;
        long double temp0_1 = a1;
        x87_r7_7 - temp0_1;

        if (TEST_BITB(
            *(&((x87_r7_7 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp0_1 ? 1 : 0) << 0xe) + 1),
            6) || eax & 0x20)
        {
            sub_4a87fc(x87control_1, eax, 0xffff);
            return var_c;
        }

        var_18_2 = eax;
        int32_t var_20_2;
        var_20_2 = var_c;
        int32_t var_28_1;
        var_28_1 = a1;
        memcpy(&var_30,
            "\x10\x00\x00\x00\x0c\x00\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x"
        "00\x00",
            0x18);
    }
    else
    {
        int32_t eax_3 = sub_4a86c4(var_1c_1, 0xffff);

        if (eax_3 > 0)
        {
            if (eax_3 <= 2)
            {
                sub_4a87fc(x87control_1, eax, 0xffff);
                return a1;
            }

            if (eax_3 == 3)
            {
                int32_t var_1c_2 = 0xffff;
                int32_t var_20 = 0xffff;
                var_20 = a1;
                return sub_4a7fd4(eax_3, 0, 0xffff, 0xc, var_20, eax);
            }
        }

        var_18_2 = eax;
        int32_t var_20_1;
        var_20_1 = a1 + 1.0;
        int32_t var_28;
        var_28 = a1;
        memcpy(&var_30,
            "\x08\x00\x00\x00\x0c\x00\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x"
        "00\x00",
            0x18);
    }

    return sub_4a8027(var_30, 0xc, var_18_2);
}
