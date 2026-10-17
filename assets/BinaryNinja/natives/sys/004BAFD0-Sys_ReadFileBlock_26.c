// Original IGI.EXE function: Sys_ReadFileBlock_26 (VA 0x004BAFD0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_26.h"
void** Sys_ReadFileBlock_26(void* context, char* param_2)

{
    int32_t data_val;
    int32_t entity_val;
    int32_t temp_val;
    int32_t* dest_val = Sys_OpenFileStream_26(data_val, temp_val, entity_val, context, param_2);

    if (!dest_val)
        dest_val = Sys_DuplicateLabelS(context, param_2);

    void** result = Mem_Alloc(0x10, 4);
    result[1] = 0;
    *result = nullptr;
    Camera_SetFieldOfView_33(&dest_val[2], result);
    return result;
}
