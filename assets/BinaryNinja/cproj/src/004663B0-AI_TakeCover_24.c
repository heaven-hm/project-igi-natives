#include "gi_platform.h"
#include "004663B0-AI_TakeCover_24.h"
void* AI_TakeCover_24(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = ((*(int32_t*)(uintptr_t)(a1 + 0x70)) & 0xfffffffd) | 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = 0;
    return a1;
}
