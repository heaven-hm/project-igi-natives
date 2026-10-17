// Original IGI.EXE function: HumanAIConfig_OnEvent (VA 0x00406D10; static CFG gate PASS, CFG score 1.000).
#include "HumanAIConfig_OnEvent.h"
int32_t HumanAIConfig_OnEvent(void* context)

{
    *(context + 0x24) = Sys_CheckHeap_22(context + 0x128);
    *(context + 0x20) = Sys_CheckHeap_22(context + 0x28);
    return AIConfig_RegisterConfig(context);
}
