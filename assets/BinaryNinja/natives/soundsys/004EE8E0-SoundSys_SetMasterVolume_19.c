// Original IGI.EXE function: SoundSys_SetMasterVolume_19 (VA 0x004EE8E0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_19.h"
char* SoundSys_SetMasterVolume_19(int32_t* a1, char* a2, int16_t a3, int16_t a4)

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

    return Sys_CloseFileStream_4(a1, a2, 0x12);
}
