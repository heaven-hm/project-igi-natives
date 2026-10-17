// Original IGI.EXE function: Menu_LocalMenusystemSound (VA 0x00417B80; static CFG gate PASS, CFG score 1.000).
#include "Menu_LocalMenusystemSound.h"
int32_t Menu_LocalMenusystemSound(void* context)

{
    int32_t i = 0;

    if (*(context + 0x2664) > 0)
    {
        int32_t* flagP1 = context + 0x824;

        do
        {
            Sys_ReadFileBlock_17(flagP1);
            i += 1;
            flagP1 = &flagP1[0x16];
        } while (i < *(context + 0x2664));
    }

    int32_t i_1 = 0;

    if (*(context + 0x2668) > 0)
    {
        int32_t* flagP2 = context + 0x1e24;

        do
        {
            Sys_CheckHeap_17(*flagP2);
            i_1 += 1;
            flagP2 = &flagP2[0x11];
        } while (i_1 < *(context + 0x2668));
    }

    int32_t i_2 = 0;

    if (*(context + 0x2666) > 0)
    {
        int32_t* flagP3 = context + 0x2a4;

        do
        {
            Sys_ReadFileBlock_17(flagP3);
            i_2 += 1;
            flagP3 = &flagP3[0x16];
        } while (i_2 < *(context + 0x2666));
    }

    void* i_4 = *(context + 0x260);

    if (i_4)
    {
        void* i_3;

        do
        {
            i_3 = *(i_4 + 0x84);
            Qhash_Init(1);
            Sys_ExecuteBytecode_2(i_4);
            Qhash_Reset();
            i_4 = i_3;
        } while (i_3);
    }

    char data_1 = *(context + 0x26bf);
    *(context + 0x2664) = 0;
    *(context + 0x2668) = 0;
    *(context + 0x2666) = 0;
    *(context + 0x260) = 0;

    if (data_1)
    {
        Qhash_Init(1);
        SoundSys_LoadSoundDef_6("LOCAL:menusystem/sound/sounds.res");
        *(context + 0x26bf) = 0;
        Qhash_Reset();
    }

    int32_t data_2 = *(context + 0x1d4);

    if (data_2)
    {
        Resource_Flush(data_2);
        *(context + 0x1d4) = 0;
    }

    int32_t data_3 = *(context + 0x1d8);

    if (data_3)
    {
        Resource_Flush(data_3);
        *(context + 0x1d8) = 0;
    }

    int32_t result = *(context + 0x25c);
    int32_t flagP4 = 0;

    if (result > 0)
    {
        int32_t* dest_val = context + 0x1dc;

        do
        {
            Resource_Flush(*dest_val);
            *dest_val = 0;
            result = *(context + 0x25c);
            flagP4 += 1;
            dest_val = &dest_val[1];
        } while (flagP4 < result);
    }

    *(context + 0x25c) = 0;
    return result;
}
