#include "ListBox_LoadParameters.h"
int32_t ListBox_LoadParameters(void* a1)

{
    int32_t valA = 0;
    void* dstD = *(a1 + 0xd4);
    int32_t flagP = *(a1 + 0xbe8);
    void* ctxB = *(a1 + 0xd8);
    valA = *(dstD + 0x1c);
    (*((valA << 2) + &g_a970e0))(dstD);
    int32_t objC = 0;
    objC = *(ctxB + 0x1c);
    (*((objC << 2) + &g_a970e0))(ctxB);
    int32_t objC1 = *(a1 + 0xbe0);

    if (objC1)
    {
        int32_t valA3;

        if (!*(dstD + 0x4b))
            valA3 = *(a1 + 0x50);

        if (*(dstD + 0x4b) || valA3 == 0xffffffff)
        {
            int32_t tmpD5 = *(a1 + 0xbe4) - 1;
            *(a1 + 0xbe4) = tmpD5;

            if (tmpD5 == 0xffffffff)
                *(a1 + 0xbe4) = objC1 - 1;
        }
        else if (*(ctxB + 0x4b) || valA3 == 0xfffffffe)
            *(a1 + 0xbe4) = (*(a1 + 0xbe4) + 1) % objC1;

        *(a1 + 0xbe8) = *(a1 + *(a1 + 0xbe4) * 0x2c + 0xe0);
    }

    int32_t valA11 = *(a1 + 0xbe8);
    *(a1 + 0x50) = 0;

    if (flagP != valA11)
    {
        SoundSys_AttachLipsync_8("menu_high", 0, 0);
        Script_SpawnNewTask_7(a1 + 0xce8, a1);
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
