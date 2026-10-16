#include "gi_platform.h"
#include "004A8935-Camera_ApplyPostProcess_14.h"
void Camera_ApplyPostProcess_14(void* a1 , long double a2 )

{
    if (!g_936058)
    {
        g_9361d0 = a2;
        bool c1_1 = /* bool c1_1 = unknown  {fst qword [&g_9361d0], fp0} */;
        int16_t valA;
        valA = (*(int32_t*)(uintptr_t)(a1 - 0x90));
        valA = valA;

        if (!valA)
        {
    label_4a896f: ;
            bool c0;
            bool c2;
            bool c3;

            if (!((*(int32_t*)(uintptr_t)(a1 - 0xa4)) & 0x20) && ((c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe) & 0x20)
            {
                (*(int32_t*)(uintptr_t)(a1 - 0x8e)) = 8;
    label_4a8a0b: ;
                void* ctxB2 = (*(int32_t*)(uintptr_t)(a1 - 0x94)) + 1;
                (*(int32_t*)(uintptr_t)(a1 - 0x8a)) = ctxB2;

                if (!g_9361d8)
                {
                    (*(int32_t*)(uintptr_t)(a1 - 0x86)) = (*(int32_t*)(uintptr_t)(a1 + 8));
                    (*(int32_t*)(uintptr_t)(a1 - 0x82)) = (*(int32_t*)(uintptr_t)(a1 + 0xc));

                    if (*(ctxB2 + 0xc) != 1)
                    {
                        (*(int32_t*)(uintptr_t)(a1 - 0x7e)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                        (*(int32_t*)(uintptr_t)(a1 - 0x7a)) = (*(int32_t*)(uintptr_t)(a1 + 0x14));
                    }
                }

                (*(int32_t*)(uintptr_t)(a1 - 0x76)) = a2;
                Camera_ApplyWideScreen_27((*(int32_t*)(uintptr_t)(*(a1 - 0x94) + 0xe)), a1 - 0x8e, a1 - 0xa4);
                (*(int32_t*)(uintptr_t)(a1 - 0x76));
            }
        }
        else
        {
            if (valA == 0xff || valA == 0xfe)
            {
                valA = *(g_9361d0 + 6) & 0x7ff0;

                if (!valA)
                {
                    (*(int32_t*)(uintptr_t)(a1 - 0x8e)) = 4;
                    long double fp0_1;
                    bool c1_2;
                    fp0_1 = __fscale(a2, 1536.0);
                    a2 = fp0_1;
                    long double x87_r7_5 = fabsl(a2);
                    long double f1_1 = 2.2250738585072014e-308;
                    x87_r7_5 - f1_1;

                    if (TEST_BITB(
                            *(&((x87_r7_5 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_5, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_5 == f1_1 ? 1 : 0) << 0xe) + 1),
                            0))
                        a2 = a2 * 0.0;

                    goto label_4a8a0b;
                }

                if (valA != 0x7ff0)
                    goto label_4a896f;

                (*(int32_t*)(uintptr_t)(a1 - 0x8e)) = 3;
                long double fp0_2;
                bool c1_3;
                fp0_2 = __fscale(a2, -1536.0);
                a2 = fp0_2;
                long double x87_r7_10 = fabsl(a2);
                long double f2_1 = 1.7976931348623157e+308;
                x87_r7_10 - f2_1;
                valA = (x87_r7_10 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == f2_1 ? 1 : 0) << 0xe;

                if (!TEST_BITB((*(int32_t*)(uintptr_t)(&valA + 1)), 6) && !TEST_BITB((*(int32_t*)(uintptr_t)(&valA + 1)), 0))
                    a2 = a2 * inf.0;

                goto label_4a8a0b;
            }

            valA = valA;

            if (valA)
            {
                (*(int32_t*)(uintptr_t)(a1 - 0x8e)) = valA;
                goto label_4a8a0b;
            }
        }
    }

    int16_t x87control;
    int16_t x87status;
    x87control = __fldcw_memmem16((*(int32_t*)(uintptr_t)(a1 - 0xa4)));
}
