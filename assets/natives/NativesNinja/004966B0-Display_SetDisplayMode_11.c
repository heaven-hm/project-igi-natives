#include "004966B0-Display_SetDisplayMode_11.h"
/* 0x004966b0 Display_SetDisplayMode_11 full linked: callers=2 callees=0 */
int32_t* sub_4966b0(int32_t* a1, int32_t** a2)

{
    int32_t* result = a1;
    void* ecx = *result;

    if (ecx)
        *(ecx + 4) = result[1];

    int32_t* ecx_1 = result[1];

    if (ecx_1)
        *ecx_1 = *result;

    if (*a2 == result)
    {
        result = *result;
        *a2 = result;
    }

    return result;
}
