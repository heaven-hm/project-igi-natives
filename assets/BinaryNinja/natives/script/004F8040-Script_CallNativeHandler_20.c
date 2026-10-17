// IGI native provenance: Script_CallNativeHandler_20 - 0x004F8040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F8040-Script_CallNativeHandler_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_20.h"
int32_t Script_CallNativeHandler_20(void* context)

{
    int32_t dest_val = QHash_ValueGet();

    if (!dest_val)
        QHash_ValueSet();

    *(context + 0x2b48) = Mem_Alloc(0x320, 4);

    if (!dest_val)
        Sys_DispatchOpcode_2();

    int32_t i = 0;
    void* entity_val = context + 0x2b4c;

    do
    {
        entity_val += 4;
        int32_t temp_2 = *(context + 0x2b48) + i;
        i += 0x28;
        *(entity_val - 4) = temp_2;
    } while (i < 0x320);

    int32_t result = g_a76c9c + 0x320;
    g_a76c9c = result;
    return result;
}
