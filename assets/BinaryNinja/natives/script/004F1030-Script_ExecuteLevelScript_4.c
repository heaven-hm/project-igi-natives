#include "Script_ExecuteLevelScript_4.h"
int32_t Script_ExecuteLevelScript_4(int32_t a1)

{
    if (a1 >= 0 && a1 < 0x1000)
    {
        int32_t* valA = *((a1 << 2) + &g_a71890);

        if (valA)
            return *valA;
    }

    return 0;
}
