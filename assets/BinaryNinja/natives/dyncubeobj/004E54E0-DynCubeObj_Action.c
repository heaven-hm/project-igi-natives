// Original IGI.EXE function: DynCubeObj_Action (VA 0x004E54E0; static CFG gate PASS, CFG score 1.000).
#include "DynCubeObj_Action.h"
int32_t DynCubeObj_Action(int32_t* context)

{
    int32_t* source_val = g_b019f4;
    int32_t entity_val = *(*context + source_val);
    int32_t data_2 = g_b019e8 - 1;
    g_b019e8 = data_2;

    if (entity_val != data_2)
    {
        int32_t temp_1 = g_b019e4;
        int32_t data_5 = *(temp_1 + (data_2 << 2)) * g_b019f0 + g_b019e0;
        int32_t dest_2 = *(temp_1 + (entity_val << 2));
        int32_t source_1 = *(source_val + data_5);
        *(temp_1 + (entity_val << 2)) = *(temp_1 + (source_1 << 2));
        *(g_b019e4 + (source_1 << 2)) = dest_2;
        *(g_b019f4 + data_5) = entity_val;
    }

    return Sys_ExecuteBytecode_2(context);
}
