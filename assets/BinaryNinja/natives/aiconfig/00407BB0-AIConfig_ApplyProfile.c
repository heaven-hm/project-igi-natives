// Original IGI.EXE function: AIConfig_ApplyProfile (VA 0x00407BB0; static CFG gate FAIL, CFG score 0.667).
#include "AIConfig_ApplyProfile.h"
int32_t AIConfig_ApplyProfile(void* context)

{
    memset(context + 0x20, 0, 0x6e8);
    *(context + 0x6fc) = 1;
    *(context + 0x20) = 0xffffffff;
    return 0;
}
