// Original IGI.EXE function: Menu_UpdateLanguage_14 (VA 0x004248A0; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_14.h"
char* Menu_UpdateLanguage_14(void* a1, void* a2, int32_t a3, char* a4, int32_t a5, int32_t* a6, char** a7)

{
    void* ctxB = a1;
    char* result = *(ctxB + 0x44);
    char* result_1;

    if (!result)
        result_1 = nullptr;
    else
    {
        result = Menu_RequestScreen_4(result);
        result_1 = result;
    }

    int32_t objC = *(result_1 + 0xc);

    if (objC <= a2)
        result = 0;
    else
    {
        int32_t tmpD = *(result_1 + 0x10);

        if (tmpD <= a3)
            result = 0;
        else
        {
            result = a4;

            if (objC >= a2 + result || tmpD >= a3 + a5)
                result = 0;
            else
                result = 1;
        }
    }

    char tmpD1 = *result_1;
    a1 = result;
    char objC2;

    if ((!tmpD1 || !*(ctxB + 0x4a)) && (!result_1[1] || !result))
        objC2 = 0;
    else
        objC2 = 1;

    if (!*(ctxB + 0x4a) || !result_1[2] || !result)
        result = 0;
    else
        result = 1;

    if (!tmpD1)
    {
        if (!a1)
            tmpD1 = 0;
        else
            tmpD1 = 1;
    }
    else if (!objC2 || !a1)
        tmpD1 = 0;
    else
        tmpD1 = 1;

    *(ctxB + 0x4a) = objC2;
    char objC3;

    if (*(ctxB + 0x49) || result_1[3])
        objC3 = 1;
    else
        objC3 = 0;

    *(ctxB + 0x48) = objC3;
    *(ctxB + 0x49) = tmpD1;
    *(ctxB + 0x4b) = result;

    if (a6)
        *a6 = *(result_1 + 0xc);

    if (a7)
    {
        result = *(result_1 + 0x10);
        *a7 = result;
    }

    return result;
}
