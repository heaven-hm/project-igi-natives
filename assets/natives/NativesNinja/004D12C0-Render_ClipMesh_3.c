#include "004D12C0-Render_ClipMesh_3.h"
/* 0x004d12c0 Render_ClipMesh_3 full linked: callers=1 callees=7 */
int32_t sub_4d12c0(int32_t a1)

{
    int32_t edi = 1;
    sub_5116b0(a1);
    sub_4ce390(a1, 0x11, 0, &g_bcab08, 0x20000000);
    char* esi = g_b16c98;
    int32_t var_8;

    if (g_a538d0)
    {
        int32_t i = 0;

        if (g_b12c20 > 0)
        {
            do
            {
                void* eax_5 = *(esi + 4);
                long double st0_1;
                long double x87_r6_2;

                if (*(eax_5 + 0x1c) != g_c30064)
                {
                    st0_1 = sub_4b32f0(0xb16c80, eax_5 + 0x20);
                    x87_r6_2 = g_b04264 * g_b04264;
                    x87_r6_2 - st0_1;
                }

                if (*(eax_5 + 0x1c) != g_c30064 && !(*(&((x87_r6_2 < st0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    if (!edi)
                    {
                        long double x87_r7_3 = g_bcabc0 + g_bcabb8;
                        int32_t eax_9 = g_bcabbc;
                        var_8 = g_bcabb8;
                        float var_10 = x87_r7_3;
                        int32_t var_4_1 = eax_9;
                        float var_c_1 = g_bcabc4 + g_bcabbc;
                        sub_497520(0xbcaba0, &var_8, &var_10);
                    }

                    void* eax_10 = *(esi + 4);
                    int32_t ecx_6 = 0;
                    ecx_6 = *esi;
                    int32_t edx_4 = 0;
                    edx_4 = *(eax_10 + 0x1c);
                    (*(((ecx_6 * 0x180 + edx_4) << 2) + &g_a96ae0))(eax_10, *(eax_10 + 0x48));
                    edi = 1;
                }
                else if (g_54843c)
                {
                    if (edi)
                        sub_497520(0xbcaba0, &g_b12b78, &g_b16c60);

                    void* eax_12 = *(esi + 4);
                    int32_t ecx_10 = 0;
                    ecx_10 = *esi;
                    int32_t edx_6 = 0;
                    edx_6 = *(eax_12 + 0x1c);
                    (*(((ecx_10 * 0x180 + edx_6) << 2) + &g_a96ae0))(eax_12, *(eax_12 + 0x48));
                    edi = 0;
                }

                esi = &esi[8];
                i += 1;
            } while (i < g_b12c20);
        }
    }
    else
    {
        int32_t i_1 = 0;

        if (g_b12c20 > 0)
        {
            do
            {
                void* eax_2 = *(esi + 4);
                int32_t ecx_1 = 0;
                ecx_1 = *esi;
                int32_t edx_1 = 0;
                edx_1 = *(eax_2 + 0x1c);
                (*(((ecx_1 * 0x180 + edx_1) << 2) + &g_a96ae0))(eax_2, *(eax_2 + 0x48));
                esi = &esi[8];
                i_1 += 1;
            } while (i_1 < g_b12c20);
        }
    }

    sub_4ce390(a1, 0x12, 0, &g_bcab08, 0x20000000);
    int32_t ecx_14 = g_b12c20;
    var_8 = g_b16c98;
    int32_t var_4_2 = ecx_14;
    return sub_4d14a0(g_a538e4, &var_8);
}
