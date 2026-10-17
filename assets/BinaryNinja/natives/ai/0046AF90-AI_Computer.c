// IGI native provenance: AI_Computer - 0x0046AF90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046AF90-AI_Computer.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_Computer.h"
int32_t AI_Computer()

{
    QTask_CloseEvent_2(g_5bdda8);
    return Sys_OpenFileStream_4("COMPUTER:");
}
