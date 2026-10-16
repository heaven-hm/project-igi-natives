#include "Camera_ApplyBandFilter_28.h"
void* Camera_ApplyBandFilter_28(char* a1, int32_t a2)

{
    char* valA = a1;
    int32_t objC = a2 - 1;

    if (a2)
    {
        while (*valA)
        {
            valA = &valA[1];
            int32_t srcS1 = objC;
            objC -= 1;

            if (!srcS1)
                break;
        }
    }

    if (*valA)
        return a2;

    return valA - a1;
}
