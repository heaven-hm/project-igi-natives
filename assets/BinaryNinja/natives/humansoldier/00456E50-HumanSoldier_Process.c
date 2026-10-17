// Original IGI.EXE function: HumanSoldier_Process (VA 0x00456E50; static CFG gate PASS, CFG score 0.979).
#include "HumanSoldier_Process.h"
int32_t HumanSoldier_Process(int32_t* a1, int32_t a2)

{
    int16_t valA;
    valA = *(a1 + 0xd01);

    if (valA)
        Render_DrawSplineMesh_12(a1);

    valA = a1[0x33e];
    int32_t v_18 = Level_StartMission_4();
    Render_DrawBoneMesh_12(a1, valA, nullptr);
    a1[0x33] = 2;
    int32_t valA2 = a1[0x33f];

    if (valA2 == 0xffffffff)
        FX_DebrisSpawn_14(a1, 2, 0, 0f);
    else if (!Render_BindTexture_11(&a1[0x1a], 0, valA2))
    {
        int32_t v_c_3 = a1[0x33f];
        Warning_Show("Animation #%d not found");
        FX_DebrisSpawn_14(a1, 2, 0, 0f);
    }
    else
        Bones_PlayAnimation(&a1[0x1a], 0, a1[0x33f], 0, 0f);

    if (!*(a1 + 0xd01))
    {
        DynObj_LinkDynamicCube_8(Level_StartMission_4(), a1, &a1[0x38], a1[0x28], 2);
        *(a1 + 0xd01) = 1;
        (*(((Script_ParseEnumReal32_8() * 0x180 + AI_UpdateOrders_17()) << 2) + &g_a96ae0))(a1, a2);
    }
    else
        (*(((Script_ParseEnumReal32_8() * 0x180 + AI_UpdateOrders_17()) << 2) + &g_a96ae0))(a1, a2);

    int32_t result = Render_DrawBoneMesh_7(&a1[0x1e], &a1[0x1a]);
    memcpy(&a1[0x194], a1[0x1c] + 0x4c, 0x14);
    return result;
}
