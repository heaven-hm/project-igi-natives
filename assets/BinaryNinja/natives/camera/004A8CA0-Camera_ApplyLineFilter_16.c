// Original IGI.EXE function: Camera_ApplyLineFilter_16 (VA 0x004A8CA0; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_16.h"
long double Camera_ApplyLineFilter_16(int16_t a1 @ x87control, long double a2, long double a3)

{
    long double fpu7 = a3;
    long double fpu6 = a2;

    while (true)
    {
        int32_t valA1 = *(&a2 + 4);

        if (valA1 * 2 < valA1)
        {
            int32_t valA3 = (valA1 * 2) ^ 0xe000000;

            if (valA3 & 0xe000000)
                return fpu7 / fpu6;

            if (!*((valA3 >> 0x1c) + 0x5443e0))
                return fpu7 / fpu6;

            int32_t valA6 = *(&a2 + 8) & 0x7fff;

            if (!valA6 || valA6 == 0x7fff)
                return fpu7 / fpu6;

            int16_t x87status_1;
            int16_t f0_1;
            f0_1 = __fnstcw_memmem16(a1);
            int16_t x87control;
            int16_t x87status_2;
            x87control = __fldcw_memmem16((f0_1 | 0x33f) & 0xf3ff);

            if ((*(&a3 + 8) & 0x7fff) == 1)
            {
                long double x87_r7_6 = fpu6 * g_5443f4;
                long double x87_r7_7 = fpu7 * g_5443f4;
                int16_t x87control_2;
                int16_t x87status_4;
                x87control_2 = __fldcw_memmem16(f0_1);
                return x87_r7_7 / x87_r7_6;
            }

            long double x87_r7_3 = fpu6 * g_5443f0;
            long double x87_r7_4 = fpu7 * g_5443f0;
            int16_t x87control_1;
            int16_t x87status_3;
            x87control_1 = __fldcw_memmem16(f0_1);
            return x87_r7_4 / x87_r7_3;
        }

        if (!(a2 | *(&a2 + 4)) || *(&a2 + 8) & 0x7fff)
            return fpu7 / fpu6;

        int16_t x87status_5;
        int16_t f0_6;
        f0_6 = __fnstcw_memmem16(a1);
        int16_t x87control_3;
        int16_t x87status_6;
        x87control_3 = __fldcw_memmem16((f0_6 | 0x33f) & 0xf3ff);
        int32_t valA20 = *(&a3 + 8) & 0x7fff;
        int16_t x87control_4;
        int16_t x87status_8;

        if (!valA20)
        {
            int32_t valA23 = *(&a3 + 4);

            if (valA23 * 2 < valA23)
            {
                x87control_4 = __fldcw_memmem16(f0_6);
                return fpu7 / fpu6;
            }
        }
        else
        {
            if (valA20 == 0x7fff)
            {
                x87control_4 = __fldcw_memmem16(f0_6);
                return fpu7 / fpu6;
            }

            int32_t valA21 = *(&a3 + 4);

            if (valA21 * 2 >= valA21)
            {
                x87control_4 = __fldcw_memmem16(f0_6);
                return fpu7 / fpu6;
            }
        }
        a2 = fpu6 * g_5443f8;
        fpu7 = a3;
        int16_t x87status_7;
        a1 = __fldcw_memmem16(f0_6);
    }
}
