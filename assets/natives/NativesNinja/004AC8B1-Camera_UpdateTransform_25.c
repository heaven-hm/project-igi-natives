#include "004AC8B1-Camera_UpdateTransform_25.h"
/* 0x004ac8b1 Camera_UpdateTransform_25 full linked: callers=2 callees=0 */
int32_t* sub_4ac8b1(int32_t a1, int32_t* a2)

{
    int32_t* result = a2;
    int32_t* ecx_1 = a1 - result;
    int32_t i_1 = 3;
    int32_t i;

    do
    {
        *(ecx_1 + result) = *result;
        result = &result[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
