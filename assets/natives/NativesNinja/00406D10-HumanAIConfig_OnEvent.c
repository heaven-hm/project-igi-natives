#include "00406D10-HumanAIConfig_OnEvent.h"
/* 0x00406d10 HumanAIConfig_OnEvent full linked: callers=0 callees=3 */
int32_t HumanAIConfig_OnEvent(void* a1)

{
    *(a1 + 0x24) = sub_4b8770(a1 + 0x128);
    *(a1 + 0x20) = sub_4b8770(a1 + 0x28);
    return AIConfig_RegisterConfig(a1);
}
