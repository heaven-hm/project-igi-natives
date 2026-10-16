#include "gi_platform.h"
#include "004635B0-AI_FireWeapon_20.h"
int32_t AI_FireWeapon_20(void* a1)

{
    __builtin_memset(a1 + 0x110, 0, 0xa0);
    __builtin_memset(a1 + 0x1b0, 0, 0xa0);
    (*(int32_t*)(uintptr_t)(a1 + 0x250)) = 1;
    return 0;
}
