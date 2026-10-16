#include "gi_platform.h"
#include "00487EB0-GuardGenerator_LoadParameters.h"
int32_t GuardGenerator_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0x20);
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x71)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x72)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = 0;
    return 0;
}
