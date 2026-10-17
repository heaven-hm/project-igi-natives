// IGI native provenance: QTask_RegisterEventCallback_3 - 0x00401FA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401FA0-QTask_RegisterEventCallback_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_RegisterEventCallback_3.h"
uint32_t QTask_RegisterEventCallback_3(int16_t context, int32_t param_2)

{
    uint32_t result = context;
    *(result * 0x30 + 0xaf5f0c) = param_2 | 0x20000000;
    return result;
}
