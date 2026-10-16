#include "004248A0-Menu_UpdateLanguage_14.h"
/* 0x004248a0 Menu_UpdateLanguage_14 full linked: callers=10 callees=1 */
char* Menu_UpdateLanguage_14(void* a1, void* a2, int32_t a3, char* a4, int32_t a5, int32_t* a6, char** a7)

{
    void* ebx = a1;
    char* result = *(ebx + 0x44);
    char* result_1;

    if (!result)
        result_1 = nullptr;
    else
    {
        result = Menu_RequestScreen_4(result);
        result_1 = result;
    }

    int32_t ecx = *(result_1 + 0xc);

    if (ecx <= a2)
        result = 0;
    else
    {
        int32_t edx = *(result_1 + 0x10);

        if (edx <= a3)
            result = 0;
        else
        {
            result = a4;

            if (ecx >= a2 + result || edx >= a3 + a5)
                result = 0;
            else
                result = 1;
        }
    }

    char edx_1 = *result_1;
    a1 = result;
    char ecx_2;

    if ((!edx_1 || !*(ebx + 0x4a)) && (!result_1[1] || !result))
        ecx_2 = 0;
    else
        ecx_2 = 1;

    if (!*(ebx + 0x4a) || !result_1[2] || !result)
        result = 0;
    else
        result = 1;

    if (!edx_1)
    {
        if (!a1)
            edx_1 = 0;
        else
            edx_1 = 1;
    }
    else if (!ecx_2 || !a1)
        edx_1 = 0;
    else
        edx_1 = 1;

    *(ebx + 0x4a) = ecx_2;
    char ecx_3;

    if (*(ebx + 0x49) || result_1[3])
        ecx_3 = 1;
    else
        ecx_3 = 0;

    *(ebx + 0x48) = ecx_3;
    *(ebx + 0x49) = edx_1;
    *(ebx + 0x4b) = result;

    if (a6)
        *a6 = *(result_1 + 0xc);

    if (a7)
    {
        result = *(result_1 + 0x10);
        *a7 = result;
    }

    return result;
}
