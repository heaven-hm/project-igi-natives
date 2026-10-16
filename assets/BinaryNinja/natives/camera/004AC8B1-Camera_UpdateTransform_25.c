#include "Camera_UpdateTransform_25.h"
int32_t* Camera_UpdateTransform_25(int32_t a1, int32_t* a2)

{
    int32_t* result = a2;
    int32_t* objC1 = a1 - result;
    int32_t i_1 = 3;
    int32_t i;

    do
    {
        *(objC1 + result) = *result;
        result = &result[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
