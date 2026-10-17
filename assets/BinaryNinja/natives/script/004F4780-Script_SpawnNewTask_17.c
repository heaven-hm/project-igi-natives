// Original IGI.EXE function: Script_SpawnNewTask_17 (VA 0x004F4780; static CFG gate FAIL, CFG score 0.667).
#include "Script_SpawnNewTask_17.h"
int32_t Script_SpawnNewTask_17(void* a1, int32_t* a2)

{
    int32_t* valA = *a2;
    *(a1 + 0x108) = *valA;
    *(a1 + 0x10c) = valA[1];
    *(a1 + 0x110) = valA[2];
    memcpy(a1 + 0x70, &valA[0xa], 0x28);
    *(a1 + 0x720) = valA[0x14];
    *(a1 + 0x724) = valA[0x15];
    *(a1 + 0x728) = valA[0x16];
    *(a1 + 0x72c) = valA[0x17];
    *(a1 + 0x730) = valA[0x18];
    *(a1 + 0x734) = valA[0x19];
    *(a1 + 0x738) = valA[0x1a];
    int32_t result = valA[0x1b];
    *(a1 + 0x73c) = result;
    return result;
}
