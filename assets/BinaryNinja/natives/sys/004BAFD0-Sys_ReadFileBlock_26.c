// IGI native provenance: Sys_ReadFileBlock_26 - 0x004BAFD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BAFD0-Sys_ReadFileBlock_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
