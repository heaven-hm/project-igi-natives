// Original IGI.EXE function: AreaActivate_LoadParameters (VA 0x00504970; static CFG gate PASS, CFG score 1.000).
#include "AreaActivate_LoadParameters.h"
void* AreaActivate_LoadParameters(void* context)

{
    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_1 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        (*(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0))(context);
    }

    void* result = *(context + 0xb0);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(context + 0xb0) = 0;
    }

    return result;
}
