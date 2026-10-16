#include "gi_platform.h"
#include "005268E0-Light_UpdateGlobalLight_5.h"
int32_t* Light_UpdateGlobalLight_5(int32_t a1)

{
    int32_t objC3 = g_a83d00;
    int32_t* result = *(g_a83cfc + (objC3 << 2)) * g_a83d08 + g_a83cf8;
    *(g_a83d0c + result) = objC3;
    g_a83d00 += 1;
    *result = a1;
    return result;
}
