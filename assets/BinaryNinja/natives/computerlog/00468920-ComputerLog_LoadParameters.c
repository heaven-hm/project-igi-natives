// Original IGI.EXE function: ComputerLog_LoadParameters (VA 0x00468920; static CFG gate PASS, CFG score 1.000).
#include "ComputerLog_LoadParameters.h"
struct status_msg* ComputerLog_LoadParameters(float a1)

{
    int32_t valA = g_c28b44;
    void* ctxB = a1;
    int32_t objC = g_c28b48;
    g_5bdd68 = ctxB;
    struct status_msg* valA1;
    int32_t tmpD;
    valA1 = Physics_InterpolateWaypoint_4(ctxB);
    void* objC1 = AI_CheckHearing_28(valA1);
    *(ctxB + 0x20) = 0;
    struct status_msg* valA2 = AI_MoveToNode_29();

    if (valA2)
    {
        void* v_24_1 = &g_53f6fc;
        int32_t* valA3 = Resource_Load(valA2, 0, objC1, nullptr);
        void* valA5;
        int32_t objC2;
        valA5 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
        int32_t v_28_2 = objC2;
        int32_t v_2c_1 = objC2;
        valA2 = ComputerTextItem_Process_2(valA1, 1, 0, 0, 0, 0, 0, valA * 0.100000001f, objC * 0.808333337f, valA5,
            valA3, 1, sub_468b00);
    }

    char* v_24_3 = "OBJECTIVES";
    float v_8_1 = objC;
    a1 = valA;
    int32_t* valA6 = Resource_Load(valA2, tmpD, objC1, nullptr);
    void* valA7;
    int32_t objC4;
    valA7 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
    int32_t v_28_5 = objC4;
    int32_t v_2c_3 = objC4;
    ComputerTextItem_Process_2(valA1, 2, 0, 0, 0, 0, 0, a1 * 0.100000001f, v_8_1 * 0.774999976f, valA7, valA6,
        1, sub_468b00);
    float v_4_1 = a1 * 0.090625003f;
    a1 = v_8_1 * 0.100000001f;
    void* v_34 = &g_5bdf18;
    void* v_38 = &g_5bdf18;
    ComputerButtonItem_Process_2(valA1, 3, 0, 0, 0, 0, 0, v_4_1, a1, 0, nullptr, &g_567c74, 0x5bdf00,
        &g_5bdf18, 0x5bdf30, sub_468b30);
    void* v_34_2 = &g_5bdf60;
    void* v_38_2 = &g_5bdf60;
    return ComputerButtonItem_Process_2(valA1, 4, 0, 0, 0, 0, 0, v_4_1, a1 + 36f, 0, nullptr, &g_567c74,
        0x5bdf48, &g_5bdf60, 0x5bdf78, sub_468b30);
}
