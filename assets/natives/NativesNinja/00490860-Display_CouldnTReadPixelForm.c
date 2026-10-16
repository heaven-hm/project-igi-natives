#include "00490860-Display_CouldnTReadPixelForm.h"
/* 0x00490860 Display_CouldnTReadPixelForm full linked: callers=1 callees=25 */
void* sub_490860(void* a1)

{
    int32_t ebp = 1;
    int32_t var_540 = 0x10;
    int32_t var_544 = 1;
    HWND hWnd = sub_48f130();
    HDC hDC_1;
    int32_t eax;

    if (!hWnd)
    {
        HDC hDC = GetDC(hWnd);
        int32_t index = 0xc;
        hDC_1 = hDC;
        eax = GetDeviceCaps(hDC_1, index);
        hDC_1 = nullptr;
        var_540 = eax;
        ReleaseDC(hDC_1, hDC);
    }

    if (hWnd || eax != 8)
    {
        int32_t ecx_1 = *(a1 + 0x130);

        if (ecx_1 < 0x280)
        {
            var_544 = 2;
            ebp = 2;
        }

        int32_t eax_1 = 0;
        eax_1 = *(a1 + 0x13a);
        int32_t eax_4;
        int32_t edx_1;
        edx_1 = HIGHD(eax_1 * *(a1 + 0x134) * ecx_1);
        eax_4 = LOWD(eax_1 * *(a1 + 0x134) * ecx_1);
        int32_t eax_6 = (eax_4 + (edx_1 & 7)) >> 3;

        if (*(a1 + 0x140) < eax_6)
            *(a1 + 0x140) = eax_6;

        void var_51c;
        __builtin_memset(&var_51c, 0, 0x11c);
        int32_t var_504_1 = sub_4950e0();
        char var_506_1 = 1;
        int32_t var_518_1 = *(a1 + 0x130) * ebp;
        int32_t var_514_1 = *(a1 + 0x134) * ebp;
        char var_508_1 = 0;
        int32_t var_50c_1 = var_540;
        char var_507_1 = 0;
        int32_t var_510_1 = 1;
        int32_t eax_10 = sub_4950e0();
        int32_t edi_2 = g_5c9f9c;
        int32_t var_504_2 = eax_10;
        char var_506_2 = 1;

        if (edi_2)
        {
            int32_t edx_4 = g_5c9fa0;

            if (edx_4)
            {
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond:1_1 = 0 != *edi_2;
                    edi_2 += 1;
                    i -= 1;

                    if (!cond:1_1)
                        break;
                }

                int32_t ecx_5 = ~i;
                void var_480;
                int32_t esi_3;
                int32_t edi_4;
                edi_4 = memcpy(&var_480, edi_2 - ecx_5, ecx_5 & 0xfffffffc);
                memcpy(edi_4, esi_3, ecx_5 & 3);
                int32_t edi_5 = edx_4;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool cond:2_1 = 0 != *edi_5;
                    edi_5 += 1;
                    i_1 -= 1;

                    if (!cond:2_1)
                        break;
                }

                int32_t ecx_9 = ~i_1;
                void var_500;
                int32_t esi_5;
                int32_t edi_7;
                edi_7 = memcpy(&var_500, edi_5 - ecx_9, ecx_9 & 0xfffffffc);
                memcpy(edi_7, esi_5, ecx_9 & 3);
            }
        }

        int32_t var_558_3 = 0;
        hDC_1 = 7;

        if (sub_491980(&var_51c, hDC_1, var_558_3))
        {
            Display_SetMode(&var_51c);
            int32_t* hDC_3 = g_5ca100;

            if (hDC_3)
            {
                int32_t var_53c;
                __builtin_memset(&var_53c, 0, 0x20);
                var_53c = 0x20;
                int32_t var_538_1 = 0x40;
                int32_t eax_13 = *hDC_3;
                int32_t* var_558_5 = &var_53c;
                hDC_1 = hDC_3;
                int32_t eax_14 = (*(eax_13 + 0x54))(hDC_1, var_558_5);

                if (!eax_14)
                {
                    int32_t var_558_7 = 4;
                    hDC_1 = 0x34;
                    HDC hDC_2 = Mem_Alloc(hDC_1, var_558_7);
                    memcpy(hDC_2, a1 + 0x12c, 0x28);
                    int16_t esi_8 = var_540;
                    *(hDC_2 + 4) = *(a1 + 0x130) * var_544;
                    int32_t edx_7 = *(a1 + 0x134) * var_544;
                    *(hDC_2 + 8) = edx_7;
                    int32_t eax_21;
                    int32_t edx_8;
                    edx_8 = HIGHD(esi_8 * edx_7 * *(hDC_2 + 4));
                    eax_21 = LOWD(esi_8 * edx_7 * *(hDC_2 + 4));
                    *(hDC_2 + 0xe) = esi_8;
                    *(hDC_2 + 0x14) = (eax_21 + (edx_8 & 7)) >> 3;
                    *(hDC_2 + 8) = -(edx_7);

                    if (esi_8 == 0x10 || esi_8 == 0x20)
                    {
                        *(hDC_2 + 0x10) = 3;
                        int32_t var_52c;
                        *(hDC_2 + 0x28) = var_52c;
                        int32_t var_528;
                        *(hDC_2 + 0x2c) = var_528;
                        int32_t var_524;
                        *(hDC_2 + 0x30) = var_524;
                    }

                    uint32_t fccHandler = *(a1 + 0xa4);
                    uint16_t wFlags = 3;
                    hDC_1 = hDC_2;
                    uint32_t fccType;
                    __builtin_strncpy(&fccType, "vidc", 4);
                    *(a1 + 0x154) = hDC_2;
                    HIC hic = ICLocate(fccType, fccHandler, a1 + 0x12c, hDC_1, wFlags);
                    *(a1 + 0x15c) = hic;

                    if (hic)
                    {
                        uint32_t dw2 = *(a1 + 0x154);
                        hDC_1 = a1 + 0x12c;

                        if (!ICSendMessage(hic, 0x400c, hDC_1, dw2))
                        {
                            int32_t var_558_9 = 4;
                            hDC_1 = *(a1 + 0x140);
                            void* eax_26 = Mem_Alloc(hDC_1, var_558_9);
                            *(a1 + 0x160) = eax_26;

                            if (eax_26)
                            {
                                int32_t var_558_10 = 4;
                                hDC_1 = *(*(a1 + 0x154) + 0x14);
                                void* result = Mem_Alloc(hDC_1, var_558_10);
                                *(a1 + 0x164) = result;

                                if (result)
                                {
                                    result = 1;
                                    return result;
                                }
                            }
                        }
                    }
                }
                else
                {
                    char* var_558_6 = "Couldn't read pixel format";
                    void var_400;
                    hDC_1 = &var_400;
                    Game_DataSymbolLoad(hDC_1, var_558_6);
                    int32_t var_564_1 = sub_492be0(eax_14);
                    void* var_568 = &var_400;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
            }
        }
    }

    sub_4903b0(&g_5c8e48);
    int32_t eax_29;
    eax_29 = 0;
    return 0;
}
