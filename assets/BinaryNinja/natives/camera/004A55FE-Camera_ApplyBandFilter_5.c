// Original IGI.EXE function: Camera_ApplyBandFilter_5 (VA 0x004A55FE; static CFG gate PASS, CFG score 0.926).
#include "Camera_ApplyBandFilter_5.h"
long double Camera_ApplyBandFilter_5(double context)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int32_t item_c = entity_val;
    int32_t data_val;
    int16_t fpu_control;
    int16_t x87control_1;
    data_val = Camera_UpdateTransform_14(fpu_control, g_543ea0, 0xffff);
    int32_t item_1c_1 = 0xffff;
    item_1c_1 = context;
    int32_t item_30;
    int32_t item_18_2;

    if ((*(&context + 6) & 0x7ff0) != 0x7ff0)
    {
        item_c = Camera_ApplyBandFilter_13(item_1c_1);
        long double fpu_val_7_7 = item_c;
        long double f0_1 = context;
        fpu_val_7_7 - f0_1;

        if (TEST_BITB(
            *(&((fpu_val_7_7 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_7 == f0_1 ? 1 : 0) << 0xe) + 1),
            6) || data_val & 0x20)
        {
            Camera_UpdateTransform_14(x87control_1, data_val, 0xffff);
            return item_c;
        }

        item_18_2 = data_val;
        int32_t item_20_2;
        item_20_2 = item_c;
        int32_t item_28_1;
        item_28_1 = context;
        memcpy(&item_30,
            "\x10\x00\x00\x00\x0b\x00\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x"
        "00\x00",
            0x18);
    }
    else
    {
        int32_t data_3 = Camera_ApplyWideScreen_13(item_1c_1, 0xffff);

        if (data_3 > 0)
        {
            if (data_3 <= 2)
            {
                Camera_UpdateTransform_14(x87control_1, data_val, 0xffff);
                return context;
            }

            if (data_3 == 3)
            {
                int32_t item_1c_2 = 0xffff;
                int32_t item_20 = 0xffff;
                item_20 = context;
                return Camera_ApplyHandiCam_12(data_3, 0, 0xffff, 0xb, item_20, data_val);
            }
        }

        item_18_2 = data_val;
        int32_t item_20_1;
        item_20_1 = context + 1.0;
        int32_t item_28;
        item_28 = context;
        memcpy(&item_30,
            "\x08\x00\x00\x00\x0b\x00\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x"
        "00\x00",
            0x18);
    }

    return Camera_ApplyWideScreen_12(item_30, 0xb, item_18_2);
}
