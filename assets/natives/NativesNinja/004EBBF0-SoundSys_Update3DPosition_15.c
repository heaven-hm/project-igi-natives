#include "004EBBF0-SoundSys_Update3DPosition_15.h"
/* 0x004ebbf0 SoundSys_Update3DPosition_15 full linked: callers=1 callees=4 */
int32_t sub_4ebbf0(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    memcpy(a1 + 0x20, a2, 0x28);
    memcpy(a1 + 0x48, a3, 0x18);
    sub_496e00(a2, a3, &var_18);
    return a3;
}
