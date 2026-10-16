#include "004D6640-Render_DrawBoneMesh_11.h"
/* 0x004d6640 Render_DrawBoneMesh_11 full linked: callers=1 callees=11 */
void sub_4d6640(int32_t a1)

{
    int32_t edi_1 = a1 * 0x28;
    int32_t var_4 = edi_1;

    if (*(edi_1 + 0xa53910))
    {
        sub_4b0b70(edi_1 + 0xa538f8);
        *(edi_1 + 0xa53910) = 0;
    }

    int32_t edx = *(edi_1 + 0xa53914);
    int32_t var_8 = edx;

    if (edx <= 0)
        return;

    int32_t i_2 = *(a1 * 0xc + &g_a542f0);

    if (i_2)
    {
        int32_t ecx_2 = 0;
        a1 = 0;

        if (edx > 0)
        {
            do
            {
                int32_t eax_2 = *(edi_1 + &g_a538f4);
                void* esi_1 = *(eax_2 + (ecx_2 << 2));

                if (esi_1)
                {
                    *(eax_2 + (ecx_2 << 2)) = 0;
                    void* edi_2 = *(esi_1 + 0x10);

                    if (edi_2)
                    {
                        sub_4b0d10(*(edi_2 + 4));
                        *(edi_2 + 4) = 0;
                        sub_4b0d10(edi_2);
                    }

                    void* edi_3 = *(esi_1 + 8);
                    sub_4b0d10(*(edi_3 + 4));
                    *(edi_3 + 4) = 0;
                    sub_4b0d10(edi_3);
                    int32_t i_1 = i_2;
                    void* ebp_1 = *(esi_1 + 0xc);

                    if (i_1 > 0)
                    {
                        int32_t* esi_2 = ebp_1 + 8;
                        int32_t i;

                        do
                        {
                            sub_4b0d10(esi_2[-1]);
                            esi_2[-1] = 0;
                            void* eax_5 = *esi_2;

                            if (eax_5)
                            {
                                sub_4b0d10(eax_5);
                                *esi_2 = 0;
                            }

                            void* eax_6 = esi_2[1];

                            if (eax_6)
                            {
                                sub_4b0d10(eax_6);
                                esi_2[1] = 0;
                            }

                            esi_2 = &esi_2[4];
                            i = i_1;
                            i_1 -= 1;
                        } while (i != 1);
                    }

                    sub_4b0d10(ebp_1);
                    edx = var_8;
                    edi_1 = var_4;
                    ecx_2 = a1;
                }

                ecx_2 += 1;
                a1 = ecx_2;
            } while (ecx_2 < edx);
        }
    }

    sub_4b0d10(*(edi_1 + &g_a538f0));
    *(edi_1 + &g_a538f0) = 0;
    sub_4b0d10(*(edi_1 + &g_a538f4));
    *(edi_1 + &g_a538f0) = 0;
    *(edi_1 + 0xa53914) = 0;
    *(edi_1 + &g_a538f4) = 0;
}
