#include "00414FD0-WeaponType_GetConfig_2.h"
/* 0x00414fd0 WeaponType_GetConfig_2 full linked: callers=13 callees=2 */
int32_t WeaponType_GetConfig_2(void* a1)

{
    if (*(a1 + 0xc28c62) & 0x80 && g_c28c7f & 0x80 && g_c28c8c & 0x80
            && Config_GetActivePlayerProfileRecord()
            && *(Config_GetActivePlayerProfileRecord() + 0x560) >= 0xe && g_57b194)
        return 1;

    return 0;
}
