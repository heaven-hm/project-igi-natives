#include "004F4680-Script_FormatString_16.h"
/* 0x004f4680 Script_FormatString_16 full linked: callers=5 callees=3 */
int32_t sub_4f4680(uint32_t a1)

{
    sub_4fb5f0(a1);
    sub_4f4800(a1);
    __builtin_memset(a1 + 0x720, 0, 0x20);
    *(a1 + 0x744) = 0;
    *(a1 + 0x745) = 1;
    return 0;
}
