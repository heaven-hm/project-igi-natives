#include "Display_SetDisplayMode_11.h"
int32_t* Display_SetDisplayMode_11(int32_t* a1, int32_t** a2)

{
    int32_t* result = a1;
    void* objC = *result;

    if (objC)
        *(objC + 4) = result[1];

    int32_t* objC1 = result[1];

    if (objC1)
        *objC1 = *result;

    if (*a2 == result)
    {
        result = *result;
        *a2 = result;
    }

    return result;
}
