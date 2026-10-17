// Original IGI.EXE function: Camera_ApplyBandFilter_33 (VA 0x004AF930; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_33.h"
void** Camera_ApplyBandFilter_33(int32_t* context)

{
    void** result = *context;

    if (result == &context[1])
        return 0;

    void* entity_1 = *result;
    *context = entity_1;
    *(entity_1 + 4) = context;
    result[1] = 0;
    *result = nullptr;
    return result;
}
