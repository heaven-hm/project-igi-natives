// IGI native provenance: QTask_InitContext - 0x004018C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004018C0-QTask_InitContext.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_InitContext.h"
uint32_t QTask_InitContext(char context)

{
    uint32_t result = context * 3;
    *((result << 1) + &g_54f932) = 0;
    return result;
}
