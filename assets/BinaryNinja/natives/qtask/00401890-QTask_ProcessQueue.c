// IGI native provenance: QTask_ProcessQueue - 0x00401890 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401890-QTask_ProcessQueue.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_ProcessQueue.h"
int32_t QTask_ProcessQueue(int16_t context, int32_t param_2)

{
    int32_t result = param_2 * 6;
    *(result + &g_54f932) = 1;
    *(result + 0x54f930) = context;
    *(result + 0x54f933) = 0;
    return result;
}
