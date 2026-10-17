// Original IGI.EXE function: Display_CouldnTReadPixelForm (VA 0x00490860; static CFG gate PASS, CFG score 0.893).
#include "Display_CouldnTReadPixelForm.h"
void* Display_CouldnTReadPixelForm(void* a1)

{
    int32_t flagP = 1;
    int32_t v_540 = 0x10;
    int32_t v_544 = 1;
    HWND hWnd = FX_FragmentSimulate_23();
    HDC hDC_1;
    int32_t valA;

    if (!hWnd)
    {
        HDC hDC = GetDC(hWnd);
        int32_t index = 0xc;
        hDC_1 = hDC;
        valA = GetDeviceCaps(hDC_1, index);
        hDC_1 = nullptr;
        v_540 = valA;
        ReleaseDC(hDC_1, hDC);
    }

    if (hWnd || valA != 8)
    {
        int32_t objC1 = *(a1 + 0x130);

        if (objC1 < 0x280)
        {
            v_544 = 2;
            flagP = 2;
        }

        int32_t valA1 = 0;
        valA1 = *(a1 + 0x13a);
        int32_t valA4;
        int32_t tmpD1;
        tmpD1 = HIGHD(valA1 * *(a1 + 0x134) * objC1);
        valA4 = LOWD(valA1 * *(a1 + 0x134) * objC1);
        int32_t valA6 = (valA4 + (tmpD1 & 7)) >> 3;

        if (*(a1 + 0x140) < valA6)
            *(a1 + 0x140) = valA6;

        void v_51c;
        __builtin_memset(&v_51c, 0, 0x11c);
        int32_t v_504_1 = Display_CheckCapabilities_7();
        char v_506_1 = 1;
        int32_t v_518_1 = *(a1 + 0x130) * flagP;
        int32_t v_514_1 = *(a1 + 0x134) * flagP;
        char v_508_1 = 0;
        int32_t v_50c_1 = v_540;
        char v_507_1 = 0;
        int32_t v_510_1 = 1;
        int32_t valA10 = Display_CheckCapabilities_7();
        int32_t dstD2 = g_5c9f9c;
        int32_t v_504_2 = valA10;
        char v_506_2 = 1;

        if (dstD2)
        {
            int32_t tmpD4 = g_5c9fa0;

            if (tmpD4)
            {
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond_1_1 = 0 != *dstD2;
                    dstD2 += 1;
                    i -= 1;

                    if (!cond_1_1)
                        break;
                }

                int32_t objC5 = ~i;
                void v_480;
                int32_t srcS3;
                int32_t dstD4;
                dstD4 = memcpy(&v_480, dstD2 - objC5, objC5 & 0xfffffffc);
                memcpy(dstD4, srcS3, objC5 & 3);
                int32_t dstD5 = tmpD4;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool cond_2_1 = 0 != *dstD5;
                    dstD5 += 1;
                    i_1 -= 1;

                    if (!cond_2_1)
                        break;
                }

                int32_t objC9 = ~i_1;
                void v_500;
                int32_t srcS5;
                int32_t dstD7;
                dstD7 = memcpy(&v_500, dstD5 - objC9, objC9 & 0xfffffffc);
                memcpy(dstD7, srcS5, objC9 & 3);
            }
        }

        int32_t v_558_3 = 0;
        hDC_1 = 7;

        if (Display_SetGammaRamp_3(&v_51c, hDC_1, v_558_3))
        {
            Display_SetMode(&v_51c);
            int32_t* hDC_3 = g_5ca100;

            if (hDC_3)
            {
                int32_t v_53c;
                __builtin_memset(&v_53c, 0, 0x20);
                v_53c = 0x20;
                int32_t v_538_1 = 0x40;
                int32_t valA13 = *hDC_3;
                int32_t* v_558_5 = &v_53c;
                hDC_1 = hDC_3;
                int32_t valA14 = (*(valA13 + 0x54))(hDC_1, v_558_5);

                if (!valA14)
                {
                    int32_t v_558_7 = 4;
                    hDC_1 = 0x34;
                    HDC hDC_2 = Mem_Alloc(hDC_1, v_558_7);
                    memcpy(hDC_2, a1 + 0x12c, 0x28);
                    int16_t srcS8 = v_540;
                    *(hDC_2 + 4) = *(a1 + 0x130) * v_544;
                    int32_t tmpD7 = *(a1 + 0x134) * v_544;
                    *(hDC_2 + 8) = tmpD7;
                    int32_t valA21;
                    int32_t tmpD8;
                    tmpD8 = HIGHD(srcS8 * tmpD7 * *(hDC_2 + 4));
                    valA21 = LOWD(srcS8 * tmpD7 * *(hDC_2 + 4));
                    *(hDC_2 + 0xe) = srcS8;
                    *(hDC_2 + 0x14) = (valA21 + (tmpD8 & 7)) >> 3;
                    *(hDC_2 + 8) = -(tmpD7);

                    if (srcS8 == 0x10 || srcS8 == 0x20)
                    {
                        *(hDC_2 + 0x10) = 3;
                        int32_t v_52c;
                        *(hDC_2 + 0x28) = v_52c;
                        int32_t v_528;
                        *(hDC_2 + 0x2c) = v_528;
                        int32_t v_524;
                        *(hDC_2 + 0x30) = v_524;
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
                            int32_t v_558_9 = 4;
                            hDC_1 = *(a1 + 0x140);
                            void* valA26 = Mem_Alloc(hDC_1, v_558_9);
                            *(a1 + 0x160) = valA26;

                            if (valA26)
                            {
                                int32_t v_558_10 = 4;
                                hDC_1 = *(*(a1 + 0x154) + 0x14);
                                void* result = Mem_Alloc(hDC_1, v_558_10);
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
                    char* v_558_6 = "Couldn't read pixel format";
                    void v_400;
                    hDC_1 = &v_400;
                    Game_DataSymbolLoad(hDC_1, v_558_6);
                    int32_t v_564_1 = DDERR_GENERIC(valA14);
                    void* v_568 = &v_400;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
            }
        }
    }

    Display_CreateSurface(&g_5c8e48);
    int32_t valA29;
    valA29 = 0;
    return 0;
}
