// Original IGI.EXE function: Light_UpdateGlobalLight_5 (VA 0x005268E0; static CFG gate PASS, CFG score 1.000).
#include "Light_UpdateGlobalLight_5.h"
int32_t* Light_UpdateGlobalLight_5(int32_t context)

{
    int32_t entity_3 = g_a83d00;
    int32_t* result = *(g_a83cfc + (entity_3 << 2)) * g_a83d08 + g_a83cf8;
    *(g_a83d0c + result) = entity_3;
    g_a83d00 += 1;
    *result = context;
    return result;
}
