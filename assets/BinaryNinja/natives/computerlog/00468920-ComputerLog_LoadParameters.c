// Original IGI.EXE function: ComputerLog_LoadParameters (VA 0x00468920; static CFG gate PASS, CFG score 1.000).
#include "ComputerLog_LoadParameters.h"
struct status_msg* ComputerLog_LoadParameters(float context)

{
    int32_t data_val = g_c28b44;
    void* context_val = context;
    int32_t entity_val = g_c28b48;
    g_5bdd68 = context_val;
    struct status_msg* data_1;
    int32_t temp_val;
    data_1 = Physics_InterpolateWaypoint_4(context_val);
    void* entity_1 = AI_CheckHearing_28(data_1);
    *(context_val + 0x20) = 0;
    struct status_msg* data_2 = AI_MoveToNode_29();

    if (data_2)
    {
        void* item_24_1 = &g_53f6fc;
        int32_t* data_3 = Resource_Load(data_2, 0, entity_1, nullptr);
        void* data_5;
        int32_t entity_2;
        data_5 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
        int32_t item_28_2 = entity_2;
        int32_t item_2c_1 = entity_2;
        data_2 = ComputerTextItem_Process_2(data_1, 1, 0, 0, 0, 0, 0, data_val * 0.100000001f, entity_val * 0.808333337f, data_5,
            data_3, 1, sub_468b00);
    }

    char* item_24_3 = "OBJECTIVES";
    float item_8_1 = entity_val;
    context = data_val;
    int32_t* data_6 = Resource_Load(data_2, temp_val, entity_1, nullptr);
    void* data_7;
    int32_t entity_4;
    data_7 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
    int32_t item_28_5 = entity_4;
    int32_t item_2c_3 = entity_4;
    ComputerTextItem_Process_2(data_1, 2, 0, 0, 0, 0, 0, context * 0.100000001f, item_8_1 * 0.774999976f, data_7, data_6,
        1, sub_468b00);
    float item_4_1 = context * 0.090625003f;
    context = item_8_1 * 0.100000001f;
    void* item_34 = &g_5bdf18;
    void* item_38 = &g_5bdf18;
    ComputerButtonItem_Process_2(data_1, 3, 0, 0, 0, 0, 0, item_4_1, context, 0, nullptr, &g_567c74, 0x5bdf00,
        &g_5bdf18, 0x5bdf30, sub_468b30);
    void* item_34_2 = &g_5bdf60;
    void* item_38_2 = &g_5bdf60;
    return ComputerButtonItem_Process_2(data_1, 4, 0, 0, 0, 0, 0, item_4_1, context + 36.0f, 0, nullptr, &g_567c74,
        0x5bdf48, &g_5bdf60, 0x5bdf78, sub_468b30);
}
