// IGI native provenance: HumanPlayer_ApplyPhysics_8 - 0x0040F950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F950-HumanPlayer_ApplyPhysics_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ApplyPhysics_8.h"
void* HumanPlayer_ApplyPhysics_8(void* context, int32_t* param_2)

{
    if (!*(param_2 + 0x4d3))
    {
        void* temp_val = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 1;
        int32_t entity_1 = *(temp_val + 4);
        *(context + 0x14) = entity_1;
        return entity_1(context, param_2);
    }

    AI_UpdateSensors_22(param_2[0x13b], -0.610865235f, 0xbeb2b8c3);
    void* data_4 = Table_GetAt(&param_2[0x131], 0);
    void item_8;
    Script_ParseEnumReal32_13(data_4, &item_8);
    int32_t item_4;
    int32_t data_5 = item_4;
    bool flag_0 = data_5;
    data_5 = g_56e214;

    if (!flag_0 && !data_5)
    {
        HumanPlayer_UpdateHealth_8(param_2, 1);
        *(context + 0x14) = HumanPlayer_CheckCollision_7;
        return context;
    }

    Script_SpawnNewTask_13(data_4, data_5);
    void* data_7 = AI_SelectTarget_22(param_2[0x13b], 0.0f, 0, 0x3d6e4bae, 0x3d082b3f);
    *(context + 0x14) = HumanPlayer_PlayFootstep_8;
    return data_7;
}
