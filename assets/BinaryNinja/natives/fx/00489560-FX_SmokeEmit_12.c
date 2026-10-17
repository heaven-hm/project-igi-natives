// IGI native provenance: FX_SmokeEmit_12 - 0x00489560 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489560-FX_SmokeEmit_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_SmokeEmit_12.h"
int32_t FX_SmokeEmit_12()

{
    g_5c8b0c = 0;
    g_5c8b10 = 0;
    g_5c8b14 = 0;
    g_5c8ac0 = Mem_Alloc8(0xc0);
    int32_t entity_val;
    int32_t dest_val;
    dest_val = __memfill_u32(&g_5c8ac4, 0x1810181, 0x10);
    g_54127c = QTask_UnableToAllocateEvent(0);
    g_54127d = QTask_UnableToAllocateEvent(0);
    char result = QTask_UnableToAllocateEvent(0);
    g_54127e = result;
    return result;
}
