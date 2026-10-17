// IGI native provenance: ComputerButtonItem_Process_2 - 0x0046B660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B660-ComputerButtonItem_Process_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerButtonItem_Process_2.h"
struct status_msg* ComputerButtonItem_Process_2(float context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, char param_7, float param_8, float param_9, char param_10, void* param_11, char* param_12, uint32_t param_13, uint32_t param_14, uint32_t param_15, int32_t param_16)

{
    int32_t kind;
    kind = g_5be2b4;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    Physics_SolveConstraints_4(result, param_2, param_3, param_4, param_5, param_6, param_7, param_16);
    result->head[0x20] = param_10;
    result->head[0x22] = param_13;
    result->head[0x23] = param_14;
    result->head[0x24] = param_15;
    param_7 = Sys_CloseFileStream_17(param_13);
    param_10 = param_7;
    param_7 = Sys_ExecuteBytecode_17(param_13);
    char* dest_1 = param_12;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_1;
        dest_1 = &dest_1[1];
        i -= 1;

        if (!flag_0_1)
            break;
    }

    context = param_7;
    int32_t entity_4 = ~i;
    long double fpu_val_7_6;

    if (entity_4 == 1)
    {
        fpu_val_7_6 = 0.0f;
        result->head[0x21] = 0;
        param_7 = 0;
    }
    else
    {
        int32_t item_10_1 = entity_4 - 1;
        int32_t item_14_1 = entity_4 - 1;
        int32_t** data_7 = Sys_OpenFileStream_18(param_11, param_10 + param_8, param_9, param_12);
        result->head[0x21] = data_7;
        data_7[9] |= 0x40000;
        *(result->head[0x21] + 0xc) = 0x44029eb8;
        param_7 = Sys_CheckHeap_21(result->head[0x21]);
        param_7 = param_7;
        fpu_val_7_6 = Sys_AllocateMemory_22(result->head[0x21]);
    }

    result->head[0x1e] = param_8;
    result->head[0x17] = param_8;
    result->head[0x19] = param_7 + param_10;
    long double fpu_val_6_2 = context;
    fpu_val_6_2 - fpu_val_7_6;
    result->head[0x1f] = param_9;
    result->head[0x1d] = result;
    result->head[0x18] = param_9;

    if (!(*(&((fpu_val_6_2 < fpu_val_7_6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_6) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        fpu_val_7_6 = context;

    result->head[0x1a] = fpu_val_7_6;
    return result;
}
