#include "004A6335-Camera_ApplyBandFilter_8.h"
/* 0x004a6335 Camera_ApplyBandFilter_8 full linked: callers=1 callees=12 */
PSTR sub_4a6335()

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t var_8 = ecx;
    int32_t eax = g_9361b8;
    PSTR lpMultiByteStr_3 = nullptr;
    PWSTR esi = nullptr;
    char* penv = nullptr;

    if (!eax)
    {
        esi = GetEnvironmentStringsW();

        if (!esi)
        {
            penv = GetEnvironmentStrings();

            if (!penv)
                return nullptr;

            g_9361b8 = 2;
        label_4a6414:

            if (!penv)
            {
                penv = GetEnvironmentStrings();

                if (!penv)
                    return nullptr;
            }

            char* penv_1 = penv;

            if (*penv)
            {
                while (true)
                {
                    penv_1 = &penv_1[1];

                    if (!*penv_1)
                    {
                        penv_1 = &penv_1[1];

                        if (!*penv_1)
                            break;
                    }
                }
            }

            PSTR esi_1 = sub_4aa670(penv_1 - penv + 1);

            if (esi_1)
                sub_4aa7b0(esi_1, penv, penv_1 - penv + 1);
            else
                esi_1 = nullptr;

            FreeEnvironmentStringsA(penv);
            return esi_1;
        }

        g_9361b8 = 1;
    }
    else if (eax != 1)
    {
        if (eax != 2)
            return nullptr;

        goto label_4a6414;
    }

    if (!esi)
    {
        esi = GetEnvironmentStringsW();

        if (!esi)
            return nullptr;
    }

    PWSTR eax_4 = esi;

    if (*esi)
    {
        while (true)
        {
            eax_4 = &eax_4[1];

            if (!*eax_4)
            {
                eax_4 = &eax_4[1];

                if (!*eax_4)
                    break;
            }
        }
    }

    int32_t cbMultiByte =
        WideCharToMultiByte(0, 0, esi, ((eax_4 - esi) >> 1) + 1, nullptr, 0, nullptr, nullptr);

    if (cbMultiByte)
    {
        PSTR lpMultiByteStr = sub_4aa670(cbMultiByte);
        PSTR lpMultiByteStr_1 = lpMultiByteStr;

        if (lpMultiByteStr)
        {
            int32_t eax_10;
            void** ecx_2;
            eax_10 = WideCharToMultiByte(0, 0, esi, ((eax_4 - esi) >> 1) + 1, lpMultiByteStr,
                cbMultiByte, nullptr, nullptr);

            if (!eax_10)
            {
                PSTR lpMultiByteStr_2 = lpMultiByteStr_1;
                sub_4a6a50(ecx_2);
                lpMultiByteStr_1 = nullptr;
            }

            lpMultiByteStr_3 = lpMultiByteStr_1;
        }
    }

    FreeEnvironmentStringsW(esi);
    return lpMultiByteStr_3;
}
