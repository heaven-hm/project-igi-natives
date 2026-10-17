// Original IGI.EXE function: Camera_ApplyBandFilter_8 (VA 0x004A6335; static CFG gate PASS, CFG score 0.889).
#include "Camera_ApplyBandFilter_8.h"
PSTR Camera_ApplyBandFilter_8()

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t item_8 = entity_val;
    int32_t data_val = g_9361b8;
    PSTR lpMultiByteStr_3 = nullptr;
    PWSTR source_val = nullptr;
    char* penv = nullptr;

    if (!data_val)
    {
        source_val = GetEnvironmentStringsW();

        if (!source_val)
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

            PSTR source_1 = Camera_ApplyHandiCam_20(penv_1 - penv + 1);

            if (source_1)
                Camera_ResetMatrix_20(source_1, penv, penv_1 - penv + 1);
            else
                source_1 = nullptr;

            FreeEnvironmentStringsA(penv);
            return source_1;
        }

        g_9361b8 = 1;
    }
    else if (data_val != 1)
    {
        if (data_val != 2)
            return nullptr;

        goto label_4a6414;
    }

    if (!source_val)
    {
        source_val = GetEnvironmentStringsW();

        if (!source_val)
            return nullptr;
    }

    PWSTR data_4 = source_val;

    if (*source_val)
    {
        while (true)
        {
            data_4 = &data_4[1];

            if (!*data_4)
            {
                data_4 = &data_4[1];

                if (!*data_4)
                    break;
            }
        }
    }

    int32_t cbMultiByte =
        WideCharToMultiByte(0, 0, source_val, ((data_4 - source_val) >> 1) + 1, nullptr, 0, nullptr, nullptr);

    if (cbMultiByte)
    {
        PSTR lpMultiByteStr = Camera_ApplyHandiCam_20(cbMultiByte);
        PSTR lpMultiByteStr_1 = lpMultiByteStr;

        if (lpMultiByteStr)
        {
            int32_t data_10;
            void** entity_2;
            data_10 = WideCharToMultiByte(0, 0, source_val, ((data_4 - source_val) >> 1) + 1, lpMultiByteStr,
                cbMultiByte, nullptr, nullptr);

            if (!data_10)
            {
                PSTR lpMultiByteStr_2 = lpMultiByteStr_1;
                Camera_UpdateTransform_9(entity_2);
                lpMultiByteStr_1 = nullptr;
            }

            lpMultiByteStr_3 = lpMultiByteStr_1;
        }
    }

    FreeEnvironmentStringsW(source_val);
    return lpMultiByteStr_3;
}
