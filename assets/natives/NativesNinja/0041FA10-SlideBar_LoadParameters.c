#include "0041FA10-SlideBar_LoadParameters.h"
/* 0x0041fa10 SlideBar_LoadParameters full linked: callers=0 callees=13 */
int32_t SlideBar_LoadParameters(float a1)

{
    int32_t esi = a1;
    int32_t var_10 = 0;
    int32_t eax = *(esi + 0x248);
    void* ebx = *(esi + 0x98);
    int32_t* edi = *(esi + 0x9c);
    float var_c = *(esi + 0xa0);

    if (!eax)
        a1 = *(esi + 0xa8);
    else
        a1 = 1f / (eax - 1);

    int32_t ecx = 0;
    ecx = *(ebx + 0x1c);
    (*((ecx << 2) + &g_a970e0))(ebx);
    int32_t edx = 0;
    int32_t* var_28 = edi;
    edx = edi[7];
    (*((edx << 2) + &g_a970e0))(var_28);
    int16_t eax_4;
    eax_4 = *(ebx + 0x4b);
    int32_t eax_5;

    if (!eax_4)
        eax_5 = *(esi + 0x50);

    long double x87_r7_4;

    if (eax_4 || eax_5 == 0xffffffff)
    {
        long double x87_r7_8 = *(esi + 0xa0);
        long double temp0_1 = 0.0;
        x87_r7_8 - temp0_1;

        if (*(&((x87_r7_8 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_4 = var_c;
        else
        {
            var_28 = nullptr;
            sub_4e7180("menu_high", 0, 0);
            x87_r7_4 = var_c - a1;
            var_10 = 1;
        }
    }
    else if (*(edi + 0x4b) || eax_5 == 0xfffffffe)
    {
        long double x87_r7_6 = *(esi + 0xa0);
        long double temp1_1 = 1.0;
        x87_r7_6 - temp1_1;

        if (!(*(&((x87_r7_6 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_4 = var_c;
        else
        {
            var_28 = nullptr;
            var_10 = 1;
            sub_4e7180("menu_high", 0, 0);
            x87_r7_4 = a1 + var_c;
        }
    }
    else
    {
        void* eax_6 = *(esi + 0x94);

        if (!eax_6)
            x87_r7_4 = var_c;
        else
        {
            char ecx_2 = *(esi + 0xb4);
            void* ebp_2 = *(esi + 0x20) + 2;
            int32_t edi_2 = *(esi + 0x24) + 2;
            a1 = ecx_2;
            int32_t eax_7;
            char* ebx_1;

            if (!ecx_2)
            {
                edi_2 = edi_2 + *(ebx + 0x2c) + 1;
                ebx_1 = sub_4b6ce0(eax_6);
                eax_7 = *(esi + 0xac);
            }
            else
            {
                ebx_1 = *(esi + 0xac);
                ebp_2 = *(ebx + 0x28) + ebp_2 + 1;
                eax_7 = sub_4b6d00(eax_6);
            }

            int32_t var_8;
            var_28 = &var_8;
            char* var_4;
            Menu_UpdateLanguage_14(esi, ebp_2, edi_2, ebx_1, eax_7, var_28, &var_4);

            if (!*(esi + 0x4a))
                x87_r7_4 = var_c;
            else
            {
                void* eax_11 = *(esi + 0x94);

                if (!a1)
                {
                    int32_t eax_13 = sub_4b6d00(eax_11);
                    var_10 = 1;
                    x87_r7_4 = (var_4 - edi_2) / (*(esi + 0xac) - eax_13);
                }
                else
                {
                    int32_t eax_12 = sub_4b6ce0(eax_11);
                    var_10 = 1;
                    x87_r7_4 = (var_8 - ebp_2) / (*(esi + 0xac) - eax_12);
                }
            }
        }
    }

    float eax_17 = *(esi + 0x248);

    if (eax_17)
    {
        var_28 = (eax_17 - 1) * x87_r7_4 + 0.5f;
        x87_r7_4 = sub_4a55fe(var_28) / (*(esi + 0x248) - 1);
    }

    long double x87_r6_4 = 0f;
    x87_r6_4 - x87_r7_4;

    if (*(&((x87_r6_4 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r6_5 = 1f;
        x87_r6_5 - x87_r7_4;

        if (*(&((x87_r6_5 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_4 = 1f;
    }
    else
        x87_r7_4 = 0f;

    *(esi + 0xa0) = x87_r7_4;
    *(esi + 0xb0) = Menu_FormatScreen_10(esi);

    if (var_10 && sub_4f16c0(esi + 0x158))
    {
        sub_4f16e0(esi + 0x158, esi);
        Menu_FormatScreen_5(*(esi + 0x44));
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(esi);
}
