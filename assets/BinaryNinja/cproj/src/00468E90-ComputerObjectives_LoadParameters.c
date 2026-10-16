#include "gi_platform.h"
#include "00468E90-ComputerObjectives_LoadParameters.h"
struct status_msg* ComputerObjectives_LoadParameters(void* a1)

{
    int32_t valA = g_c28b44;
    int32_t objC = g_c28b48;
    struct status_msg* valA1;
    int32_t tmpD1;
    valA1 = Physics_InterpolateWaypoint_4(a1);
    void* objC1 = AI_CheckHearing_28(valA1);
    struct status_msg* valA2 = AI_MoveToNode_29();

    if (valA2)
    {
        void* v_24_1 = &g_53f6fc;
        int32_t* valA3 = Resource_Load(valA2, 0, objC1, nullptr);
        void* valA5;
        int32_t objC3;
        valA5 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
        int32_t v_28_2 = objC3;
        int32_t v_2c_1 = objC3;
        valA2 = ComputerTextItem_Process_2(valA1, 1, 0, 0, 0, 0, 0, valA * 0.100000001.0f, objC * 0.808333337.0f, valA5,
            valA3, 1, sub_469030);
    }

    void* v_24_3 = &g_53f714;
    float v_c_1 = objC;
    float v_8_1 = valA;
    int32_t* valA6 = Resource_Load(valA2, tmpD1, objC1, nullptr);
    void* valA8;
    int32_t objC4;
    valA8 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
    int32_t v_28_5 = objC4;
    int32_t v_2c_3 = objC4;
    ComputerTextItem_Process_2(valA1, 2, 0, 0, 0, 0, 0, v_8_1 * 0.100000001.0f, v_c_1 * 0.774999976.0f, valA8,
        valA6, 1, sub_469030);
    struct status_msg* result = AI_MoveToNode_29();

    if (result)
    {
        int32_t i = 0;
        struct status_msg** dstD1 = a1 + 0x20;

        do
        {
            result = ComputerButtonItem_Process_2(valA1, i + 3, 0, 0, 0, 0, 0, v_8_1 * -0.125.0f,
                v_c_1 * -0.166666672.0f, 0, nullptr, &g_567c74, 0x5be068, 0x5be080, 0x5be080,
                sub_469060);
            *dstD1 = result;
            i += 1;
            dstD1 = &dstD1[1];
        } while (i < 6);
    }

    return result;
}
