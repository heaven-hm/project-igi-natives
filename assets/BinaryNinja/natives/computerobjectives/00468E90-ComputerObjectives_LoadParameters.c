// IGI native provenance: ComputerObjectives_LoadParameters - 0x00468E90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00468E90-ComputerObjectives_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerObjectives_LoadParameters.h"
struct status_msg* ComputerObjectives_LoadParameters(void* context)

{
    int32_t data_val = g_c28b44;
    int32_t entity_val = g_c28b48;
    struct status_msg* data_1;
    int32_t temp_1;
    data_1 = Physics_InterpolateWaypoint_4(context);
    void* entity_1 = AI_CheckHearing_28(data_1);
    struct status_msg* data_2 = AI_MoveToNode_29();

    if (data_2)
    {
        void* item_24_1 = &g_53f6fc;
        int32_t* data_3 = Resource_Load(data_2, 0, entity_1, nullptr);
        void* data_5;
        int32_t entity_3;
        data_5 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
        int32_t item_28_2 = entity_3;
        int32_t item_2c_1 = entity_3;
        data_2 = ComputerTextItem_Process_2(data_1, 1, 0, 0, 0, 0, 0, data_val * 0.100000001f, entity_val * 0.808333337f, data_5,
            data_3, 1, sub_469030);
    }

    void* item_24_3 = &g_53f714;
    float item_c_1 = entity_val;
    float item_8_1 = data_val;
    int32_t* data_6 = Resource_Load(data_2, temp_1, entity_1, nullptr);
    void* data_8;
    int32_t entity_4;
    data_8 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
    int32_t item_28_5 = entity_4;
    int32_t item_2c_3 = entity_4;
    ComputerTextItem_Process_2(data_1, 2, 0, 0, 0, 0, 0, item_8_1 * 0.100000001f, item_c_1 * 0.774999976f, data_8,
        data_6, 1, sub_469030);
    struct status_msg* result = AI_MoveToNode_29();

    if (result)
    {
        int32_t i = 0;
        struct status_msg** dest_1 = context + 0x20;

        do
        {
            result = ComputerButtonItem_Process_2(data_1, i + 3, 0, 0, 0, 0, 0, item_8_1 * -0.125f,
                item_c_1 * -0.166666672f, 0, nullptr, &g_567c74, 0x5be068, 0x5be080, 0x5be080,
                sub_469060);
            *dest_1 = result;
            i += 1;
            dest_1 = &dest_1[1];
        } while (i < 6);
    }

    return result;
}
