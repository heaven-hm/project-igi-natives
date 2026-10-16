#include "gi_platform.h"
#include "004A5FD7-Camera_ResetMatrix_7.h"
char* Camera_ResetMatrix_7()

{
    if (!g_c32548)
        Camera_SetFieldOfView_20();

    char* result = g_c32554;
    char valA1 = *result;

    if (valA1 == 0x22)
    {
        while (true)
        {
            valA1 = result[1];
            result = &result[1];

            if (valA1 == 0x22)
                break;

            if (!valA1)
                break;

            if (Camera_ApplyBandFilter_19(valA1))
                result = &result[1];
        }

        if (*result == 0x22)
            goto label_4a6014;
    }
    else if (valA1 > 0x20)
    {
        do
            result = &result[1];
         while (*result > 0x20);
    }

    while (true)
    {
        valA1 = *result;

        if (!valA1 || valA1 > 0x20)
            return result;
    label_4a6014: ;
        result = &result[1];
    }
}
