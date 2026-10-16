#include "Camera_ApplyBandFilter_5.h"
long double Camera_ApplyBandFilter_5(double a1)

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t v_c = objC;
    int32_t valA;
    int16_t x87control;
    int16_t x87control_1;
    valA = Camera_UpdateTransform_14(x87control, g_543ea0, 0xffff);
    int32_t v_1c_1 = 0xffff;
    v_1c_1 = a1;
    int32_t v_30;
    int32_t v_18_2;

    if ((*(&a1 + 6) & 0x7ff0) != 0x7ff0)
    {
        v_c = Camera_ApplyBandFilter_13(v_1c_1);
        long double x87_r7_7 = v_c;
        long double f0_1 = a1;
        x87_r7_7 - f0_1;

        if (TEST_BITB(
            *(&((x87_r7_7 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == f0_1 ? 1 : 0) << 0xe) + 1),
            6) || valA & 0x20)
        {
            Camera_UpdateTransform_14(x87control_1, valA, 0xffff);
            return v_c;
        }

        v_18_2 = valA;
        int32_t v_20_2;
        v_20_2 = v_c;
        int32_t v_28_1;
        v_28_1 = a1;
        memcpy(&v_30,
            "\x10\x00\x00\x00\x0b\x00\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x"
        "00\x00",
            0x18);
    }
    else
    {
        int32_t valA3 = Camera_ApplyWideScreen_13(v_1c_1, 0xffff);

        if (valA3 > 0)
        {
            if (valA3 <= 2)
            {
                Camera_UpdateTransform_14(x87control_1, valA, 0xffff);
                return a1;
            }

            if (valA3 == 3)
            {
                int32_t v_1c_2 = 0xffff;
                int32_t v_20 = 0xffff;
                v_20 = a1;
                return Camera_ApplyHandiCam_12(valA3, 0, 0xffff, 0xb, v_20, valA);
            }
        }

        v_18_2 = valA;
        int32_t v_20_1;
        v_20_1 = a1 + 1.0;
        int32_t v_28;
        v_28 = a1;
        memcpy(&v_30,
            "\x08\x00\x00\x00\x0b\x00\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x"
        "00\x00",
            0x18);
    }

    return Camera_ApplyWideScreen_12(v_30, 0xb, v_18_2);
}
