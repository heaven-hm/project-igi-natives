// Original IGI.EXE function: SoundDefTriggerOnce_LoadParameters (VA 0x004E9830; static CFG gate FAIL, CFG score 0.833).
#include "SoundDefTriggerOnce_LoadParameters.h"
int32_t SoundDefTriggerOnce_LoadParameters(void* a1, int32_t* a2)

{
    SoundSys_InitSoundSys_14(a1);

    if (!a2)
        *(a1 + 0xe2) = 1;
    else
    {
        void* tmpD1 = *a2;
        memcpy(a1 + 0xa0, tmpD1 + 0xa0, 0x18);
        memcpy(a1 + 0x88, tmpD1 + 0x88, 0x18);
        void* dstD3 = tmpD1 + 0xe3;
        *(a1 + 0xb8) = *(tmpD1 + 0xb8);
        *(a1 + 0xc4) = *(tmpD1 + 0xc4);
        *(a1 + 0xc8) = *(tmpD1 + 0xc8);
        *(a1 + 0xcc) = *(tmpD1 + 0xcc);
        *(a1 + 0x12c) = *(tmpD1 + 0x12c);
        *(a1 + 0xd0) = *(tmpD1 + 0xd0);
        *(a1 + 0xd4) = *(tmpD1 + 0xd4);
        *(a1 + 0xd8) = *(tmpD1 + 0xd8);
        *(a1 + 0xdc) = *(tmpD1 + 0xdc);
        *(a1 + 0xe0) = *(tmpD1 + 0xe0);
        *(a1 + 0xe1) = *(tmpD1 + 0xe1);
        *(a1 + 0xe2) = a2[1];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD3;
            dstD3 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC11 = ~i;
        int32_t srcS4;
        int32_t dstD6;
        dstD6 = memcpy(a1 + 0xe3, dstD3 - objC11, objC11 & 0xfffffffc);
        memcpy(dstD6, srcS4, objC11 & 3);
        char* dstD7 = tmpD1 + 0x103;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD7;
            dstD7 = &dstD7[1];
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC15 = ~i_1;
        int32_t srcS6;
        int32_t dstD10;
        dstD10 = memcpy(a1 + 0x103, dstD7 - objC15, objC15 & 0xfffffffc);
        memcpy(dstD10, srcS6, objC15 & 3);
        *(a1 + 0x130) = Display_CheckCapabilities_12(tmpD1 + 0x103);
        *(a1 + 0x134) = Display_RestoreDevice_12(tmpD1 + 0x103);
    }

    *(a1 + 0x128) = 0;
    *(a1 + 0x20) = 0;
    *(a1 + 0x24) = 0;
    *(a1 + 0x28) = 0;
    *(a1 + 0x123) = 0;
    *(a1 + 0x124) = 0;
    *(a1 + 0x2c) = 2;
    Display_SetGammaRamp_12(a1 + 0x30);

    if (!*(a1 + 0xe2))
        SoundSys_InitSoundSys_8(a1);

    return SoundSys_SetMasterVolume_14(a1);
}
