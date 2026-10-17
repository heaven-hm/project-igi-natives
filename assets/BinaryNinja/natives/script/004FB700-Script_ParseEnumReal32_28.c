// Original IGI.EXE function: Script_ParseEnumReal32_28 (VA 0x004FB700; static CFG gate PASS, CFG score 0.889).
#include "Script_ParseEnumReal32_28.h"
int32_t Script_ParseEnumReal32_28(void* context, char* param_2)

{
    void* flagP;

    if (!param_2)
    {
        flagP = context;
        SoundSys_Update3DPosition_17(flagP + 0xf0, 1000.0f, 9420.7998f, 20070.4004f, 6144.0f);
        *(flagP + 0x68c) = 0;
    }
    else
    {
        flagP = context;
        *(flagP + 0x1b4) = param_2;
        long double fpu_val_7_2 = *(SoundSys_AttachLipsync_18(param_2) + 8) * 4096.0f;
        long double fpu_val_7_4 = *(SoundSys_AttachLipsync_18(*(flagP + 0x1b4)) + 4) * 4096.0f;
        long double fpu_val_7_6 = *SoundSys_AttachLipsync_18(*(flagP + 0x1b4)) * 4096.0f;
        SoundSys_Update3DPosition_17(flagP + 0xf0, *(*(flagP + 0x1b4) + 8), fpu_val_7_6, fpu_val_7_4, fpu_val_7_2);
        void* temp_1 = *(flagP + 0x1b4);
        int32_t i_1 = 0x16;
        *(flagP + 0xfc) = *(flagP + 0xfc) * 1.00999999f;
        *(flagP + 0x100) = *(flagP + 0x100) * 1.00999999f;
        *(flagP + 0x104) = *(flagP + 0x104) * 1.00999999f;
        *(flagP + 0x68c) = *(temp_1 + 0x148);
        char* data_7 = flagP + 0x1d5;
        int32_t i;

        do
        {
            *data_7 = 0;
            data_7 = &data_7[0x38];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        context = nullptr;

        if (*(flagP + 0x68c) > 0)
        {
            int32_t dest_1 = 0;
            int32_t* source_2 = flagP + 0x1bc;
            bool flag_0_1;

            do
            {
                source_2[1] = *(dest_1 + *(flagP + 0x1b4) + 0x154);
                *source_2 = *(dest_1 + *(flagP + 0x1b4) + 0x150);
                source_2[2] = *(dest_1 + *(flagP + 0x1b4) + 0x158);
                source_2[6] = 1;
                *(source_2 + 0x19) = 1;
                *(source_2 + 0x1a) = 0;
                source_2[7] = *(dest_1 + *(flagP + 0x1b4) + 0x15c);
                source_2[8] = *(dest_1 + *(flagP + 0x1b4) + 0x160);
                source_2[0xd] = 0;
                void* item_c;
                Render_BindTexture(&item_c, flagP, *(dest_1 + *(flagP + 0x1b4) + 0x14c), &param_2[0x138]);
                int32_t* data_13 = &source_2[3];
                dest_1 += 0x18;
                source_2 = &source_2[0xe];
                *data_13 = item_c;
                int32_t item_8;
                data_13[1] = item_8;
                int32_t item_4;
                data_13[2] = item_4;
                flag_0_1 = context + 1 < *(flagP + 0x68c);
                context += 1;
            } while (flag_0_1);
        }
    }

    memcpy(flagP + 0x6c0, flagP + 0x20, 0x18);
    *(flagP + 0x708) = 0;
    memcpy(flagP + 0x694, flagP + 0x70, 0x28);
    *(flagP + 0x1b8) = 0;
    *(flagP + 0x690) = 0;
    memset(flagP + 0x70c, 0, 0x14);
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
