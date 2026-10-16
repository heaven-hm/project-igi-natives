#include "gi_platform.h"
#include "00444BC0-Env_CheckAmbientArea_6.h"
void* Env_CheckAmbientArea_6(void* a1)

{
    char objC = (*(int32_t*)(uintptr_t)(a1 + 0x1c4));
    (*(int32_t*)(uintptr_t)(a1 + 0x1c4)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x1c5)) = objC;
    (*(int32_t*)(uintptr_t)(a1 + 0x1c8)) = *(g_bc2360 + 0x68);
    return a1;
}
