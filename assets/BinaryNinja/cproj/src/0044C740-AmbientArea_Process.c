#include "gi_platform.h"
#include "0044C740-AmbientArea_Process.h"
int32_t AmbientArea_Process(void* a1)

{
    char objC = 0;
    char* dstD = a1 + 0x94;
    (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) = 0;
    char* flagP = dstD;

    while (true)
    {
        char valA1 = *dstD;

        if (valA1 != 0x20 && valA1 != 0x3b && valA1 != 0x2c && valA1)
        {
            if (!objC)
                flagP = dstD;

            objC = 1;
        }
        else if (objC)
        {
            Camera_ApplyLineFilter_5(((*(int32_t*)(uintptr_t)(a1 + 0x1b4)) << 5) + a1 + 0xb4, flagP, dstD - flagP);
            (*(int32_t*)(uintptr_t)((*(a1 + 0x1b4) << 5) - flagP + dstD + a1 + 0xb4)) = 0;
            objC = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) += 1;
        }

        if (!*dstD)
            break;

        dstD = &dstD[1];
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x90)) = (Sys_AllocateMemory_14(Level_SetMission_5()) * (*(int32_t*)(uintptr_t)(a1 + 0x88)) + (*(int32_t*)(uintptr_t)(a1 + 0x80))) * 30.0;
    Script_Isexists(a1 + 0x1bc, a1);
    return 0;
}
