// IGI native provenance: Camera_ApplyLineFilter_16 - 0x004A8CA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8CA0-Camera_ApplyLineFilter_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_16.h"
long double Camera_ApplyLineFilter_16(int16_t context , long double param_2, long double param_3)

{
    long double fpu7 = param_3;
    long double fpu6 = param_2;

    while (true)
    {
        int32_t data_1 = *(&param_2 + 4);

        if (data_1 * 2 < data_1)
        {
            int32_t data_3 = (data_1 * 2) ^ 0xe000000;

            if (data_3 & 0xe000000)
                return fpu7 / fpu6;

            if (!*((data_3 >> 0x1c) + 0x5443e0))
                return fpu7 / fpu6;

            int32_t data_6 = *(&param_2 + 8) & 0x7fff;

            if (!data_6 || data_6 == 0x7fff)
                return fpu7 / fpu6;

            int16_t x87status_1;
            int16_t f0_1;
            f0_1 = __fnstcw_memmem16(context);
            int16_t fpu_control;
            int16_t x87status_2;
            fpu_control = __fldcw_memmem16((f0_1 | 0x33f) & 0xf3ff);

            if ((*(&param_3 + 8) & 0x7fff) == 1)
            {
                long double fpu_val_7_6 = fpu6 * g_5443f4;
                long double fpu_val_7_7 = fpu7 * g_5443f4;
                int16_t x87control_2;
                int16_t x87status_4;
                x87control_2 = __fldcw_memmem16(f0_1);
                return fpu_val_7_7 / fpu_val_7_6;
            }

            long double fpu_val_7_3 = fpu6 * g_5443f0;
            long double fpu_val_7_4 = fpu7 * g_5443f0;
            int16_t x87control_1;
            int16_t x87status_3;
            x87control_1 = __fldcw_memmem16(f0_1);
            return fpu_val_7_4 / fpu_val_7_3;
        }

        if (!(param_2 | *(&param_2 + 4)) || *(&param_2 + 8) & 0x7fff)
            return fpu7 / fpu6;

        int16_t x87status_5;
        int16_t f0_6;
        f0_6 = __fnstcw_memmem16(context);
        int16_t x87control_3;
        int16_t x87status_6;
        x87control_3 = __fldcw_memmem16((f0_6 | 0x33f) & 0xf3ff);
        int32_t data_20 = *(&param_3 + 8) & 0x7fff;
        int16_t x87control_4;
        int16_t x87status_8;

        if (!data_20)
        {
            int32_t data_23 = *(&param_3 + 4);

            if (data_23 * 2 < data_23)
            {
                x87control_4 = __fldcw_memmem16(f0_6);
                return fpu7 / fpu6;
            }
        }
        else
        {
            if (data_20 == 0x7fff)
            {
                x87control_4 = __fldcw_memmem16(f0_6);
                return fpu7 / fpu6;
            }

            int32_t data_21 = *(&param_3 + 4);

            if (data_21 * 2 >= data_21)
            {
                x87control_4 = __fldcw_memmem16(f0_6);
                return fpu7 / fpu6;
            }
        }
        param_2 = fpu6 * g_5443f8;
        fpu7 = param_3;
        int16_t x87status_7;
        context = __fldcw_memmem16(f0_6);
    }
}
