#include "gi_platform.h"
#include "004FB700-Script_ParseEnumReal32_28.h"
int32_t Script_ParseEnumReal32_28(void* a1, char* a2)

{
    void* flagP;

    if (!a2)
    {
        flagP = a1;
        SoundSys_Update3DPosition_17(flagP + 0xf0, 1000.0f, 9420.7998.0f, 20070.4004.0f, 6144.0f);
        *(flagP + 0x68c) = 0;
    }
    else
    {
        flagP = a1;
        *(flagP + 0x1b4) = a2;
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(SoundSys_AttachLipsync_18(a2) + 8)) * 4096.0f;
        long double x87_r7_4 = *(SoundSys_AttachLipsync_18(*(flagP + 0x1b4)) + 4) * 4096.0f;
        long double x87_r7_6 = *SoundSys_AttachLipsync_18(*(flagP + 0x1b4)) * 4096.0f;
        SoundSys_Update3DPosition_17(flagP + 0xf0, *(*(flagP + 0x1b4) + 8), x87_r7_6, x87_r7_4, x87_r7_2);
        void* tmpD1 = *(flagP + 0x1b4);
        int32_t i_1 = 0x16;
        *(flagP + 0xfc) = *(flagP + 0xfc) * 1.00999999.0f;
        *(flagP + 0x100) = *(flagP + 0x100) * 1.00999999.0f;
        *(flagP + 0x104) = *(flagP + 0x104) * 1.00999999.0f;
        *(flagP + 0x68c) = *(tmpD1 + 0x148);
        char* valA7 = flagP + 0x1d5;
        int32_t i;

        do
        {
            *valA7 = 0;
            valA7 = &valA7[0x38];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        a1 = nullptr;

        if (*(flagP + 0x68c) > 0)
        {
            int32_t dstD1 = 0;
            int32_t* srcS2 = flagP + 0x1bc;
            bool cond_0_1;

            do
            {
                srcS2[1] = *(dstD1 + *(flagP + 0x1b4) + 0x154);
                *srcS2 = *(dstD1 + *(flagP + 0x1b4) + 0x150);
                srcS2[2] = *(dstD1 + *(flagP + 0x1b4) + 0x158);
                srcS2[6] = 1;
                *(srcS2 + 0x19) = 1;
                *(srcS2 + 0x1a) = 0;
                srcS2[7] = *(dstD1 + *(flagP + 0x1b4) + 0x15c);
                srcS2[8] = *(dstD1 + *(flagP + 0x1b4) + 0x160);
                srcS2[0xd] = 0;
                void* v_c;
                Render_BindTexture(&v_c, flagP, *(dstD1 + *(flagP + 0x1b4) + 0x14c), &a2[0x138]);
                int32_t* valA13 = &srcS2[3];
                dstD1 += 0x18;
                srcS2 = &srcS2[0xe];
                *valA13 = v_c;
                int32_t v_8;
                valA13[1] = v_8;
                int32_t v_4;
                valA13[2] = v_4;
                cond_0_1 = a1 + 1 < *(flagP + 0x68c);
                a1 += 1;
            } while (cond_0_1);
        }
    }

    memcpy(flagP + 0x6c0, flagP + 0x20, 0x18);
    *(flagP + 0x708) = 0;
    memcpy(flagP + 0x694, flagP + 0x70, 0x28);
    *(flagP + 0x1b8) = 0;
    *(flagP + 0x690) = 0;
    __builtin_memset(flagP + 0x70c, 0, 0x14);
    *(flagP + 0x6dc) = 0x3f800000;
    *(flagP + 0x6e0) = 0;
    *(flagP + 0x6e4) = 0;
    *(flagP + 0x6e8) = 0;
    *(flagP + 0x6ec) = 0x3f800000;
    *(flagP + 0x6f0) = 0;
    *(flagP + 0x6f4) = 0;
    *(flagP + 0x6f8) = 0;
    *(flagP + 0x6fc) = 0x3f800000;
    *(flagP + 0x700) = 0;
    return 0x3f800000;
}
