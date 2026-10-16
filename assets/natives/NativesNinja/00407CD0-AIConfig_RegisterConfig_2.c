#include "00407CD0-AIConfig_RegisterConfig_2.h"
/* 0x00407cd0 AIConfig_RegisterConfig_2 full linked: callers=2 callees=0 */
int32_t AIConfig_RegisterConfig_2(int32_t a1)

{
    if (a1 >= 0 && a1 < 0x180)
        return *(a1 * 0x30 + &g_af5f05);

    return 0;
}
