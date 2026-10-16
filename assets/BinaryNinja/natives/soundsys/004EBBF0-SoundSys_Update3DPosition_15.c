#include "SoundSys_Update3DPosition_15.h"
int32_t SoundSys_Update3DPosition_15(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    memcpy(a1 + 0x20, a2, 0x28);
    memcpy(a1 + 0x48, a3, 0x18);
    Display_CloseDevice_12(a2, a3, &v_18);
    return a3;
}
