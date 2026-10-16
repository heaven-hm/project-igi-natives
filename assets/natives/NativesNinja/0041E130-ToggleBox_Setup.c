#include "0041E130-ToggleBox_Setup.h"
/* 0x0041e130 ToggleBox_Setup full linked: callers=0 callees=15 */
int32_t ToggleBox_Setup(int32_t a1)

{
    int32_t esi = a1;
    void* var_10;
    void* edi;

    if (!*(esi + 0xa4))
    {
        void* eax_1 = *(esi + 0x98);
        var_10 = eax_1;
        edi = eax_1;
    }
    else
    {
        edi = *(esi + 0x94);
        var_10 = edi;
    }

    long double x87_r7_1 = (Menu_FormatScreen_4(*(esi + 0x44)) - 8) * 0.125f;
    long double temp0 = 0f;
    x87_r7_1 - temp0;

    a1 = *(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(esi);
    int32_t* eax_8 = *(esi + 0x9c);

    if (eax_8 && *(esi + 0xa0))
    {
        int32_t eax_9 = sub_4b7e00(eax_8);
        int32_t eax_11;
        int32_t edx_2;
        edx_2 = HIGHD(*(esi + 0x2c) - eax_9);
        eax_11 = LOWD(*(esi + 0x2c) - eax_9);
        int32_t ebx_5 = ((eax_11 - edx_2) >> 1) + *(esi + 0x24);
        int32_t eax_14;
        int32_t edx_4;
        edx_4 = HIGHD(sub_4b7df0(*(esi + 0x9c)));
        eax_14 = LOWD(sub_4b7df0(*(esi + 0x9c)));
        int32_t eax_17;
        int32_t edx_5;
        edx_5 = HIGHD(*(esi + 0x28));
        eax_17 = LOWD(*(esi + 0x28));
        int32_t edi_4 = ((eax_17 + (edx_5 & 3)) >> 2) - ((eax_14 - edx_4) >> 1) + *(esi + 0x20);
        int32_t eax_21;
        int32_t edx_8;
        edx_8 = HIGHD(sub_4b7df0(*(esi + 0xa0)));
        eax_21 = LOWD(sub_4b7df0(*(esi + 0xa0)));
        int32_t eax_25;
        int32_t edx_9;
        edx_9 = HIGHD(*(esi + 0x28) * 3);
        eax_25 = LOWD(*(esi + 0x28) * 3);
        int32_t eax_27 = edi_4 + (g_c28b44 >> 1) - 0x140;
        int32_t edx_14 = (g_c28b44 >> 1) + ((eax_25 + (edx_9 & 3)) >> 2)
            - ((eax_21 - edx_8) >> 1) + *(esi + 0x20) - 0x140;
        int32_t ecx_10 = ebx_5 + (g_c28b48 >> 1) - 0xf0;
        *(*(esi + 0x9c) + 0x14) = 0;
        *(*(esi + 0x9c) + 0x18) = 0;
        *(*(esi + 0x9c) + 0x1c) = 0;
        void* eax_31 = *(esi + 0x9c);
        *(eax_31 + 0x24) |= 0x80000;
        *(*(esi + 0x9c) + 0x10) = a1;
        *(*(esi + 0x9c) + 4) = eax_27;
        long double x87_r7_4 = ecx_10;
        *(*(esi + 0x9c) + 8) = x87_r7_4;
        sub_4b6f50(*(esi + 0x9c));
        *(*(esi + 0xa0) + 0x14) = 0;
        *(*(esi + 0xa0) + 0x18) = 0;
        *(*(esi + 0xa0) + 0x1c) = 0;
        void* eax_35 = *(esi + 0xa0);
        *(eax_35 + 0x24) |= 0x80000;
        *(*(esi + 0xa0) + 0x10) = a1;
        *(*(esi + 0xa0) + 4) = edx_14;
        *(*(esi + 0xa0) + 8) = x87_r7_4;
        sub_4b6f50(*(esi + 0xa0));
        edi = var_10;
    }

    char eax_38 = *(esi + 0x4d);
    float var_10_1 = 64f;

    if (!eax_38)
        var_10_1 = 0f;

    float var_c_2 = 64f;

    if (!eax_38)
        var_c_2 = 0f;

    float ebx_6 = a1;
    float var_3c = var_10_1;
    float var_40 = var_10_1;
    int32_t ecx_17 = *(edi + 0x24);
    int32_t var_44 = ecx_17;
    int32_t ecx_18 = *(edi + 0x20);
    int32_t var_48 = ecx_18;
    sub_4b4af0((g_c28b44 >> 1) + ecx_18 - 0x140, (g_c28b48 >> 1) + ecx_17 - 0xf0,
        *(edi + 0x28), *(edi + 0x2c), var_c_2, 128f, var_10_1, ebx_6, 0x3f800000, 0x80000, 0);
    return Menu_DrawWidget_14(esi, 0.5f, ebx_6, *(esi + 0x4d));
}
