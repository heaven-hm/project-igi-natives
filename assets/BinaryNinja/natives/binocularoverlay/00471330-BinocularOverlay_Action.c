#include "BinocularOverlay_Action.h"
int32_t* BinocularOverlay_Action(int80_t a1 @ fp0, void* a2)

{
    if (Script_FormatString_6(a2 + 0x24))
    {
        Script_SpawnNewTask_7(a2 + 0x24, a2);
        *(a2 + 0x74) = a1;
    }

    int32_t* valA4 = *(a2 + 0x20);

    if (!*(a2 + 0x74))
    {
        if (valA4)
        {
            valA4 = *valA4;

            if (valA4)
            {
                QTask_FindType(valA4);
                valA4 = Qtask_UpdateList(*(a2 + 0x20));
                *(a2 + 0x20) = 0;
            }
        }
    }
    else if (!valA4)
    {
        int32_t* valA8 =
            QTask_LinkEventHandler_2(Weapon_UpdateRecoil_2(GameScreen_Process(*(Level_LoadLevel_6() + 0x44))));
        *(a2 + 0x20) = valA8;
        return valA8;
    }

    return valA4;
}
