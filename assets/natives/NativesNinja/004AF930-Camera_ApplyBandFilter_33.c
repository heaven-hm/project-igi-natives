#include "004AF930-Camera_ApplyBandFilter_33.h"
/* 0x004af930 Camera_ApplyBandFilter_33 full linked: callers=1 callees=0 */
void** sub_4af930(int32_t* a1)

{
    void** result = *a1;

    if (result == &a1[1])
        return 0;

    void* ecx_1 = *result;
    *a1 = ecx_1;
    *(ecx_1 + 4) = a1;
    result[1] = 0;
    *result = nullptr;
    return result;
}
