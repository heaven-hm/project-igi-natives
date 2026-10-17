// IGI native provenance: QTask_CloseEvent_2 - 0x00401A20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401A20-QTask_CloseEvent_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_CloseEvent_2.h"
uint32_t QTask_CloseEvent_2(int16_t context)

{
    uint32_t result = context;
    uint32_t source_1 = result * 0x30;
    result = *(source_1 + 0xaf5f04);

    if (result)
        result = Sys_OpenFileStream_2(source_1 + 0xaf5eec);

    *(source_1 + &g_af5f05) = 0;
    return result;
}
