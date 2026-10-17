// Original IGI.EXE function: Camera_ApplyPostProcess_14 (VA 0x004A8935; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_14.h"
void Camera_ApplyPostProcess_14(void* context , long double param_2 )

{
    if (!g_936058)
    {
        g_9361d0 = param_2;
        bool c1_1 = /* bool c1_1 = unknown  {fst qword [&g_9361d0], fp0} */;
        int16_t data_val;
        data_val = *(context - 0x90);
        data_val = data_val;

        if (!data_val)
        {
        label_4a896f:
            bool c0;
            bool c2;
            bool c3;

            if (!(*(context - 0xa4) & 0x20) && ((c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe) & 0x20)
            {
                *(context - 0x8e) = 8;
            label_4a8a0b:
                void* context_2 = *(context - 0x94) + 1;
                *(context - 0x8a) = context_2;

                if (!g_9361d8)
                {
                    *(context - 0x86) = *(context + 8);
                    *(context - 0x82) = *(context + 0xc);

                    if (*(context_2 + 0xc) != 1)
                    {
                        *(context - 0x7e) = *(context + 0x10);
                        *(context - 0x7a) = *(context + 0x14);
                    }
                }

                *(context - 0x76) = param_2;
                Camera_ApplyWideScreen_27(*(*(context - 0x94) + 0xe), context - 0x8e, context - 0xa4);
                *(context - 0x76);
            }
        }
        else
        {
            if (data_val == 0xff || data_val == 0xfe)
            {
                data_val = *(g_9361d0 + 6) & 0x7ff0;

                if (!data_val)
                {
                    *(context - 0x8e) = 4;
                    long double fp0_1;
                    bool c1_2;
                    fp0_1 = __fscale(param_2, 1536.0);
                    param_2 = fp0_1;
                    long double fpu_val_7_5 = fabsl(param_2);
                    long double f1_1 = 2.2250738585072014e-308;
                    fpu_val_7_5 - f1_1;

                    if (TEST_BITB(
                            *(&((fpu_val_7_5 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_5, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_5 == f1_1 ? 1 : 0) << 0xe) + 1),
                            0))
                        param_2 = param_2 * 0.0;

                    goto label_4a8a0b;
                }

                if (data_val != 0x7ff0)
                    goto label_4a896f;

                *(context - 0x8e) = 3;
                long double fp0_2;
                bool c1_3;
                fp0_2 = __fscale(param_2, -1536.0);
                param_2 = fp0_2;
                long double fpu_val_7_10 = fabsl(param_2);
                long double f2_1 = 1.7976931348623157e+308;
                fpu_val_7_10 - f2_1;
                data_val = (fpu_val_7_10 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_10, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_10 == f2_1 ? 1 : 0) << 0xe;

                if (!TEST_BITB(*(&data_val + 1), 6) && !TEST_BITB(*(&data_val + 1), 0))
                    param_2 = param_2 * inf.0;

                goto label_4a8a0b;
            }

            data_val = data_val;

            if (data_val)
            {
                *(context - 0x8e) = data_val;
                goto label_4a8a0b;
            }
        }
    }

    int16_t fpu_control;
    int16_t x87status;
    fpu_control = __fldcw_memmem16(*(context - 0xa4));
}
