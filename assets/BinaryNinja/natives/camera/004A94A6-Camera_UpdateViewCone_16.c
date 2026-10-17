// Original IGI.EXE function: Camera_UpdateViewCone_16 (VA 0x004A94A6; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_16.h"
long double Camera_UpdateViewCone_16(int32_t context, int32_t param_2, int16_t param_3 , long double param_4, int32_t param_5 , long double param_6, long double param_7)

{
    int32_t data_1 = param_5 ^ 0x700;
    int16_t arg_28;
    long double result;
    bool c0;
    bool c1;
    bool c2_3;
    bool c3;

    if (data_1 & 0x700 || !*((data_1 >> 0xb & 0xf) + 0x5443fc) || (param_5 & 0x7fff0000) == 0x7fff0000)
    {
    label_4a9648:
        long double result_1;
        uint8_t f0_7;
        result_1 = __fprem(param_7, param_4);
        result = result_1;

        if (!c2_3)
        {
            c0 = f0_7 & 4;
            c1 = f0_7 & 1;
            c3 = f0_7 & 2;
        }
    }
    else
    {
        int32_t data_7 = *(&param_7 + 6) & 0x7fff0000;

        if (!data_7 || data_7 == 0x7fff0000)
            goto label_4a9648;

        int32_t data_8 = *(&param_7 + 4);

        if (data_8 != -(data_8))
            goto label_4a9648;

        int32_t data_10 = *(&param_4 + 4);

        if (data_10 != -(data_10))
            goto label_4a9648;

        if ((*(&param_7 + 8) & 0x7fff) <= (*(&param_5 + 2) & 0x7fff) + 0x3f)
        {
            while ((*(&param_7 + 8) & 0x7fff) - ((*(&param_5 + 2) & 0x7fff) + 0xa) >= 0)
            {
                int32_t data_18 = *(&param_5 + 2);
                int32_t context_8 = *(&param_7 + 8) & 0x7fff;
                *(&param_5 + 2) = (context_8 - (((context_8 - data_18) & 7) | 4)) | (data_18 & 0x8000);
                *(&param_5 + 2) = data_18;
                long double fp0_1;
                uint8_t f0_2;
                bool c2_1;
                fp0_1 = __fprem(param_7, param_4);

                if (!c2_1)
                {
                    c0 = f0_2 & 4;
                    c1 = f0_2 & 1;
                    c3 = f0_2 & 2;
                }

                param_7 = fp0_1;
            }

            goto label_4a9648;
        }

        if (!(param_2 & 2))
            param_6 = param_4;

        int16_t x87status_1;
        char f0_3;
        f0_3 = __fnstcw_memmem16(param_3);
        arg_28 = f0_3;
        int16_t fpu_control;
        int16_t x87status_2;
        fpu_control = __fldcw_memmem16(arg_28 | 0x33f);
        int32_t i_1 = ((((*(&param_7 + 8) & 0x7fff) - (*(&param_5 + 2) & 0x7fff)) & 0x3f) | 0x20) + 1;
        int32_t data_24 = *(&param_5 + 2) & 0x8000;
        *(&param_5 + 2) = (*(&param_7 + 8) & 0x7fff) | data_24;
        long double fpu_val_7_6 = fabsl(param_4);
        long double result_2 = fabsl(param_7);
        int32_t i;

        do
        {
            result_2 - fpu_val_7_6;
            c0 = result_2 < fpu_val_7_6;
            c1 = false;
            c3 = result_2 == fpu_val_7_6;
            data_24 = (c0 ? 1 : 0) << 8 | (FCMP_UO(result_2, fpu_val_7_6) ? 1 : 0) << 0xa
                | (c3 ? 1 : 0) << 0xe | 0x3000;
            data_24 &= 0x100;

            if (!data_24)
                result_2 = result_2 - fpu_val_7_6;

            fpu_val_7_6 = fpu_val_7_6 * g_54442c;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        long double fp0_2;
        uint8_t f0_6;
        fp0_2 = __fprem(g_544434, param_6);

        if (!c2_3)
        {
            c0 = f0_6 & 4;
            c1 = f0_6 & 1;
            c3 = f0_6 & 2;
        }

        result = result_2;
        int16_t x87status_3;
        param_3 = __fldcw_memmem16(arg_28);

        if (*(&param_7 + 8) & 0x8000)
        {
            result = -(result);
            c1 = false;
        }
    }

    if (param_2 & 3)
    {
        if (param_2 & 1)
        {
            int16_t x87status_4;
            char f0_8;
            f0_8 = __fnstcw_memmem16(param_3);
            arg_28 = f0_8;
            int16_t x87control_1;
            int16_t x87status_5;
            x87control_1 = __fldcw_memmem16(arg_28 | 0x300);
            result = result * g_54441c;
            int16_t x87control_2;
            int16_t x87status_6;
            x87control_2 = __fldcw_memmem16(arg_28);
        }

        int16_t x87status_7;
        char f0_11;
        f0_11 = __fnstenv_memmem28();
        uint224_t item_28_1 = f0_11;
        *(&item_28_1 + 4) &= 0xbcff;
        *(&item_28_1 + 4) |= ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2_3 ? 1 : 0) << 0xa
            | (c3 ? 1 : 0) << 0xe | 0x3000) & 0x4300;
        __fldenv_memmem28(item_28_1);
    }

    return result;
}
