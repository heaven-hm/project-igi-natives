#include "gi_platform.h"
#include "00503D50-Physics_ApplyImpulse_2.h"
int32_t Physics_ApplyImpulse_2(void* a1, char a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = a2;
    return a2;
}
