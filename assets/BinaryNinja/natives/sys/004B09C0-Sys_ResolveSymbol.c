// Original IGI.EXE function: Sys_ResolveSymbol (VA 0x004B09C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol.h"
int32_t Sys_ResolveSymbol(int32_t* context, int32_t* param_2, int32_t* param_3, char* param_4, int32_t param_5, int32_t param_6)

{
    void item_200;
    Sys_PopStack(&item_200, param_4);
    return Sys_DispatchOpcode(context, param_2, param_3, &item_200, param_5, param_6);
}
