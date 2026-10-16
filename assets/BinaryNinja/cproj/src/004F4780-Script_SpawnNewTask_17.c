#include "gi_platform.h"
#include "004F4780-Script_SpawnNewTask_17.h"
int32_t Script_SpawnNewTask_17(void* a1, int32_t* a2)

{
    int32_t* valA = *a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = *valA;
    (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = valA[1];
    (*(int32_t*)(uintptr_t)(a1 + 0x110)) = valA[2];
    memcpy(a1 + 0x70, &valA[0xa], 0x28);
    (*(int32_t*)(uintptr_t)(a1 + 0x720)) = valA[0x14];
    (*(int32_t*)(uintptr_t)(a1 + 0x724)) = valA[0x15];
    (*(int32_t*)(uintptr_t)(a1 + 0x728)) = valA[0x16];
    (*(int32_t*)(uintptr_t)(a1 + 0x72c)) = valA[0x17];
    (*(int32_t*)(uintptr_t)(a1 + 0x730)) = valA[0x18];
    (*(int32_t*)(uintptr_t)(a1 + 0x734)) = valA[0x19];
    (*(int32_t*)(uintptr_t)(a1 + 0x738)) = valA[0x1a];
    int32_t result = valA[0x1b];
    (*(int32_t*)(uintptr_t)(a1 + 0x73c)) = result;
    return result;
}
