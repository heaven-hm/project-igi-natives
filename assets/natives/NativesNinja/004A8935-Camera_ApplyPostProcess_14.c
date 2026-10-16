#include "004A8935-Camera_ApplyPostProcess_14.h"
/* 0x004a8935 Camera_ApplyPostProcess_14 full linked: callers=3 callees=1 */
void sub_4a8935(void* a1 @ ebp, long double a2 @ st0)

{
    if (!g_936058)
    {
        g_9361d0 = a2;
        bool c1_1 = /* bool c1_1 = unknown  {fst qword [&g_9361d0], st0} */;
        int16_t eax;
        eax = *(a1 - 0x90);
        eax = eax;

        if (!eax)
        {
        label_4a896f:
            bool c0;
            bool c2;
            bool c3;

            if (!(*(a1 - 0xa4) & 0x20) && ((c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe) & 0x20)
            {
                *(a1 - 0x8e) = 8;
            label_4a8a0b:
                void* ebx_2 = *(a1 - 0x94) + 1;
                *(a1 - 0x8a) = ebx_2;

                if (!g_9361d8)
                {
                    *(a1 - 0x86) = *(a1 + 8);
                    *(a1 - 0x82) = *(a1 + 0xc);

                    if (*(ebx_2 + 0xc) != 1)
                    {
                        *(a1 - 0x7e) = *(a1 + 0x10);
                        *(a1 - 0x7a) = *(a1 + 0x14);
                    }
                }

                *(a1 - 0x76) = a2;
                sub_4ad371(*(*(a1 - 0x94) + 0xe), a1 - 0x8e, a1 - 0xa4);
                *(a1 - 0x76);
            }
        }
        else
        {
            if (eax == 0xff || eax == 0xfe)
            {
                eax = *(g_9361d0 + 6) & 0x7ff0;

                if (!eax)
                {
                    *(a1 - 0x8e) = 4;
                    long double st0_1;
                    bool c1_2;
                    st0_1 = __fscale(a2, 1536.0);
                    a2 = st0_1;
                    long double x87_r7_5 = fabsl(a2);
                    long double temp1_1 = 2.2250738585072014e-308;
                    x87_r7_5 - temp1_1;

                    if (TEST_BITB(
                            *(&((x87_r7_5 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe) + 1),
                            0))
                        a2 = a2 * 0.0;

                    goto label_4a8a0b;
                }

                if (eax != 0x7ff0)
                    goto label_4a896f;

                *(a1 - 0x8e) = 3;
                long double st0_2;
                bool c1_3;
                st0_2 = __fscale(a2, -1536.0);
                a2 = st0_2;
                long double x87_r7_10 = fabsl(a2);
                long double temp2_1 = 1.7976931348623157e+308;
                x87_r7_10 - temp2_1;
                eax = (x87_r7_10 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe;

                if (!TEST_BITB(*(&eax + 1), 6) && !TEST_BITB(*(&eax + 1), 0))
                    a2 = a2 * inf.0;

                goto label_4a8a0b;
            }

            eax = eax;

            if (eax)
            {
                *(a1 - 0x8e) = eax;
                goto label_4a8a0b;
            }
        }
    }

    int16_t x87control;
    int16_t x87status;
    x87control = __fldcw_memmem16(*(a1 - 0xa4));
}
