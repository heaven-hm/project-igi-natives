// Original IGI.EXE function: Vehicle_LoadParameters (VA 0x004F46E0; static CFG gate FAIL, CFG score 0.667).
#include "Vehicle_LoadParameters.h"
int32_t* Vehicle_LoadParameters(void* context, int32_t* param_2)

{
    int32_t* result = *param_2;
    *result = *(context + 0x108);
    result[1] = *(context + 0x10c);
    result[2] = *(context + 0x110);
    memcpy(&result[4], context + 0x20, 0x18);
    memcpy(param_2[2], context + 0x20, 0x18);
    memcpy(&result[0xa], context + 0x70, 0x28);
    result[0x14] = *(context + 0x720);
    result[0x15] = *(context + 0x724);
    result[0x16] = *(context + 0x728);
    result[0x17] = *(context + 0x72c);
    result[0x18] = *(context + 0x730);
    result[0x19] = *(context + 0x734);
    result[0x1a] = *(context + 0x738);
    result[0x1b] = *(context + 0x73c);
    return result;
}
