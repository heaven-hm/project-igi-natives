#include "004A5FD7-Camera_ResetMatrix_7.h"
/* 0x004a5fd7 Camera_ResetMatrix_7 full linked: callers=1 callees=2 */
char* sub_4a5fd7()

{
    if (!g_c32548)
        sub_4aa562();

    char* result = g_c32554;
    char eax_1 = *result;

    if (eax_1 == 0x22)
    {
        while (true)
        {
            eax_1 = result[1];
            result = &result[1];

            if (eax_1 == 0x22)
                break;

            if (!eax_1)
                break;

            if (sub_4aa15c(eax_1))
                result = &result[1];
        }

        if (*result == 0x22)
            goto label_4a6014;
    }
    else if (eax_1 > 0x20)
    {
        do
            result = &result[1];
         while (*result > 0x20);
    }

    while (true)
    {
        eax_1 = *result;

        if (!eax_1 || eax_1 > 0x20)
            return result;

    label_4a6014:
        result = &result[1];
    }
}
