#include "0041C080-ScrollListBox_Setup.h"
/* 0x0041c080 ScrollListBox_Setup full linked: callers=0 callees=9 */
int32_t ScrollListBox_Setup(int32_t a1)

{
    int32_t esi = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(esi + 0x44)) - 8) * 0.125f;
    long double temp2 = 0f;
    x87_r7_1 - temp2;

    a1 = *(&((x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    int32_t temp0 = (*(esi + 0x2c) - 4) / *(esi + 0x13f0);
    *(esi + 0x13f0);
    int32_t eax_8 = *(esi + 0x1254);
    int32_t var_10 = eax_8;

    if (eax_8 >= temp0)
        var_10 = temp0;

    int32_t ebp = (g_c28b44 >> 1) + *(esi + 0x20) - 0x140;
    int32_t var_14 = (g_c28b48 >> 1) + *(esi + 0x24) - 0xee;
    int32_t eax_13;

    if (temp0 >= *(esi + 0x1254))
        eax_13 = 0;
    else
        eax_13 = Menu_FormatScreen_10(*(esi + 0x13f4));

    int32_t ebx = *(esi + 0x129c);
    int32_t edi_1 = 0;
    *(*(esi + 0x13f8) + 0x20) = *(esi + 0x20);
    int32_t ebx_1 = ebx - eax_13;
    *(*(esi + 0x13f8) + 0x24) = *(esi + 0x24);

    if (var_10 > 0)
    {
        int32_t* ebp_2 = esi + eax_13 * 0x48 + 0x98;

        do
        {
            sub_4b6e90(*(esi + 0x12ac), *ebp_2);
            long double x87_r7_4 = var_14;
            *(*(esi + 0x12ac) + 4) = ebp + 4;
            *(*(esi + 0x12ac) + 8) = x87_r7_4;
            void* eax_16 = *(esi + 0x12ac);
            void* ecx_9;
            int32_t edx_9;

            if (edi_1 != ebx_1)
            {
                *(eax_16 + 0x14) = g_53b790;
                *(*(esi + 0x12ac) + 0x18) = g_53b794;
                ecx_9 = *(esi + 0x12ac);
                edx_9 = g_53b798;
            }
            else
            {
                *(eax_16 + 0x14) = g_53b7a8;
                *(*(esi + 0x12ac) + 0x18) = g_53b7ac;
                ecx_9 = *(esi + 0x12ac);
                edx_9 = g_53b7b0;
            }

            *(ecx_9 + 0x1c) = edx_9;
            void* eax_19 = *(esi + 0x12ac);
            *(eax_19 + 0x24) |= 0x80000;
            *(*(esi + 0x12ac) + 0x10) = a1;
            int32_t ecx_14 = sub_4b6f50(*(esi + 0x12ac));

            if (edi_1 == ebx_1)
            {
                int32_t var_40_1 = ecx_14;
                void* ecx_15 = *(esi + 0x13f8);
                void* var_44_1 = ecx_15;
                void* var_4c_1 = ecx_15;
                sub_4b4a00(ebp + 2f, x87_r7_4, *(ecx_15 + 0x28) - 4f, *(esi + 0x13f0), 0f, 80f, 0f,
                    a1, 0x80000, 0);
            }

            edi_1 += 1;
            ebp_2 = &ebp_2[0x12];
            var_14 += *(esi + 0x13f0);
        } while (edi_1 < var_10);
    }

    if (*(esi + 0x12a9))
    {
        void* edi_2 = *(esi + 0x13f4);
        int32_t eax_24 = sub_4e7530();
        int32_t edx_13 = 0;
        edx_13 = *(edi_2 + 0x1c);
        (*(((eax_24 * 0x180 + edx_13) << 2) + &g_a96ae0))(edi_2);
    }

    return Menu_DrawWidget_14(*(esi + 0x13f8), 0.5f, a1, *(esi + 0x12aa));
}
