// IGI native provenance: Display_CloseDevice_2 - 0x00490680 - CFG score 97.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490680-Display_CloseDevice_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_2.h"
HRESULT Display_CloseDevice_2(void* context, void* param_2)

{
    int32_t dest_val = 0;
    void item_400;
    QFile_AliasResolve(&item_400, param_2, 0);
    HRESULT data_2 = AVIFileOpenA(context + 0x2c, Sys_FreeMemory_7(&item_400), 0x20, nullptr);

    if (data_2)
    {
        data_2 = 0;
        return data_2;
    }

    if (AVIFileInfoA((context + 0x2c)->vtable, context + 0x30, 0x6c))
    {
        Display_CreateSurface(&g_5c8e48);
        int32_t data_6;
        data_6 = 0;
        return 0;
    }

    int32_t lParam = 0;

    if (*(context + 0x3c) > 0)
    {
        do
        {
            struct IAVIFile pfile = *(context + 0x2c);
            uint32_t fccType = 0;
            struct IAVIStream pavi;
            struct IAVIStream* ppavi = &pavi;
            pavi = 0;
            AVIFileGetStream(pfile, ppavi, fccType, lParam);
            struct IAVIStream pavi_1 = pavi;
            struct AVISTREAMINFOA psi;

            if (pavi_1 && !AVIStreamInfoA(pavi_1, &psi, 0x8c))
            {
                if (psi.fccType == 0x73646976)
                {
                    struct IAVIStream pavi_2 = pavi;
                    memcpy(context + 0xa0, &psi, 0x8c);
                    *(context + 0x9c) = pavi_2;
                    dest_val = 1;
                }
                else
                    AVIStreamRelease(pavi);
            }

            lParam += 1;
        } while (lParam < *(context + 0x3c));

        if (dest_val)
        {
            *(context + 0x1c) = 0xffffffff;
            *(context + 0x20) = 0xffffffff;
            int32_t item_4a8_8 = 0x3c;
            *(context + 0xc) =
                COMBINE(0, *(context + 0xc0) * 0x3e8) / (COMBINE(0, *(context + 0xb8)) / *(context + 0xb4));
            Timer_Commit(item_4a8_8);
            int32_t lpcbFormat;
            AVIStreamReadFormat(*(context + 0x9c), 0, 0, &lpcbFormat);

            if (lpcbFormat != 0x28)
            {
                Display_CreateSurface(&g_5c8e48);
                int32_t data_22;
                data_22 = 0;
                return 0;
            }

            HRESULT data_24 = AVIStreamReadFormat(*(context + 0x9c), 0, context + 0x12c, &lpcbFormat);

            if (!data_24)
            {
                data_24 = 1;
                return data_24;
            }

            Display_CreateSurface(&g_5c8e48);
            int32_t data_26;
            data_26 = 0;
            return 0;
        }
    }

    Display_CreateSurface(&g_5c8e48);
    int32_t data_11;
    data_11 = 0;
    return 0;
}
