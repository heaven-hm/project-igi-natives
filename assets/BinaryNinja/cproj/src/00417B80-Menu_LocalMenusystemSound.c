#include "gi_platform.h"
#include "00417B80-Menu_LocalMenusystemSound.h"
int32_t Menu_LocalMenusystemSound(void* a1)

{
    int32_t i = 0;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x2664)) > 0)
    {
        int32_t* flagP1 = a1 + 0x824;

        do
        {
            Sys_ReadFileBlock_17(flagP1);
            i += 1;
            flagP1 = &flagP1[0x16];
        } while (i < (*(int32_t*)(uintptr_t)(a1 + 0x2664)));
    }

    int32_t i_1 = 0;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x2668)) > 0)
    {
        int32_t* flagP2 = a1 + 0x1e24;

        do
        {
            Sys_CheckHeap_17(*flagP2);
            i_1 += 1;
            flagP2 = &flagP2[0x11];
        } while (i_1 < (*(int32_t*)(uintptr_t)(a1 + 0x2668)));
    }

    int32_t i_2 = 0;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x2666)) > 0)
    {
        int32_t* flagP3 = a1 + 0x2a4;

        do
        {
            Sys_ReadFileBlock_17(flagP3);
            i_2 += 1;
            flagP3 = &flagP3[0x16];
        } while (i_2 < (*(int32_t*)(uintptr_t)(a1 + 0x2666)));
    }

    void* i_4 = (*(int32_t*)(uintptr_t)(a1 + 0x260));

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

    char valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x26bf));
    (*(int32_t*)(uintptr_t)(a1 + 0x2664)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x2668)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x2666)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x260)) = 0;

    if (valA1)
    {
        Qhash_Init(1);
        SoundSys_LoadSoundDef_6("LOCAL:menusystem/sound/sounds.res");
        (*(int32_t*)(uintptr_t)(a1 + 0x26bf)) = 0;
        Qhash_Reset();
    }

    int32_t valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x1d4));

    if (valA2)
    {
        Resource_Flush(valA2);
        (*(int32_t*)(uintptr_t)(a1 + 0x1d4)) = 0;
    }

    int32_t valA3 = (*(int32_t*)(uintptr_t)(a1 + 0x1d8));

    if (valA3)
    {
        Resource_Flush(valA3);
        (*(int32_t*)(uintptr_t)(a1 + 0x1d8)) = 0;
    }

    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x25c));
    int32_t flagP4 = 0;

    if (result > 0)
    {
        int32_t* dstD = a1 + 0x1dc;

        do
        {
            Resource_Flush(*dstD);
            *dstD = 0;
            result = (*(int32_t*)(uintptr_t)(a1 + 0x25c));
            flagP4 += 1;
            dstD = &dstD[1];
        } while (flagP4 < result);
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x25c)) = 0;
    return result;
}
