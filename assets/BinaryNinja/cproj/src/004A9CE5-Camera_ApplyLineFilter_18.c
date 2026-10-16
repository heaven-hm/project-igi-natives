#include "gi_platform.h"
#include "004A9CE5-Camera_ApplyLineFilter_18.h"
🌐  long double __fastcall __fload_withFB(int32_t a1, double* a2)

{
    if (((*(int32_t*)(uintptr_t)(a2 + 4)) & 0x7ff00000) != 0x7ff00000)
        return *a2;

    int32_t v_4 = (*(int32_t*)(uintptr_t)(a2 + 4)) | 0x7fff0000;
    int32_t objC = *a2;
    int32_t v_6 = (*(int32_t*)(uintptr_t)(a2 + 4)) << 0xb | objC >> 0x15;
    (*(int32_t*)(uintptr_t)(a2 + 4));
    return (objC << 0xb);
}
