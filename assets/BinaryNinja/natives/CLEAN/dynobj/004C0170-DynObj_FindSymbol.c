// IGI native provenance: DynObj_FindSymbol - 0x004C0170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0170-DynObj_FindSymbol.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_FindSymbol.h"
int32_t DynObj_FindSymbol(void* context)

{
    char* temp_val = *(context + 0x14);
    char entity_val = *temp_val;

    if (entity_val >= 0x30 && entity_val <= 0x39)
        return 1;

    if (entity_val == 0x24)
    {
        char data_1 = temp_val[1];

        if ((data_1 >= 0x30 && data_1 <= 0x39) || (data_1 >= 0x61 && data_1 <= 0x66))
            return 1;

        if (data_1 >= 0x41 && data_1 <= 0x46)
            return 1;
    }

    if ((entity_val != 0x30 || temp_val[1] != 0x78) && temp_val[1] != 0x58)
        return 0;

    return 1;
}
