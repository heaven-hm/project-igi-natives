// IGI native provenance: DynObj_RegisterSymbol_9 - 0x004C7560 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C7560-DynObj_RegisterSymbol_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RegisterSymbol_9.h"
void* DynObj_RegisterSymbol_9(int32_t context, void* param_2)

{
    int32_t context_val = context;
    void* flagP = param_2;
    void* source_val = *(flagP + 0x50);
    int32_t dest_val = 0;
    *(context_val + (*(source_val + 0x34) << 2) + 0xe8) = 0;
    DynObj_InsertHashItem_8(source_val, flagP);
    DynObj_FindSymbol_9(context_val, source_val);
    int32_t entity_val = 0;
    param_2 = 0xfe;
    void* result;

    while (true)
    {
        int32_t data_1 = *(source_val + 0x34);
        int32_t temp_4 = 0;
        temp_4 = *(flagP + 0x1c);
        int16_t context_1 = 0;
        context_1 = *(((temp_4 + dest_val) << 2) + &g_a96ae0);
        *(context_val + ((entity_val + data_1 * 0xfe) << 1) + 0x118) -= context_1;
        entity_val += 1;
        dest_val += 0x180;
        result = param_2 - 1;
        bool flag_0_1 = param_2 != 1;
        param_2 = result;

        if (!flag_0_1)
            break;

        context_val = context;
    }

    *(flagP + 0x50) = 0;
    return result;
}
