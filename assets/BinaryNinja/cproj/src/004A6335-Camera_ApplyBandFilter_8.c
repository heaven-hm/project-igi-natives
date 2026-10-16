#include "gi_platform.h"
#include "004A6335-Camera_ApplyBandFilter_8.h"
PSTR Camera_ApplyBandFilter_8()

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t v_8 = objC;
    int32_t valA = g_9361b8;
    PSTR lpMultiByteStr_3 = nullptr;
    PWSTR srcS = nullptr;
    char* penv = nullptr;

    if (!valA)
    {
        srcS = GetEnvironmentStringsW();

        if (!srcS)
        {
            penv = GetEnvironmentStrings();

            if (!penv)
                return nullptr;

            g_9361b8 = 2;
    label_4a6414: ;
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

            PSTR srcS1 = Camera_ApplyHandiCam_20(penv_1 - penv + 1);

            if (srcS1)
                Camera_ResetMatrix_20(srcS1, penv, penv_1 - penv + 1);
            else
                srcS1 = nullptr;

            FreeEnvironmentStringsA(penv);
            return srcS1;
        }

        g_9361b8 = 1;
    }
    else if (valA != 1)
    {
        if (valA != 2)
            return nullptr;

        goto label_4a6414;
    }

    if (!srcS)
    {
        srcS = GetEnvironmentStringsW();

        if (!srcS)
            return nullptr;
    }

    PWSTR valA4 = srcS;

    if (*srcS)
    {
        while (true)
        {
            valA4 = &valA4[1];

            if (!*valA4)
            {
                valA4 = &valA4[1];

                if (!*valA4)
                    break;
            }
        }
    }

    int32_t cbMultiByte =
        WideCharToMultiByte(0, 0, srcS, ((valA4 - srcS) >> 1) + 1, nullptr, 0, nullptr, nullptr);

    if (cbMultiByte)
    {
        PSTR lpMultiByteStr = Camera_ApplyHandiCam_20(cbMultiByte);
        PSTR lpMultiByteStr_1 = lpMultiByteStr;

        if (lpMultiByteStr)
        {
            int32_t valA10;
            void** objC2;
            valA10 = WideCharToMultiByte(0, 0, srcS, ((valA4 - srcS) >> 1) + 1, lpMultiByteStr,
                cbMultiByte, nullptr, nullptr);

            if (!valA10)
            {
                PSTR lpMultiByteStr_2 = lpMultiByteStr_1;
                Camera_UpdateTransform_9(objC2);
                lpMultiByteStr_1 = nullptr;
            }

            lpMultiByteStr_3 = lpMultiByteStr_1;
        }
    }

    FreeEnvironmentStringsW(srcS);
    return lpMultiByteStr_3;
}
