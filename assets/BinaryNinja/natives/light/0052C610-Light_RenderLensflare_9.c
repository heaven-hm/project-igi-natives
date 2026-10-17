// Original IGI.EXE function: Light_RenderLensflare_9 (VA 0x0052C610; static CFG gate PASS, CFG score 0.952).
#include "Light_RenderLensflare_9.h"
struct status_msg* Light_RenderLensflare_9(void* context, int32_t param_2, int32_t param_3)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_a8454c;
        result = QTask_HandleInput(context, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_a8454c;
        result = QTask_HandleInput(context, kind, 0);
        Sys_DispatchOpcode_2();
    }

    result->sprite[0x9c] = param_3;
    result->sprite[0x9d] = *(&param_3 + 1);
    result->sprite[0x9e] = *(&param_3 + 2);
    result->sprite[0x9f] = *(&param_3 + 3);
    memcpy(&result->sprite[0x3c], param_2, 0x18);
    uint32_t data_4 = Script_ParseEnumReal32_8();
    int32_t data_5 = 0;
    data_5 = result->head[7];
    int32_t data_6 = *(((data_4 * 0x180 + data_5) << 2) + &g_a96ae0);

    if (data_6)
        data_6(result, 0);

    return result;
}
