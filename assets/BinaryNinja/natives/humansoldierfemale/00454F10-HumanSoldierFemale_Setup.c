// Original IGI.EXE function: HumanSoldierFemale_Setup (VA 0x00454F10; static CFG gate PASS, CFG score 0.979).
#include "HumanSoldierFemale_Setup.h"
int32_t HumanSoldierFemale_Setup(int32_t* context, int32_t param_2)

{
    int16_t data_val;
    data_val = *(context + 0xd01);

    if (data_val)
        Render_DrawSplineMesh_12(context);

    data_val = context[0x33e];
    int32_t item_18 = Level_StartMission_4();
    Render_DrawBoneMesh_12(context, data_val, nullptr);
    context[0x33] = 2;
    int32_t data_2 = context[0x33f];

    if (data_2 == 0xffffffff)
        FX_DebrisSpawn_14(context, 6, 0, 0.0f);
    else if (!Render_BindTexture_11(&context[0x1a], 0, data_2))
    {
        int32_t item_c_3 = context[0x33f];
        Warning_Show("Animation #%d not found");
        FX_DebrisSpawn_14(context, 6, 0, 0.0f);
    }
    else
        Bones_PlayAnimation(&context[0x1a], 0, context[0x33f], 0, 0.0f);

    if (!*(context + 0xd01))
    {
        DynObj_LinkDynamicCube_8(Level_StartMission_4(), context, &context[0x38], context[0x28], 2);
        *(context + 0xd01) = 1;
        (*(((Script_ParseEnumReal32_8() * 0x180 + AI_UpdateOrders_17()) << 2) + &g_a96ae0))(context, param_2);
    }
    else
        (*(((Script_ParseEnumReal32_8() * 0x180 + AI_UpdateOrders_17()) << 2) + &g_a96ae0))(context, param_2);

    int32_t result = Render_DrawBoneMesh_7(&context[0x1e], &context[0x1a]);
    memcpy(&context[0x194], context[0x1c] + 0x4c, 0x14);
    return result;
}
