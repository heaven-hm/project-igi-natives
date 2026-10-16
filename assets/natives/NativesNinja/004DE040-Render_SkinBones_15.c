#include "004DE040-Render_SkinBones_15.h"
/* 0x004de040 Render_SkinBones_15 full linked: callers=4 callees=0 */
void* sub_4de040(void* a1)

{
    void* edx = a1;
    int32_t ecx = g_a5e31c;
    void* i = *(edx + 0x138);
    int32_t edi = g_a5e320;

    for (; i > 0; i = *(edx + 0x138))
    {
        int32_t esi_1 = *(edx + 0x130);
        int32_t ebp_1 = 0;
        int32_t var_c_1 = 0;
        int32_t* ebx_2 = **(edx + 0x134) * *(edx + 0x140);
        void* eax_1 = *(ebx_2 + esi_1);
        void* ebx_3 = ebx_2 + esi_1;
        int32_t j = 0;
        void* var_8_1 = ebx_3;

        if (edi > 0)
        {
            while (!j)
            {
                int32_t* eax_4 = *(ecx + (ebp_1 << 2)) * g_a5e328 + g_a5e318;
                int32_t edx_2 = *eax_4;

                if (edx_2 == ebx_3)
                {
                    void* ecx_1 = eax_4[1];
                    int32_t edi_1 = *(*(ecx_1 + 0x144) + edx_2);
                    *(ecx_1 + 0x138) -= 1;
                    void* edx_3 = eax_4[1];
                    int32_t ecx_2 = *(edx_3 + 0x138);

                    if (edi_1 != ecx_2)
                    {
                        int32_t esi_3 = *(edx_3 + 0x134);
                        int32_t ecx_5 =
                            *(esi_3 + (ecx_2 << 2)) * *(edx_3 + 0x140) + *(edx_3 + 0x130);
                        int32_t ebx_5 = *(esi_3 + (edi_1 << 2));
                        int32_t edx_5 = *(*(edx_3 + 0x144) + ecx_5);
                        *(esi_3 + (edi_1 << 2)) = *(esi_3 + (edx_5 << 2));
                        *(*(eax_4[1] + 0x134) + (edx_5 << 2)) = ebx_5;
                        ebx_3 = var_8_1;
                        *(*(eax_4[1] + 0x144) + ecx_5) = edi_1;
                    }

                    int32_t* esi_6 = g_a5e32c;
                    int32_t ecx_7 = g_a5e320 - 1;
                    int32_t eax_5 = *(esi_6 + eax_4);
                    g_a5e320 = ecx_7;

                    if (eax_5 != ecx_7)
                    {
                        int32_t edx_8 = g_a5e31c;
                        int32_t ecx_10 = *(edx_8 + (ecx_7 << 2)) * g_a5e328 + g_a5e318;
                        int32_t edi_3 = *(edx_8 + (eax_5 << 2));
                        int32_t esi_7 = *(esi_6 + ecx_10);
                        *(edx_8 + (eax_5 << 2)) = *(edx_8 + (esi_7 << 2));
                        *(g_a5e31c + (esi_7 << 2)) = edi_3;
                        *(g_a5e32c + ecx_10) = eax_5;
                    }

                    ebp_1 = var_c_1;
                    j = 1;
                    *(eax_1 + 0x60) = 0;
                    ecx = g_a5e31c;
                    edi = g_a5e320;
                }

                edx = a1;
                ebp_1 += 1;
                var_c_1 = ebp_1;

                if (ebp_1 >= edi)
                    break;
            }
        }
    }

    int32_t ebx_6 = edi - 1;

    if (ebx_6 >= 0)
    {
        int32_t* esi_8 = g_a5e32c;
        int32_t temp0_1;

        do
        {
            int32_t ebp_6 = g_a5e318;
            i = *(ecx + (ebx_6 << 2)) * g_a5e328 + ebp_6;

            if (*(i + 4) == edx)
            {
                int32_t edx_11 = *(esi_8 + i);
                edi -= 1;
                g_a5e320 = edi;

                if (edx_11 != edi)
                {
                    int32_t edi_4 = *(ecx + (edx_11 << 2));
                    i = *(ecx + (edi << 2)) * g_a5e328 + ebp_6;
                    int32_t esi_9 = *(esi_8 + i);
                    *(ecx + (edx_11 << 2)) = *(ecx + (esi_9 << 2));
                    *(g_a5e31c + (esi_9 << 2)) = edi_4;
                    *(g_a5e32c + i) = edx_11;
                    esi_8 = g_a5e32c;
                    ecx = g_a5e31c;
                    edi = g_a5e320;
                }

                edx = a1;
            }

            temp0_1 = ebx_6;
            ebx_6 -= 1;
        } while (temp0_1 - 1 >= 0);
    }

    return i;
}
