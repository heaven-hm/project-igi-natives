#include "gi_platform.h"
#include "00407BB0-AIConfig_ApplyProfile.h"
int32_t AIConfig_ApplyProfile(void* a1)

{
    __builtin_memset(a1 + 0x20, 0, 0x6e8);
    (*(int32_t*)(uintptr_t)(a1 + 0x6fc)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0xffffffff;
    return 0;
}
