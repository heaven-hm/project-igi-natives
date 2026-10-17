// IGI native provenance: Sys_PushStack_2 - 0x004B0DC0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B0DC0-Sys_PushStack_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_2.h"
int32_t Sys_PushStack_2()

{
    memset(&g_a950a0, 0, 0x1040);
    memset(0xa94e80, 0, 0x208);
    memset(&g_a94a80, 0, 0x400);
    g_942304 = 8;
    g_a94a64 = 0xffffffff;
    return 0;
}
