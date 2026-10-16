#include "gi_platform.h"
#include "00471330-BinocularOverlay_Action.h"
int32_t* BinocularOverlay_Action(int80_t a1 , void* a2)

{
    if (Script_FormatString_6(a2 + 0x24))
    {
        Script_SpawnNewTask_7(a2 + 0x24, a2);
        (*(int32_t*)(uintptr_t)(a2 + 0x74)) = a1;
    }

    int32_t* valA4 = (*(int32_t*)(uintptr_t)(a2 + 0x20));

    if (!(*(int32_t*)(uintptr_t)(a2 + 0x74)))
    {
        if (valA4)
        {
            valA4 = *valA4;

            if (valA4)
            {
                QTask_FindType(valA4);
                valA4 = Qtask_UpdateList((*(int32_t*)(uintptr_t)(a2 + 0x20)));
                (*(int32_t*)(uintptr_t)(a2 + 0x20)) = 0;
            }
        }
    }
    else if (!valA4)
    {
        int32_t* valA8 =
            QTask_LinkEventHandler_2(Weapon_UpdateRecoil_2(GameScreen_Process(*(Level_LoadLevel_6() + 0x44))));
        (*(int32_t*)(uintptr_t)(a2 + 0x20)) = valA8;
        return valA8;
    }

    return valA4;
}
