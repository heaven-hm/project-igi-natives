// Original IGI.EXE function: Light_U2F (VA 0x0052A010; static CFG gate PASS, CFG score 1.000).
#include "Light_U2F.h"
int32_t Light_U2F(int32_t context, int32_t param_2, int32_t param_3, void* param_4)

{
    int32_t item_4 = param_3;
    item_4 = g_54f494;
    SoundSys_InitSoundSys_11(0x14, 5);
    void* item_14 = param_4 + 0x1a8;
    SoundSys_Update3DPosition_11("%s");
    SoundSys_InitSoundSys_11(0x14, 6);
    int32_t item_24 = *(param_4 + 0x1b8);
    SoundSys_Update3DPosition_11("A:%d");
    SoundSys_InitSoundSys_11(0x14, 7);
    int32_t item_34 = *(param_4 + 0x1bc);
    SoundSys_Update3DPosition_11("B:%d");
    SoundSys_InitSoundSys_11(0x14, 8);
    SoundSys_Update3DPosition_11("U:%.2f");
    SoundSys_InitSoundSys_11(0x14, 9);
    SoundSys_Update3DPosition_11("U:%.2f");
    bool data_3 = *(param_4 + 0x215);
    item_4 += *(param_4 + 0x214) * 0xe0;
    bool flag_0 = *(param_4 + 0x216);
    *(&item_4 + 1) += data_3 * 0xe0;
    *(&item_4 + 2) += flag_0 * 0xe0;
    SoundSys_InitSoundSys_11(0x14, 0xa);
    int32_t* item_20 = &item_4;
    SoundSys_Update3DPosition_11("L:%s");
    int32_t result = SoundSys_InitSoundSys_11(0x14, 0xb);
    int32_t source_1 = *(param_4 + 0x218);

    if (source_1 > 3)
        return result;

    switch (source_1)
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
