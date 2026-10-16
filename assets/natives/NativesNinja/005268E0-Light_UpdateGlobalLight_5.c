#include "005268E0-Light_UpdateGlobalLight_5.h"
/* 0x005268e0 Light_UpdateGlobalLight_5 full linked: callers=1 callees=0 */
int32_t* sub_5268e0(int32_t a1)

{
    int32_t ecx_3 = g_a83d00;
    int32_t* result = *(g_a83cfc + (ecx_3 << 2)) * g_a83d08 + g_a83cf8;
    *(g_a83d0c + result) = ecx_3;
    g_a83d00 += 1;
    *result = a1;
    return result;
}
