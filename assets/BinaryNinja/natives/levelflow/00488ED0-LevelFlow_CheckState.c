// Original IGI.EXE function: LevelFlow_CheckState (VA 0x00488ED0; static CFG gate PASS, CFG score 1.000).
#include "LevelFlow_CheckState.h"

int32_t* LevelFlow_CheckState(void* pThis)

{
    g_bc2360 = pThis;
    Level_InitSprites_6();
    Script_ExecuteLevelScript_6(pThis + 0x7c);
    Script_ExecuteLevelScript_6(pThis + 0xcc);
    memset(pThis + 0x20, 0, 0x18);
    *(pThis + 0x38) = 0x3f800000;
    *(pThis + 0x3c) = 0;
    *(pThis + 0x40) = 0;
    *(pThis + 0x44) = 0;
    *(pThis + 0x48) = 0x3f800000;
    *(pThis + 0x4c) = 0;
    *(pThis + 0x50) = 0;
    *(pThis + 0x54) = 0;
    *(pThis + 0x58) = 0x3f800000;
    *(pThis + 0x5c) = 0;
    *(pThis + 0x70) = 0;
    *(pThis + 0x74) = 0;
    *(pThis + 0x78) = 0;
    *(pThis + 0x60) = 0;
    *(pThis + 0x61) = 0;
    *(pThis + 0x68) = 0;
    *(pThis + 0x11c) = 0;
    int32_t* result_val_1 = Config_GetActivePlayerProfileRecord();

    if (result_val_1)
        *(pThis + 0x64) = *result_val_1;
    else
    {
        Warning_Show("LevelFlow: No player profile found");
        *(pThis + 0x64) = 1;
    }

    int32_t* result =
        Menu_Manager(*(Level_LoadLevel_6() + 0x44), "LOCAL:menusystem/ingamemenu.qsc", 0, 0, 0);
    *(pThis + 0x120) = result;
    return result;
}
