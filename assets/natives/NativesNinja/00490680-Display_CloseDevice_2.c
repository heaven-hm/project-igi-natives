#include "00490680-Display_CloseDevice_2.h"
/* 0x00490680 Display_CloseDevice_2 full linked: callers=1 callees=15 */
HRESULT sub_490680(void* a1, void* a2)

{
    int32_t edi = 0;
    void var_400;
    QFile_AliasResolve(&var_400, a2, 0);
    HRESULT eax_2 = AVIFileOpenA(a1 + 0x2c, sub_4b1e70(&var_400), 0x20, nullptr);

    if (eax_2)
    {
        eax_2 = 0;
        return eax_2;
    }

    if (AVIFileInfoA((a1 + 0x2c)->vtable, a1 + 0x30, 0x6c))
    {
        sub_4903b0(&g_5c8e48);
        int32_t eax_6;
        eax_6 = 0;
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
                    edi = 1;
                }
                else
                    AVIStreamRelease(pavi);
            }

            lParam += 1;
        } while (lParam < *(a1 + 0x3c));

        if (edi)
        {
            *(a1 + 0x1c) = 0xffffffff;
            *(a1 + 0x20) = 0xffffffff;
            int32_t var_4a8_8 = 0x3c;
            *(a1 + 0xc) =
                COMBINE(0, *(a1 + 0xc0) * 0x3e8) / (COMBINE(0, *(a1 + 0xb8)) / *(a1 + 0xb4));
            Timer_Commit(var_4a8_8);
            int32_t lpcbFormat;
            AVIStreamReadFormat(*(a1 + 0x9c), 0, 0, &lpcbFormat);

            if (lpcbFormat != 0x28)
            {
                sub_4903b0(&g_5c8e48);
                int32_t eax_22;
                eax_22 = 0;
                return 0;
            }

            HRESULT eax_24 = AVIStreamReadFormat(*(a1 + 0x9c), 0, a1 + 0x12c, &lpcbFormat);

            if (!eax_24)
            {
                eax_24 = 1;
                return eax_24;
            }

            sub_4903b0(&g_5c8e48);
            int32_t eax_26;
            eax_26 = 0;
            return 0;
        }
    }

    sub_4903b0(&g_5c8e48);
    int32_t eax_11;
    eax_11 = 0;
    return 0;
}
