#include "HumanView_Setup.h"
int32_t* HumanView_Setup(void* a1, int32_t a2)

{
    void* dstD = *(a1 + 0x14);
    void* ctxB = *(Level_LoadLevel_6() + 0x5c);
    int32_t* result = SoundSys_InitSoundSys_12();

    if (result[0x15] == ctxB)
    {
        result = *(ctxB + 0x68);

        if (*result == dstD && *(ctxB + 0xe8) == 1)
        {
            result = AI_CombatTarget_29();

            if (!result)
            {
                AI_CheckVisibility_23(a1);
                (*((Render_DrawRigidMesh_12() << 2) + &g_a982e0))(a1, a2);
                result = Table_GetAt(dstD + 0x4c4, 0);

                if (result)
                {
                    int32_t v_48 = 1;
                    uint32_t valA5 = Weapon_UpdateRecoil_5();
                    int32_t objC2 = 0;
                    objC2 = *(dstD + 0x1c);
                    (*(((valA5 * 0x180 + objC2) << 2) + &g_a96ae0))(dstD, &v_48);
                    void v_40;
                    void v_28;
                    Script_FormatString_12(result, &v_40, &v_28);
                    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(result, 0);
                }
            }
        }
    }

    return result;
}
