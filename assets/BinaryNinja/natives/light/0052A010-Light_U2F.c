// Original IGI.EXE function: Light_U2F (VA 0x0052A010; static CFG gate PASS, CFG score 1.000).
#include "Light_U2F.h"
int32_t __convention("regparm") Light_U2F(int32_t a1, int32_t a2, int32_t a3, void* a4)

{
    int32_t v_4 = a3;
    v_4 = g_54f494;
    SoundSys_InitSoundSys_11(0x14, 5);
    void* v_14 = a4 + 0x1a8;
    SoundSys_Update3DPosition_11("%s");
    SoundSys_InitSoundSys_11(0x14, 6);
    int32_t v_24 = *(a4 + 0x1b8);
    SoundSys_Update3DPosition_11("A:%d");
    SoundSys_InitSoundSys_11(0x14, 7);
    int32_t v_34 = *(a4 + 0x1bc);
    SoundSys_Update3DPosition_11("B:%d");
    SoundSys_InitSoundSys_11(0x14, 8);
    SoundSys_Update3DPosition_11("U:%.2f");
    SoundSys_InitSoundSys_11(0x14, 9);
    SoundSys_Update3DPosition_11("U:%.2f");
    bool valA3 = *(a4 + 0x215);
    v_4 += *(a4 + 0x214) * 0xe0;
    bool cond_0 = *(a4 + 0x216);
    *(&v_4 + 1) += valA3 * 0xe0;
    *(&v_4 + 2) += cond_0 * 0xe0;
    SoundSys_InitSoundSys_11(0x14, 0xa);
    int32_t* v_20 = &v_4;
    SoundSys_Update3DPosition_11("L:%s");
    int32_t result = SoundSys_InitSoundSys_11(0x14, 0xb);
    int32_t srcS1 = *(a4 + 0x218);

    if (srcS1 > 3)
        return result;

    switch (srcS1)
    {
        case 0:
        {
            return SoundSys_Update3DPosition_11("M:World");
            break;
        }
        case 1:
        {
            return SoundSys_Update3DPosition_11("M:Object");
            break;
        }
        case 2:
        {
            return SoundSys_Update3DPosition_11("M:Speed");
            break;
        }
        case 3:
        {
            return SoundSys_Update3DPosition_11("M:Angles");
            break;
        }
    }
}
