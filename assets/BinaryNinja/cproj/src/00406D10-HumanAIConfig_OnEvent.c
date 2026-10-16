#include "gi_platform.h"
#include "00406D10-HumanAIConfig_OnEvent.h"
int32_t HumanAIConfig_OnEvent(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x24)) = Sys_CheckHeap_22(a1 + 0x128);
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = Sys_CheckHeap_22(a1 + 0x28);
    return (AIConfig_RegisterConfig(a1), 0);
}
