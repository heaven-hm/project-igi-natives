// IGI native provenance: QTask_CleanupEvents - 0x00401860 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401860-QTask_CleanupEvents.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_CleanupEvents.h"
uint32_t QTask_CleanupEvents(int16_t context, char param_2)

{
    uint32_t result = param_2 * 6;
    *(result + &g_54f932) = 1;
    *(result + 0x54f930) = context;
    *(result + 0x54f933) = 1;
    return result;
}
