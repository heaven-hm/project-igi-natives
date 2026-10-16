#include "Display_CloseDevice_2.h"
HRESULT Display_CloseDevice_2(void* a1, void* a2)

{
    int32_t dstD = 0;
    void v_400;
    QFile_AliasResolve(&v_400, a2, 0);
    HRESULT valA2 = AVIFileOpenA(a1 + 0x2c, Sys_FreeMemory_7(&v_400), 0x20, nullptr);

    if (valA2)
    {
        valA2 = 0;
        return valA2;
    }

    if (AVIFileInfoA((a1 + 0x2c)->vtable, a1 + 0x30, 0x6c))
    {
        Display_CreateSurface(&g_5c8e48);
        int32_t valA6;
        valA6 = 0;
        return 0;
    }

    int32_t lParam = 0;

    if (*(a1 + 0x3c) > 0)
    {
        do
        {
            struct IAVIFile pfile = *(a1 + 0x2c);
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
                    memcpy(a1 + 0xa0, &psi, 0x8c);
                    *(a1 + 0x9c) = pavi_2;
                    dstD = 1;
                }
                else
                    AVIStreamRelease(pavi);
            }

            lParam += 1;
        } while (lParam < *(a1 + 0x3c));

        if (dstD)
        {
            *(a1 + 0x1c) = 0xffffffff;
            *(a1 + 0x20) = 0xffffffff;
            int32_t v_4a8_8 = 0x3c;
            *(a1 + 0xc) =
                COMBINE(0, *(a1 + 0xc0) * 0x3e8) / (COMBINE(0, *(a1 + 0xb8)) / *(a1 + 0xb4));
            Timer_Commit(v_4a8_8);
            int32_t lpcbFormat;
            AVIStreamReadFormat(*(a1 + 0x9c), 0, 0, &lpcbFormat);

            if (lpcbFormat != 0x28)
            {
                Display_CreateSurface(&g_5c8e48);
                int32_t valA22;
                valA22 = 0;
                return 0;
            }

            HRESULT valA24 = AVIStreamReadFormat(*(a1 + 0x9c), 0, a1 + 0x12c, &lpcbFormat);

            if (!valA24)
            {
                valA24 = 1;
                return valA24;
            }

            Display_CreateSurface(&g_5c8e48);
            int32_t valA26;
            valA26 = 0;
            return 0;
        }
    }

    Display_CreateSurface(&g_5c8e48);
    int32_t valA11;
    valA11 = 0;
    return 0;
}
