// Original IGI.EXE function: SoundDefGraph_LoadParameters (VA 0x004EA600; static CFG gate FAIL, CFG score 0.809).
#include "SoundDefGraph_LoadParameters.h"
int32_t SoundDefGraph_LoadParameters(void* a1, int32_t* a2)

{
    SoundSys_SetFrequency_14(a1);

    if (!a2)
        *(a1 + 0xd4) = 1;
    else
    {
        void* tmpD1 = *a2;
        memcpy(a1 + 0xa0, tmpD1 + 0xa0, 0x18);
        memcpy(a1 + 0x88, tmpD1 + 0xa0, 0x18);
        *(a1 + 0xb8) = *(tmpD1 + 0xb8);
        *(a1 + 0xbc) = *(tmpD1 + 0xbc);
        *(a1 + 0xc0) = *(tmpD1 + 0xc0);
        *(a1 + 0xc8) = *(tmpD1 + 0xc8);
        *(a1 + 0xcc) = *(tmpD1 + 0xcc);
        *(a1 + 0xd0) = *(tmpD1 + 0xd0);
        *(a1 + 0xd8) = *(tmpD1 + 0xd8);
        *(a1 + 0xdc) = *(tmpD1 + 0xdc);
        *(a1 + 0xe0) = *(tmpD1 + 0xe0);
        *(a1 + 0xe4) = *(tmpD1 + 0xe4);
        memcpy(a1 + 0xe8, tmpD1 + 0xe8, 0x2c);
        memcpy(a1 + 0x114, tmpD1 + 0x114, 0x2c);
        void* dstD5 = tmpD1 + 0x140;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD5;
            dstD5 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC6 = ~i;
        int32_t srcS6;
        int32_t dstD8;
        dstD8 = memcpy(a1 + 0x140, dstD5 - objC6, objC6 & 0xfffffffc);
        memcpy(dstD8, srcS6, objC6 & 3);
        void* dstD9 = tmpD1 + 0x160;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD9;
            dstD9 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC10 = ~i_1;
        int32_t srcS8;
        int32_t dstD12;
        dstD12 = memcpy(a1 + 0x160, dstD9 - objC10, objC10 & 0xfffffffc);
        memcpy(dstD12, srcS8, objC10 & 3);
        *(a1 + 0xd4) = a2[1];
        *(a1 + 0x180) = Display_CheckCapabilities_12(a1 + 0x160);
        *(a1 + 0x184) = Display_RestoreDevice_12(a1 + 0x160);
    }

    *(a1 + 0xd5) = 0;
    *(a1 + 0x20) = 0;
    *(a1 + 0x24) = 0;
    *(a1 + 0x28) = 0;
    *(a1 + 0x2c) = 0x12;
    Display_SetGammaRamp_12(a1 + 0x30);

    if (!*(a1 + 0xd4))
        SoundSys_InitSoundSys_8(a1);

    return SoundSys_EvaluateTrigger_14(a1);
}
