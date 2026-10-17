// Original IGI.EXE function: Weapon_CycleFireMode_5 (VA 0x004788D0; static CFG gate PASS, CFG score 1.000).
#include "Weapon_CycleFireMode_5.h"
int32_t Weapon_CycleFireMode_5(void* a1)

{
    char result = *(a1 + 0xf0);

    if (result)
    {
        result = DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
        *(a1 + 0xf0) = 0;
    }

    return result;
}
