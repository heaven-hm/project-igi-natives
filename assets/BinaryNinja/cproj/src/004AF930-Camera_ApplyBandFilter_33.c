#include "gi_platform.h"
#include "004AF930-Camera_ApplyBandFilter_33.h"
void** Camera_ApplyBandFilter_33(int32_t* a1)

{
    void** result = *a1;

    if (result == &a1[1])
        return 0;

    void* objC1 = *result;
    *a1 = objC1;
    *(objC1 + 4) = a1;
    result[1] = 0;
    *result = nullptr;
    return result;
}
