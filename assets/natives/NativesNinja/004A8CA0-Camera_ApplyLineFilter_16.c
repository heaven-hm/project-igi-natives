#include "004A8CA0-Camera_ApplyLineFilter_16.h"
/* 0x004a8ca0 Camera_ApplyLineFilter_16 full linked: callers=32 callees=0 */
long double sub_4a8ca0(int16_t a1 @ x87control, long double a2, long double a3)

{
    long double x87_r7 = a3;
    long double x87_r6 = a2;

    while (true)
    {
        int32_t eax_1 = *(&a2 + 4);

        if (eax_1 * 2 < eax_1)
        {
            int32_t eax_3 = (eax_1 * 2) ^ 0xe000000;

            if (eax_3 & 0xe000000)
                return x87_r7 / x87_r6;

            if (!*((eax_3 >> 0x1c) + 0x5443e0))
                return x87_r7 / x87_r6;

            int32_t eax_6 = *(&a2 + 8) & 0x7fff;

            if (!eax_6 || eax_6 == 0x7fff)
                return x87_r7 / x87_r6;

            int16_t x87status_1;
            int16_t temp0_1;
            temp0_1 = __fnstcw_memmem16(a1);
            int16_t x87control;
            int16_t x87status_2;
            x87control = __fldcw_memmem16((temp0_1 | 0x33f) & 0xf3ff);

            if ((*(&a3 + 8) & 0x7fff) == 1)
            {
                long double x87_r7_6 = x87_r6 * g_5443f4;
                long double x87_r7_7 = x87_r7 * g_5443f4;
                int16_t x87control_2;
                int16_t x87status_4;
                x87control_2 = __fldcw_memmem16(temp0_1);
                return x87_r7_7 / x87_r7_6;
            }

            long double x87_r7_3 = x87_r6 * g_5443f0;
            long double x87_r7_4 = x87_r7 * g_5443f0;
            int16_t x87control_1;
            int16_t x87status_3;
            x87control_1 = __fldcw_memmem16(temp0_1);
            return x87_r7_4 / x87_r7_3;
        }

        if (!(a2 | *(&a2 + 4)) || *(&a2 + 8) & 0x7fff)
            return x87_r7 / x87_r6;

        int16_t x87status_5;
        int16_t temp0_6;
        temp0_6 = __fnstcw_memmem16(a1);
        int16_t x87control_3;
        int16_t x87status_6;
        x87control_3 = __fldcw_memmem16((temp0_6 | 0x33f) & 0xf3ff);
        int32_t eax_20 = *(&a3 + 8) & 0x7fff;
        int16_t x87control_4;
        int16_t x87status_8;

        if (!eax_20)
        {
            int32_t eax_23 = *(&a3 + 4);

            if (eax_23 * 2 < eax_23)
            {
                x87control_4 = __fldcw_memmem16(temp0_6);
                return x87_r7 / x87_r6;
            }
        }
        else
        {
            if (eax_20 == 0x7fff)
            {
                x87control_4 = __fldcw_memmem16(temp0_6);
                return x87_r7 / x87_r6;
            }

            int32_t eax_21 = *(&a3 + 4);

            if (eax_21 * 2 >= eax_21)
            {
                x87control_4 = __fldcw_memmem16(temp0_6);
                return x87_r7 / x87_r6;
            }
        }
        a2 = x87_r6 * g_5443f8;
        x87_r7 = a3;
        int16_t x87status_7;
        a1 = __fldcw_memmem16(temp0_6);
    }
}
