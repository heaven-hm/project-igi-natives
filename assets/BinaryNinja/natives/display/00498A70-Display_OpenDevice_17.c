// Original IGI.EXE function: Display_OpenDevice_17 (VA 0x00498A70; static CFG gate PASS, CFG score 1.000).
#include "Display_OpenDevice_17.h"
int32_t Display_OpenDevice_17(int32_t* context, void* param_2)

{
    g_6e5bd0 = 0;
    int32_t* data_val = context[0x15b3];
    (*(*data_val + 8))(data_val);
    DynObj_RemoveSymbol_7(param_2, context, 0);
    return QTask_FindType(context);
}
