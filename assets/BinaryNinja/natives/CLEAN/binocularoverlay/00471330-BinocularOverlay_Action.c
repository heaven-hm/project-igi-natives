// IGI native provenance: BinocularOverlay_Action - 0x00471330 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00471330-BinocularOverlay_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BinocularOverlay_Action.h"
int32_t* BinocularOverlay_Action(long double context , void* param_2)

{
    if (Script_FormatString_6(param_2 + 0x24))
    {
        Script_SpawnNewTask_7(param_2 + 0x24, param_2);
        *(param_2 + 0x74) = context;
    }

    int32_t* data_4 = *(param_2 + 0x20);

    if (!*(param_2 + 0x74))
    {
        if (data_4)
        {
            data_4 = *data_4;

            if (data_4)
            {
                QTask_FindType(data_4);
                data_4 = Qtask_UpdateList(*(param_2 + 0x20));
                *(param_2 + 0x20) = 0;
            }
        }
    }
    else if (!data_4)
    {
        int32_t* data_8 =
            QTask_LinkEventHandler_2(Weapon_UpdateRecoil_2(GameScreen_Process(*(Level_LoadLevel_6() + 0x44))));
        *(param_2 + 0x20) = data_8;
        return data_8;
    }

    return data_4;
}
