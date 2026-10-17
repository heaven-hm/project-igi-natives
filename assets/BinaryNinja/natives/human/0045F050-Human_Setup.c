// Original IGI.EXE function: Human_Setup (VA 0x0045F050; static CFG gate PASS, CFG score 1.000).
#include "Human_Setup.h"
int32_t* Human_Setup(float context, int32_t param_2)

{
    void* dest_val = *(Level_LoadLevel_6() + 0x5c);
    int32_t entity_val = *(SoundSys_InitSoundSys_12() + 0x54);
    int32_t* result;

    if (entity_val == dest_val)
        result = *(dest_val + 0x68);

    if (entity_val != dest_val || *result != context || *(dest_val + 0xe8) != 1)
    {
        AI_CheckHearing_17(context);
        (*(((Render_DrawSplineMesh_4() * 0x180 + Render_DrawRigidMesh_12()) << 2) + &g_a96ae0))(context, param_2);
        result = Table_GetAt(context + 0x4c4, 0);

        if (result)
        {
            int32_t item_48 = 0;
            uint32_t data_8 = Weapon_UpdateRecoil_5();
            int32_t data_9 = 0;
            data_9 = *(context + 0x1c);
            (*(((data_8 * 0x180 + data_9) << 2) + &g_a96ae0))(context, &item_48);
            void item_40;
            void item_28;
            Script_FormatString_12(result, &item_40, &item_28);
            return (*(((Render_DrawSplineMesh_4() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0))(result, param_2);
        }
    }

    return result;
}
