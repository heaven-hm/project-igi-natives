#include "gi_platform.h"
#include "004E7540-Screen_Process.h"
int32_t Screen_Process(int32_t a1, char a2)

{
    if (g_a5ea65)
        return 0;

    memcpy(0xa5e620, a1, 0x11c);
    g_a5ea64 = a2;
    g_a5ea65 = 1;
    return 1;
}
