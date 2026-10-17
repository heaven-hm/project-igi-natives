// IGI native provenance: Sys_ExecuteBytecode_21 - 0x004B7C40 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B7C40-Sys_ExecuteBytecode_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_21.h"
int32_t Sys_ExecuteBytecode_21(void* context)

{
    int32_t entity_1 = *(context + 6) << 1;
    memset(memset(*(context + 0xc), 0, entity_1 & 0xfffffffc), 0, entity_1 & 3);
    int32_t entity_6 = *(context + 4) * *(context + 6);
    memset(memset(context + 0x10, 0, entity_6 & 0xfffffffc), 0, entity_6 & 3);
    return 0;
}
