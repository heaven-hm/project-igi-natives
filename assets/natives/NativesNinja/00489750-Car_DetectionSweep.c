#include "00489750-Car_DetectionSweep.h"
/* 0x00489750 Car_DetectionSweep full linked: callers=5 callees=7 */
void* sub_489750(void* a1, double* a2, float a3, int32_t a4)

{
    int32_t edi = **&g_5c8ac0;
    int32_t var_2c = edi;
    void* result = Frames_GetUpdateCounter() & 0x80000003;

    if (result < 0)
        result = ((result - 1) | 0xfffffffc) + 1;

    void* ebx = a1;

    if (*(ebx + 0xc) == result)
    {
        a1 = nullptr;

        if (edi > 0)
        {
            int32_t* var_30_1 = 8;
            int32_t* ebp_1 = ebx + 0x30;

            do
            {
                void* esi_1 = *(var_30_1 + g_5c8ac0);

                if (esi_1 != a3)
                {
                    uint32_t eax_6 = sub_489620();
                    int32_t ecx_2 = 0;
                    ecx_2 = *(esi_1 + 0x1c);
                    int32_t var_28;
                    (*(((eax_6 * 0x180 + ecx_2) << 2) + &g_a96ae0))(esi_1, &var_28);
                    int16_t var_4;

                    if (!*(&var_4 + 1) || !(var_28 & *(ebx + 0x14)))
                    {
                    label_489893:

                        if (*(ebp_1 + 0x2a))
                            sub_4894e0(ebp_1);
                    }
                    else
                    {
                        int32_t eax_11 = *(ebx + 0x10);
                        int32_t var_8;
                        void* edi_1;

                        if (var_8 != a4)
                        {
                            if (!(eax_11 & 0xc))
                                goto label_489893;

                            if (var_4)
                            {
                                if (!(eax_11 & 4))
                                    goto label_489893;

                                goto label_489838;
                            }

                            if (!(eax_11 & 8))
                                goto label_489893;

                        label_489838:
                            edi_1 = ebx + 0x18;
                            goto label_489840;
                        }

                        if (!(eax_11 & 3))
                            goto label_489893;

                        if (var_4)
                        {
                            if (!(eax_11 & 1))
                                goto label_489893;

                            edi_1 = ebx + 0x24;
                            goto label_489840;
                        }

                        if (!(eax_11 & 2))
                            goto label_489893;

                        edi_1 = ebx + 0x24;
                    label_489840:

                        if (!*(ebp_1 + 0x2a))
                            sub_489500(ebx, edi_1, esi_1, a1);
                        else if (*ebp_1[2] != esi_1)
                        {
                            sub_4894e0(ebp_1);
                            sub_489500(ebx, edi_1, esi_1, a1);
                        }

                        double var_20[0x3];
                        sub_4898d0(ebx, ebp_1, &var_20, a2, a3);
                        edi = var_2c;
                    }
                }
                else if (*(ebp_1 + 0x2a))
                    sub_4894e0(ebp_1);

                result = a1 + 1;
                ebp_1 = &ebp_1[0xc];
                a1 = result;
                var_30_1 = &var_30_1[1];
            } while (result < edi);
        }
    }

    return result;
}
