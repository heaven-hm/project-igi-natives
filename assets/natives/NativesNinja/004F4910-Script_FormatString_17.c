#include "004F4910-Script_FormatString_17.h"
/* 0x004f4910 Script_FormatString_17 full linked: callers=4 callees=0 */
int32_t sub_4f4910(int32_t a1, int32_t a2, int32_t a3) __pure

{
    int32_t eax = a3;

    if (eax < 0)
        eax = 0;

    if (eax < a2)
        return a1 + (eax << 3);

    return a1 + (a2 << 3) - 8;
}
