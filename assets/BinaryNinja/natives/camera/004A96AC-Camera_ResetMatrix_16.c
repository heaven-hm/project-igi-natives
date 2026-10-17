// Original IGI.EXE function: Camera_ResetMatrix_16 (VA 0x004A96AC; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_16.h"
long double Camera_ResetMatrix_16(int16_t context , long double param_2 , long double param_3 )

{
    long double item_1c = param_2;
    int32_t data_val = *(&param_3 + 6);

    if (data_val & 0x7fff0000)
        return Camera_UpdateViewCone_16(data_val, 0, context, param_3);

    if (!(param_3 | *(&param_3 + 4)))
    {
        long double result;
        long double f0_4;
        bool c2;
        result = __fprem(item_1c, param_3);
        return result;
    }

    int32_t temp_val = 2;
    int16_t x87status;
    int16_t f0_2;
    f0_2 = __fnstcw_memmem16(context);
    int16_t item_10 = f0_2;
    int32_t item_c = item_10 | 0x33f;
    int16_t fpu_control;
    int16_t x87status_1;
    fpu_control = __fldcw_memmem16(item_c);
    int32_t data_6 = *(&item_1c + 8) & 0x7fff;
    long double item_34_1;

    if (data_6 > 0x7fbe)
    {
        int16_t x87status_2;
        int16_t f0_3;
        f0_3 = __fnstcw_memmem16(fpu_control);
        item_10 = f0_3;
        data_6 = item_10 | 0x300;
        item_c = data_6;
        int16_t x87control_1;
        int16_t x87status_3;
        x87control_1 = __fldcw_memmem16(item_c);
        item_34_1 = param_3 * g_544414;
    }
    else
    {
        temp_val = 3;
        item_1c = item_1c * g_544414;
        item_34_1 = param_3 * g_544414;
    }

    int16_t x87control_2;
    int16_t x87status_4;
    x87control_2 = __fldcw_memmem16(item_10);
    return Camera_UpdateViewCone_16(data_6, temp_val, x87control_2, item_34_1, param_3, item_1c, item_10, item_c);
}
