#include "gi_platform.h"
#include "004658D0-AI_AlertAllies_23.h"
void* AI_AlertAllies_23(void* a1, int32_t a2, int32_t a3)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x13a)) = 1;
    memcpy(a1 + 0x140, a2, 0x18);
    memcpy(a1 + 0x158, a3, 0x28);
    return a1;
}
