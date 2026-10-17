// Original IGI.EXE function: Human_Setup (VA 0x0045F050; static CFG gate PASS, CFG score 1.000).
#include "Human_Setup.h"
int32_t* Human_Setup(float a1, int32_t a2)

{
    void* dstD = *(Level_LoadLevel_6() + 0x5c);
    int32_t objC = *(SoundSys_InitSoundSys_12() + 0x54);
    int32_t* result;

    if (objC == dstD)
        result = *(dstD + 0x68);

    if (objC != dstD || *result != a1 || *(dstD + 0xe8) != 1)
    {
        AI_CheckHearing_17(a1);
        (*(((Render_DrawSplineMesh_4() * 0x180 + Render_DrawRigidMesh_12()) << 2) + &g_a96ae0))(a1, a2);
        result = Table_GetAt(a1 + 0x4c4, 0);

        if (result)
        {
            int32_t v_48 = 0;
            uint32_t valA8 = Weapon_UpdateRecoil_5();
            int32_t valA9 = 0;
            valA9 = *(a1 + 0x1c);
            (*(((valA8 * 0x180 + valA9) << 2) + &g_a96ae0))(a1, &v_48);
            void v_40;
            void v_28;
            Script_FormatString_12(result, &v_40, &v_28);
            return (*(((Render_DrawSplineMesh_4() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0))(result, a2);
        }
    }

    return result;
}
