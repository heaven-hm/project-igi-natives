// IGI native provenance: QTask_CleanupTypes_2 - 0x00401D30 - CFG score 72.2% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00401D30-QTask_CleanupTypes_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_CleanupTypes_2.h"
int32_t QTask_CleanupTypes_2(char context, int32_t param_2)

{
    *(param_2 + &g_54ff24) = context;
    *(context + 0xa969e0) = param_2;
    /* tailcall */
    return QTask_DeleteTask();
}
