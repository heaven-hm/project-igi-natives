// IGI native provenance: QTask_CleanupEvents_2 - 0x00401D50 - CFG score 72.2% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00401D50-QTask_CleanupEvents_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_CleanupEvents_2.h"
int32_t QTask_CleanupEvents_2(char context)

{
    uint32_t data_val = context;
    *(*(data_val + 0xa969e0) + &g_54ff24) = 0xff;
    *(data_val + 0xa969e0) = 0xff;
    /* tailcall */
    return QTask_DeleteTask();
}
