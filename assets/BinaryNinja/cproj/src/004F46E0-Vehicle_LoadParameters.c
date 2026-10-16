#include "gi_platform.h"
#include "004F46E0-Vehicle_LoadParameters.h"
int32_t* Vehicle_LoadParameters(void* a1, int32_t* a2)

{
    int32_t* result = *a2;
    *result = (*(int32_t*)(uintptr_t)(a1 + 0x108));
    result[1] = (*(int32_t*)(uintptr_t)(a1 + 0x10c));
    result[2] = (*(int32_t*)(uintptr_t)(a1 + 0x110));
    memcpy(&result[4], a1 + 0x20, 0x18);
    memcpy(a2[2], a1 + 0x20, 0x18);
    memcpy(&result[0xa], a1 + 0x70, 0x28);
    result[0x14] = (*(int32_t*)(uintptr_t)(a1 + 0x720));
    result[0x15] = (*(int32_t*)(uintptr_t)(a1 + 0x724));
    result[0x16] = (*(int32_t*)(uintptr_t)(a1 + 0x728));
    result[0x17] = (*(int32_t*)(uintptr_t)(a1 + 0x72c));
    result[0x18] = (*(int32_t*)(uintptr_t)(a1 + 0x730));
    result[0x19] = (*(int32_t*)(uintptr_t)(a1 + 0x734));
    result[0x1a] = (*(int32_t*)(uintptr_t)(a1 + 0x738));
    result[0x1b] = (*(int32_t*)(uintptr_t)(a1 + 0x73c));
    return result;
}
