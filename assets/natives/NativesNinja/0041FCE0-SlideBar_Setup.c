#include "0041FCE0-SlideBar_Setup.h"
/* 0x0041fce0 SlideBar_Setup full linked: callers=0 callees=11 */
int32_t SlideBar_Setup(int32_t a1)

{
    int32_t esi = a1;
    void* ebx = *(esi + 0x98);
    int32_t var_10 = *(esi + 0x9c);
    a1 = *(esi + 0xb4);
    long double x87_r7_1 = (Menu_FormatScreen_4(*(esi + 0x44)) - 8) * 0.125f;
    long double temp0 = 0f;
    x87_r7_1 - temp0;
    float var_8_1;

    var_8_1 = *(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0f : x87_r7_1;

    int32_t ebp_1 = *(esi + 0x20) + 2;
    int32_t edi_1 = *(esi + 0x24) + 2;
    *(ebx + 0x20) = ebp_1;
    *(ebx + 0x24) = edi_1;
    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(esi);

    if (!a1)
    {
        edi_1 = edi_1 + *(ebx + 0x2c) + 1;
        *(var_10 + 0x20) = ebp_1;
        *(var_10 + 0x24) = *(esi + 0xac) + edi_1 + 1;
    }
    else
    {
        ebp_1 = *(ebx + 0x28) + ebp_1 + 1;
        *(var_10 + 0x20) = *(esi + 0xac) + ebp_1 + 1;
        *(var_10 + 0x24) = edi_1;
    }

    void* ebx_4 = *(esi + 0x98);
    int32_t eax_15 = sub_4e7530();
    int32_t ecx_4 = 0;
    ecx_4 = *(ebx_4 + 0x1c);
    (*(((eax_15 * 0x180 + ecx_4) << 2) + &g_a96ae0))(ebx_4);
    void* ebx_5 = *(esi + 0x9c);
    int32_t eax_20 = sub_4e7530();
    int32_t eax_21 = 0;
    eax_21 = *(ebx_5 + 0x1c);
    (*(((eax_20 * 0x180 + eax_21) << 2) + &g_a96ae0))(ebx_5);
    void* eax_23 = *(esi + 0x94);
    float ebx_6 = var_8_1;

    if (eax_23)
    {
        float var_8_2;

        if (!a1)
        {
            var_8_2 = 0f;
            int32_t eax_25 = sub_4b6d00(eax_23);
            var_10 = (*(esi + 0xac) - eax_25) * *(esi + 0xa0);
            a1 = var_10;
        }
        else
        {
            int32_t eax_24 = sub_4b6ce0(eax_23);
            a1 = 0;
            var_8_1 = (*(esi + 0xac) - eax_24) * *(esi + 0xa0);
            var_8_2 = var_8_1;
        }

        int32_t ecx_11 = (g_c28b44 >> 1) + ebp_1 - 0x140;
        int32_t var_48_1 = ecx_11;
        int32_t var_4c_1 = ecx_11;
        sub_4b50b0(*(esi + 0x94), var_8_2 + ecx_11, a1 + edi_1 + (g_c28b48 >> 1) - 0xf0, 128f,
            128f, 128f, ebx_6, 0x3f800000, 0, 0x80000, 0);
    }

    return Menu_DrawWidget_14(esi, 0.5f, ebx_6, *(esi + 0x4d));
}
