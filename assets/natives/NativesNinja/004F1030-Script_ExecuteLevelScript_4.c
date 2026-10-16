#include "004F1030-Script_ExecuteLevelScript_4.h"
/* 0x004f1030 Script_ExecuteLevelScript_4 full linked: callers=49 callees=0 */
int32_t sub_4f1030(int32_t a1)

{
    if (a1 >= 0 && a1 < 0x1000)
    {
        int32_t* eax = *((a1 << 2) + &g_a71890);

        if (eax)
            return *eax;
    }

    return 0;
}
