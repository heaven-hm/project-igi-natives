#include "004ACB72-Camera_UpdateTransform_26.h"
/* 0x004acb72 Camera_UpdateTransform_26 full linked: callers=3 callees=2 */
char* sub_4acb72(char* a1, char* a2, int32_t a3)

{
    int32_t edx = a3;
    char* ebx = a2;
    char* esi = a1;
    char* ecx = *(edx + 0xc);
    *esi = 0x30;
    char* result = &esi[1];

    if (ebx > 0)
    {
        a1 = ebx;
        ebx = nullptr;
        char* i;

        do
        {
            char edx_1 = *ecx;

            if (!edx_1)
                edx = 0x30;
            else
            {
                edx = edx_1;
                ecx = &ecx[1];
            }

            *result = edx;
            result = &result[1];
            i = a1;
            a1 -= 1;
        } while (i != 1);
        edx = a3;
    }

    *result = 0;

    if (ebx >= 0 && *ecx >= 0x35)
    {
        while (true)
        {
            result -= 1;

            if (*result != 0x39)
                break;

            *result = 0x30;
        }

        *result += 1;
    }

    if (*esi != 0x31)
        return sub_4acd70(esi, &esi[1], sub_4aa730(&esi[1]) + 1);

    *(edx + 4) += 1;
    return result;
}
