// Original IGI.EXE function: Camera_ResetMatrix_7 (VA 0x004A5FD7; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_7.h"
char* Camera_ResetMatrix_7()

{
    if (!g_c32548)
        Camera_SetFieldOfView_20();

    char* result = g_c32554;
    char data_1 = *result;

    if (data_1 == 0x22)
    {
        while (true)
        {
            data_1 = result[1];
            result = &result[1];

            if (data_1 == 0x22)
                break;

            if (!data_1)
                break;

            if (Camera_ApplyBandFilter_19(data_1))
                result = &result[1];
        }

        if (*result == 0x22)
            goto label_4a6014;
    }
    else if (data_1 > 0x20)
    {
        do
            result = &result[1];
         while (*result > 0x20);
    }

    while (true)
    {
        data_1 = *result;

        if (!data_1 || data_1 > 0x20)
            return result;

    label_4a6014:
        result = &result[1];
    }
}
