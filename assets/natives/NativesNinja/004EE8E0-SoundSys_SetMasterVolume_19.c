#include "004EE8E0-SoundSys_SetMasterVolume_19.h"
/* 0x004ee8e0 SoundSys_SetMasterVolume_19 full linked: callers=1 callees=1 */
char* sub_4ee8e0(int32_t* a1, char* a2, int16_t a3, int16_t a4)

{
    *(a2 + 0xc) = a3;
    *(a2 + 0xe) = a4;
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 2;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    a2[6] = 0;
    a2[7] = 0;
    *(a2 + 8) = 0;
    *(a2 + 0xa) = 0;
    a2[0x10] = 0x18;
    a2[0x11] = 0x20;

    if (!a1)
        return a2;

    return sub_4b1700(a1, a2, 0x12);
}
