#include "gi_platform.h"
#include "00488980-EditVariable_LoadParameters.h"
int32_t EditVariable_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0x38);
    Script_ExecuteLevelScript_6(a1 + 0x88);
    (*(int32_t*)(uintptr_t)(a1 + 0xd8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xdc)) = 0;
    return 0;
}
