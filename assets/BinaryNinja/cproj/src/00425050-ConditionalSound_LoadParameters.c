#include "gi_platform.h"
#include "00425050-ConditionalSound_LoadParameters.h"
int32_t ConditionalSound_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0x20);
    __builtin_memset(a1 + 0x90, 0, 0x1a);
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb1)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb2)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb3)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xac)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x120)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x124)) = 0;
    return 0;
}
