#include "004F17D0-Script_ParseEnumString_7.h"
/* 0x004f17d0 Script_ParseEnumString_7 full linked: callers=1 callees=0 */
int32_t sub_4f17d0(char* a1)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t result = 0;
    char ebx = 0;
    char i = *a1;
    int32_t ecx_1 = 1;
    *(&var_4 + 3) = 0;
    char* edx = a1;

    if (i == 0x2e)
        goto label_4f1801;

    while (i)
    {
        i = edx[1];
        edx = &edx[1];

        if (i == 0x2e)
            break;
    }

    if (edx >= a1)
    {
        ebx = 0;
    label_4f1801:

        while (true)
        {
            i = edx[0xffffffff];
            edx -= 1;

            if (i < 0x30 || i > 0x39)
            {
                if (!ebx)
                    break;

                return result;
            }

            ebx = 1;
            result += (i - 0x30) * ecx_1;
            ecx_1 *= 0xa;

            if (edx < a1)
                break;

            continue;
        }
    }

    return 0xffffffff;
}
