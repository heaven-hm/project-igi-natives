// Original IGI.EXE function: Sys_OpenFileStream_26 (VA 0x004BAFA0; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_26.h"
int32_t Sys_OpenFileStream_26(int32_t context, int32_t param_2, int32_t param_3, void* param_4, char* param_5)

{
    int32_t result = param_3;
    int32_t* data_1 = *(param_4 + 0x1c);
    result = 0;
    DynObj_CreateMagicObject_2(data_1, &result, param_5);
    return result;
}
