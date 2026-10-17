// Original IGI.EXE function: Menu_HandleInput_20 (VA 0x00429DC0; static CFG gate PASS, CFG score 0.933).
#include "Menu_HandleInput_20.h"
int32_t Menu_HandleInput_20(float context)

{
    float source_val = context;
    void* data_1 = *(*(source_val + 0x1b4) + 0x2d4);
    *(source_val + 0x86c) = 0x3dcccccd;
    *(source_val + 0x870) = 0x3dcccccd;
    *(source_val + 0x874) = 0x3dcccccd;
    *(source_val + 0x880) = *(data_1 + 0x134);
    int32_t temp_val = *(data_1 + 0x12c);
    *(source_val + 0x884) = temp_val;
    *(source_val + 0x888) = 0;
    int32_t entity_1 = *(data_1 + 0x138);
    *(source_val + 0x87c) = 0x49fa0000;
    *(source_val + 0x88c) = entity_1;
    int32_t item_4 = 0x3cb2674f;
    int32_t item_18;
    strncpy(&item_18, "33KA33KA33KA", 0x14);
    int32_t item_20 = temp_val;
    int32_t item_1c = temp_val;
    context = (*(data_1 + 0x130) / *(data_1 + 0x12c) - 1.0f) / (*(source_val + 0x88c) * 30.0f);
    uint32_t temp_3 = *(data_1 + 0x24c) + 0x18;
    void* data_2 = Level_StartMission_4();
    int32_t item_c;
    struct status_msg* data_4 = Script_FormatString_30(Script_FormatString(), data_2, temp_3, &item_c, &item_18, &item_20,
        0x49fa0000, 0x1080000, 0, context, 0, 0x7d0, 0);
    *(source_val + 0x868) = data_4;
    int32_t result = Script_ParseEnumReal32_31(data_4, 1);
    *(source_val + 0x878) = 0;
    return result;
}
