// IGI native provenance: ComputerTextItem_Process_2 - 0x0046B970 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B970-ComputerTextItem_Process_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerTextItem_Process_2.h"
struct status_msg* ComputerTextItem_Process_2(void* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, char param_7, uint32_t param_8, uint32_t param_9, void* param_10, char* param_11, uint32_t param_12, int32_t param_13)

{
    int32_t kind;
    kind = g_5be2bc;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    Physics_SolveConstraints_4(result, param_2, param_3, param_4, param_5, param_6, param_7, param_13);
    int32_t** data_4 = Sys_OpenFileStream_18(param_10, param_8, param_9, param_11);
    result->head[0x1e] = data_4;
    data_4[9] |= 0x40000;
    *(result->head[0x1e] + 0xc) = 0x44029eb8;
    result->head[0x1f] = param_12;
    uint32_t temp_5 = result->head[0x1e];
    result->head[0x20] = param_8;
    result->head[0x21] = param_9;
    param_7 = Sys_CheckHeap_21(temp_5);
    uint32_t data_7 = result->head[0x1e];
    result->head[0x22] = param_7;
    int32_t data_8 = Sys_AllocateMemory_22(data_7);
    uint32_t entity_8 = result->head[0x20];
    uint32_t temp_6 = result->head[0x21];
    param_7 = data_8;
    long double fpu_val_7_1 = param_7;
    result->head[0x19] = result->head[0x22];
    result->head[0x1d] = result;
    result->head[0x17] = entity_8;
    result->head[0x23] = fpu_val_7_1;
    result->head[0x1a] = fpu_val_7_1;
    result->head[0x18] = temp_6;
    return result;
}
