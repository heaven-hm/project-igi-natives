// Original IGI.EXE function: Script_FormatString_16 (VA 0x004F4680; static CFG gate PASS, CFG score 0.889).
#include "Script_FormatString_16.h"
int32_t Script_FormatString_16(uint32_t context)

{
    Script_ParseEnumInt32_28(context);
    CarGun_ConstructPath(context);
    memset(context + 0x720, 0, 0x20);
    *(context + 0x744) = 0;
    *(context + 0x745) = 1;
    return 0;
}
