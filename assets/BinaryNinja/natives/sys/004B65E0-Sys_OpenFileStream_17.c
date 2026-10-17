// IGI native provenance: Sys_OpenFileStream_17 - 0x004B65E0 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B65E0-Sys_OpenFileStream_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_17.h"
int32_t Sys_OpenFileStream_17(int32_t* context, char param_2, int16_t param_3, int16_t param_4, int16_t param_5, int16_t param_6, int16_t param_7, int32_t param_8, int32_t param_9, int32_t param_10, int32_t param_11)

{
    int32_t context_1 = (param_10 * 9 + 9) << 2;
    *context = param_9;
    context[5] = param_10;
    context[3] = 0;
    *(context + 0x16) = param_2;
    void* data_1 = Mem_Alloc(context_1 + param_11 * 0x24, 4);
    context[4] = param_11;
    context[2] = data_1;
    context[1] = data_1 + context_1;
    memset(memset(data_1, 0, context_1 & 0xfffffffc), 0, context_1 & 3);
    int32_t result = param_10 * 0x24;
    *(context[2] + result + 4) = param_8;
    *(context[2] + result + 8) = param_3;
    *(context[2] + result + 0xa) = param_4;
    *(context[2] + result + 0xc) = param_5;
    *(context[2] + result + 0xe) = param_6;
    *(context[2] + result + 0x10) = param_7;
    return result;
}
