// Original IGI.EXE function: HumanView_Setup (VA 0x004644A0; static CFG gate PASS, CFG score 1.000).
#include "HumanView_Setup.h"
int32_t* HumanView_Setup(void* context, int32_t param_2)

{
    void* dest_val = *(context + 0x14);
    void* context_val = *(Level_LoadLevel_6() + 0x5c);
    int32_t* result = SoundSys_InitSoundSys_12();

    if (result[0x15] == context_val)
    {
        result = *(context_val + 0x68);

        if (*result == dest_val && *(context_val + 0xe8) == 1)
        {
            result = AI_CombatTarget_29();

            if (!result)
            {
                AI_CheckVisibility_23(context);
                (*((Render_DrawRigidMesh_12() << 2) + &g_a982e0))(context, param_2);
                result = Table_GetAt(dest_val + 0x4c4, 0);

                if (result)
                {
                    int32_t item_48 = 1;
                    uint32_t data_5 = Weapon_UpdateRecoil_5();
                    int32_t entity_2 = 0;
                    entity_2 = *(dest_val + 0x1c);
                    (*(((data_5 * 0x180 + entity_2) << 2) + &g_a96ae0))(dest_val, &item_48);
                    void item_40;
                    void item_28;
                    Script_FormatString_12(result, &item_40, &item_28);
                    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(result, 0);
                }
            }
        }
    }

    return result;
}
