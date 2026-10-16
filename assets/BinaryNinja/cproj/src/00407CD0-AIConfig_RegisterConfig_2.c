#include "gi_platform.h"
#include "00407CD0-AIConfig_RegisterConfig_2.h"
int32_t AIConfig_RegisterConfig_2(int32_t a1)

{
    if (a1 >= 0 && a1 < 0x180)
        return (*(int32_t*)(uintptr_t)(a1 * 0x30 + &g_af5f05));

    return 0;
}
