#include "Script_FormatString_16.h"
int32_t Script_FormatString_16(uint32_t a1)

{
    Script_ParseEnumInt32_28(a1);
    CarGun_ConstructPath(a1);
    __builtin_memset(a1 + 0x720, 0, 0x20);
    *(a1 + 0x744) = 0;
    *(a1 + 0x745) = 1;
    return 0;
}
