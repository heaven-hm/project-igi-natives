#include "004B8A20-Script_GetArg.h"
/* 0x004b8a20 Script_GetArg full linked: callers=231 callees=2 */
int32_t sub_4b8a20(float a1, int32_t a2)

{
    if (!*(a1 + 4))
        return sub_4b9120(*(*(a1 + 8) + (a2 << 2)));

    int32_t edx;
    return sub_4bcab0(a1, edx, a2, a1, a2);
}
