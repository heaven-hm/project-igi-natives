// IGI native provenance: Camera_ApplyPostProcess - 0x004A2430 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A2430-Camera_ApplyPostProcess.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess.h"
struct status_msg* Camera_ApplyPostProcess(void* context, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10)

{
    int32_t kind;
    kind = g_543d4e;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[8] = param_2;
    result->head[9] = param_3;
    result->head[0xa] = param_4;
    result->head[0xb] = param_5;
    result->head[0xc] = param_6;
    result->head[0xd] = param_7;
    result->head[0xe] = param_8;
    result->head[0xf] = param_9;
    result->head[0x10] = param_10;
    return result;
}
