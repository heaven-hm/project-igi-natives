// IGI native provenance: QTask_RegisterEventCallback_2 - 0x00401B90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401B90-QTask_RegisterEventCallback_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_RegisterEventCallback_2.h"
int32_t QTask_RegisterEventCallback_2(int16_t context)

{
    return *(context * 0x30 + &g_af5ee0);
}
