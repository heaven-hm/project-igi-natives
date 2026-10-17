// IGI native provenance: DynObj_RegisterSymbol_8 - 0x004C6890 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C6890-DynObj_RegisterSymbol_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RegisterSymbol_8.h"
void* DynObj_RegisterSymbol_8(void* context, void* param_2, int32_t param_3)

{
    if (param_3 == 0xffffffff)
    {
        void* entity_val = *(context + 0xd18);

        if (!entity_val)
        {
            *(context + 0xd18) = param_2;
            *(param_2 + 0x58) = 0;
            *(*(context + 0xd18) + 0x54) = 0;
            return context;
        }

        *(entity_val + 0x54) = param_2;
        void* entity_1 = *(context + 0xd18);
        *(*(entity_1 + 0x54) + 0x58) = entity_1;
        void* entity_3 = *(*(context + 0xd18) + 0x54);
        *(context + 0xd18) = entity_3;
        *(entity_3 + 0x54) = 0;
        return context;
    }

    void* temp_3 = *(context + (param_3 << 2) + 0xd1c);

    if (!temp_3)
    {
        *(context + (param_3 << 2) + 0xd1c) = param_2;
        *(param_2 + 0x58) = 0;
        void* data_1 = *(context + (param_3 << 2) + 0xd1c);
        *(data_1 + 0x54) = 0;
        return data_1;
    }

    *(temp_3 + 0x54) = param_2;
    void* temp_4 = *(context + (param_3 << 2) + 0xd1c);
    *(*(temp_4 + 0x54) + 0x58) = temp_4;
    void* temp_6 = *(*(context + (param_3 << 2) + 0xd1c) + 0x54);
    *(context + (param_3 << 2) + 0xd1c) = temp_6;
    *(temp_6 + 0x54) = 0;
    return param_3;
}
