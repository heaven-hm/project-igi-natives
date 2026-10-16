#include "gi_platform.h"
#include "0041EC70-ListBox_LoadParameters.h"
int32_t ListBox_LoadParameters(void* a1)

{
    int32_t valA = 0;
    void* dstD = (*(int32_t*)(uintptr_t)(a1 + 0xd4));
    int32_t flagP = (*(int32_t*)(uintptr_t)(a1 + 0xbe8));
    void* ctxB = (*(int32_t*)(uintptr_t)(a1 + 0xd8));
    valA = (*(int32_t*)(uintptr_t)(dstD + 0x1c));
    ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)((valA << 2) + &g_a970e0))))(dstD);
    int32_t objC = 0;
    objC = (*(int32_t*)(uintptr_t)(ctxB + 0x1c));
    ((int(*)())(uintptr_t)(*((objC << 2) + &g_a970e0)))(ctxB);
    int32_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xbe0));

    if (objC1)
    {
        int32_t valA3;

        if (!(*(int32_t*)(uintptr_t)(dstD + 0x4b)))
            valA3 = (*(int32_t*)(uintptr_t)(a1 + 0x50));

        if ((*(int32_t*)(uintptr_t)(dstD + 0x4b)) || valA3 == 0xffffffff)
        {
            int32_t tmpD5 = (*(int32_t*)(uintptr_t)(a1 + 0xbe4)) - 1;
            (*(int32_t*)(uintptr_t)(a1 + 0xbe4)) = tmpD5;

            if (tmpD5 == 0xffffffff)
                (*(int32_t*)(uintptr_t)(a1 + 0xbe4)) = objC1 - 1;
        }
        else if ((*(int32_t*)(uintptr_t)(ctxB + 0x4b)) || valA3 == 0xfffffffe)
            (*(int32_t*)(uintptr_t)(a1 + 0xbe4)) = ((*(int32_t*)(uintptr_t)(a1 + 0xbe4)) + 1) % objC1;

        (*(int32_t*)(uintptr_t)(a1 + 0xbe8)) = (*(int32_t*)(uintptr_t)(a1 + *(a1 + 0xbe4) * 0x2c + 0xe0));
    }

    int32_t valA11 = (*(int32_t*)(uintptr_t)(a1 + 0xbe8));
    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = 0;

    if (flagP != valA11)
    {
        SoundSys_AttachLipsync_8("menu_high", 0, 0);
        Script_SpawnNewTask_7(a1 + 0xce8, a1);
    }

    return ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a970e0)))(a1);
}
