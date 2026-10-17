// Original IGI.EXE function: Display_CreateSurface_9 (VA 0x00495CD0; static CFG gate PASS, CFG score 1.000).
#include "Display_CreateSurface_9.h"
int32_t Display_CreateSurface_9(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t* flagP = context;
    int32_t result = 0;
    int32_t dest_val = param_3;

    if ((*(*flagP + 0x2c))(flagP, param_2, dest_val, &context, &param_3, 0, 0, 0))
        return 0;

    int32_t data_2 = g_5ca1a0;
    int32_t source_val = g_5ca19c;

    if (source_val >= data_2 + dest_val)
    {
        Resource_Unpack(g_5ca194, context, dest_val);
        g_5ca1a0 += dest_val;
    }
    else
    {
        void* source_1 = source_val - data_2;
        Resource_Unpack(g_5ca194, context, source_1);
        Sys_ExecuteBytecode_4(g_5ca194, 0x2c, 0);
        void* dest_1 = dest_val - source_1;
        Resource_Unpack(g_5ca194, source_1 + context, dest_1);
        g_5ca1a0 = dest_1;
        result = 1;
    }

    (*(*flagP + 0x4c))(flagP, context, param_3, 0, 0);
    return result;
}
