#include "004E7540-Screen_Process.h"
/* 0x004e7540 Screen_Process full linked: callers=1 callees=1 */
int32_t sub_4e7540(int32_t a1, char a2)

{
    if (g_a5ea65)
        return 0;

    memcpy(0xa5e620, a1, 0x11c);
    g_a5ea64 = a2;
    g_a5ea65 = 1;
    return 1;
}
