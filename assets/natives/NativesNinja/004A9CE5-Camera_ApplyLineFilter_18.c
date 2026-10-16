#include "004A9CE5-Camera_ApplyLineFilter_18.h"
/* 0x004a9ce5 Camera_ApplyLineFilter_18 full linked: callers=3 callees=0 */
🌐  long double __fastcall __fload_withFB(int32_t a1, double* a2)

{
    if ((*(a2 + 4) & 0x7ff00000) != 0x7ff00000)
        return *a2;

    int32_t var_4 = *(a2 + 4) | 0x7fff0000;
    int32_t ecx = *a2;
    int32_t var_6 = *(a2 + 4) << 0xb | ecx >> 0x15;
    *(a2 + 4);
    return (ecx << 0xb);
}
