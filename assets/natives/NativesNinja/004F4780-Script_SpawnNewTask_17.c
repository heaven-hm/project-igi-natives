#include "004F4780-Script_SpawnNewTask_17.h"
/* 0x004f4780 Script_SpawnNewTask_17 full linked: callers=3 callees=1 */
int32_t sub_4f4780(void* a1, int32_t* a2)

{
    int32_t* eax = *a2;
    *(a1 + 0x108) = *eax;
    *(a1 + 0x10c) = eax[1];
    *(a1 + 0x110) = eax[2];
    memcpy(a1 + 0x70, &eax[0xa], 0x28);
    *(a1 + 0x720) = eax[0x14];
    *(a1 + 0x724) = eax[0x15];
    *(a1 + 0x728) = eax[0x16];
    *(a1 + 0x72c) = eax[0x17];
    *(a1 + 0x730) = eax[0x18];
    *(a1 + 0x734) = eax[0x19];
    *(a1 + 0x738) = eax[0x1a];
    int32_t result = eax[0x1b];
    *(a1 + 0x73c) = result;
    return result;
}
