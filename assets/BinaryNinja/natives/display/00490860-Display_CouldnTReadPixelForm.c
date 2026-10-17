// IGI native provenance: Display_CouldnTReadPixelForm - 0x00490860 - CFG score 89.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490860-Display_CouldnTReadPixelForm.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CouldnTReadPixelForm.h"
void* Display_CouldnTReadPixelForm(void* context)

{
    int32_t flagP = 1;
    int32_t item_540 = 0x10;
    int32_t item_544 = 1;
    HWND hWnd = FX_FragmentSimulate_23();
    HDC hDC_1;
    int32_t data_val;

    if (!hWnd)
    {
        HDC hDC = GetDC(hWnd);
        int32_t index = 0xc;
        hDC_1 = hDC;
        data_val = GetDeviceCaps(hDC_1, index);
        hDC_1 = nullptr;
        item_540 = data_val;
        ReleaseDC(hDC_1, hDC);
    }

    if (hWnd || data_val != 8)
    {
        int32_t entity_1 = *(context + 0x130);

        if (entity_1 < 0x280)
        {
            item_544 = 2;
            flagP = 2;
        }

        int32_t data_1 = 0;
        data_1 = *(context + 0x13a);
        int32_t data_4;
        int32_t temp_1;
        temp_1 = HIGHD(data_1 * *(context + 0x134) * entity_1);
        data_4 = LOWD(data_1 * *(context + 0x134) * entity_1);
        int32_t data_6 = (data_4 + (temp_1 & 7)) >> 3;

        if (*(context + 0x140) < data_6)
            *(context + 0x140) = data_6;

        void item_51c;
        memset(&item_51c, 0, 0x11c);
        int32_t item_504_1 = Display_CheckCapabilities_7();
        char item_506_1 = 1;
        int32_t item_518_1 = *(context + 0x130) * flagP;
        int32_t item_514_1 = *(context + 0x134) * flagP;
        char item_508_1 = 0;
        int32_t item_50c_1 = item_540;
        char item_507_1 = 0;
        int32_t item_510_1 = 1;
        int32_t data_10 = Display_CheckCapabilities_7();
        int32_t dest_2 = g_5c9f9c;
        int32_t item_504_2 = data_10;
        char item_506_2 = 1;

        if (dest_2)
        {
            int32_t temp_4 = g_5c9fa0;

            if (temp_4)
            {
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool flag_1_1 = 0 != *dest_2;
                    dest_2 += 1;
                    i -= 1;

                    if (!flag_1_1)
                        break;
                }

                int32_t entity_5 = ~i;
                void item_480;
                int32_t source_3;
                int32_t dest_4;
                dest_4 = memcpy(&item_480, dest_2 - entity_5, entity_5 & 0xfffffffc);
                memcpy(dest_4, source_3, entity_5 & 3);
                int32_t dest_5 = temp_4;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool flag_2_1 = 0 != *dest_5;
                    dest_5 += 1;
                    i_1 -= 1;

                    if (!flag_2_1)
                        break;
                }

                int32_t entity_9 = ~i_1;
                void item_500;
                int32_t source_5;
                int32_t dest_7;
                dest_7 = memcpy(&item_500, dest_5 - entity_9, entity_9 & 0xfffffffc);
                memcpy(dest_7, source_5, entity_9 & 3);
            }
        }

        int32_t item_558_3 = 0;
        hDC_1 = 7;

        if (Display_SetGammaRamp_3(&item_51c, hDC_1, item_558_3))
        {
            Display_SetMode(&item_51c);
            int32_t* hDC_3 = g_5ca100;

            if (hDC_3)
            {
                int32_t item_53c;
                memset(&item_53c, 0, 0x20);
                item_53c = 0x20;
                int32_t item_538_1 = 0x40;
                int32_t data_13 = *hDC_3;
                int32_t* item_558_5 = &item_53c;
                hDC_1 = hDC_3;
                int32_t data_14 = (*(data_13 + 0x54))(hDC_1, item_558_5);

                if (!data_14)
                {
                    int32_t item_558_7 = 4;
                    hDC_1 = 0x34;
                    HDC hDC_2 = Mem_Alloc(hDC_1, item_558_7);
                    memcpy(hDC_2, context + 0x12c, 0x28);
                    int16_t source_8 = item_540;
                    *(hDC_2 + 4) = *(context + 0x130) * item_544;
                    int32_t temp_7 = *(context + 0x134) * item_544;
                    *(hDC_2 + 8) = temp_7;
                    int32_t data_21;
                    int32_t temp_8;
                    temp_8 = HIGHD(source_8 * temp_7 * *(hDC_2 + 4));
                    data_21 = LOWD(source_8 * temp_7 * *(hDC_2 + 4));
                    *(hDC_2 + 0xe) = source_8;
                    *(hDC_2 + 0x14) = (data_21 + (temp_8 & 7)) >> 3;
                    *(hDC_2 + 8) = -(temp_7);

                    if (source_8 == 0x10 || source_8 == 0x20)
                    {
                        *(hDC_2 + 0x10) = 3;
                        int32_t item_52c;
                        *(hDC_2 + 0x28) = item_52c;
                        int32_t item_528;
                        *(hDC_2 + 0x2c) = item_528;
                        int32_t item_524;
                        *(hDC_2 + 0x30) = item_524;
                    }

                    uint32_t fccHandler = *(context + 0xa4);
                    uint16_t wFlags = 3;
                    hDC_1 = hDC_2;
                    uint32_t fccType;
                    strncpy(&fccType, "vidc", 4);
                    *(context + 0x154) = hDC_2;
                    HIC hic = ICLocate(fccType, fccHandler, context + 0x12c, hDC_1, wFlags);
                    *(context + 0x15c) = hic;

                    if (hic)
                    {
                        uint32_t dw2 = *(context + 0x154);
                        hDC_1 = context + 0x12c;

                        if (!ICSendMessage(hic, 0x400c, hDC_1, dw2))
                        {
                            int32_t item_558_9 = 4;
                            hDC_1 = *(context + 0x140);
                            void* data_26 = Mem_Alloc(hDC_1, item_558_9);
                            *(context + 0x160) = data_26;

                            if (data_26)
                            {
                                int32_t item_558_10 = 4;
                                hDC_1 = *(*(context + 0x154) + 0x14);
                                void* result = Mem_Alloc(hDC_1, item_558_10);
                                *(context + 0x164) = result;

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
                    char* item_558_6 = "Couldn't read pixel format";
                    void item_400;
                    hDC_1 = &item_400;
                    Game_DataSymbolLoad(hDC_1, item_558_6);
                    int32_t item_564_1 = DDERR_GENERIC(data_14);
                    void* item_568 = &item_400;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
            }
        }
    }

    Display_CreateSurface(&g_5c8e48);
    int32_t data_29;
    data_29 = 0;
    return 0;
}
