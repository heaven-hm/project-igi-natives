#include "Camera_ApplyBandFilter_4.h"
int32_t* Camera_ApplyBandFilter_4(PSTR a1, char* a2, int32_t a3)

{
    int32_t* result = Camera_ApplyLineFilter_10();

    if (result)
        return Camera_SetFieldOfView_10(a1, a2, a3, result);

    return result;
}
