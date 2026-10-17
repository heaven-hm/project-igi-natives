// IGI native provenance: DynObj_LookupHashItem_8 - 0x004C6D20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C6D20-DynObj_LookupHashItem_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LookupHashItem_8.h"
void* DynObj_LookupHashItem_8(void* context, int32_t* param_2, void* param_3, int32_t param_4, int32_t param_5, int32_t param_6, void* param_7)

{
    int32_t* source_val = param_2;
    int32_t entity_val = 0x8000;
    void* i = source_val[0xb];
    uint32_t flagP = *source_val;

    while (i)
    {
        void* temp_val;
        temp_val = *(i + 0x5c);
        i = *(i + 0x58);
        entity_val |= temp_val;
    }

    int32_t data_val = source_val[0xd];
    source_val[0xe] = entity_val;
    *(context + (data_val << 2) + 0xe8) = 0;

    while (flagP != param_4)
    {
        int32_t dest_1 = 0;
        *(source_val + 0x3a) |= *(param_3 + 0x5c);

        if (param_5 & flagP)
            dest_1 = 1;

        if (param_6 & flagP)
            dest_1 |= 2;

        if (param_7 & flagP)
            dest_1 |= 4;

        flagP u>>= 1;
        source_val[0xc] |= 1 << (dest_1 & 0x1f);

        if (!source_val[dest_1 + 3])
        {
            int32_t entity_5 = *(context + 0xd08);
            int32_t* data_7 = *(*(context + 0xd04) + (entity_5 << 2)) * *(context + 0xd10) + *(context + 0xd00);
            *(*(context + 0xd14) + data_7) = entity_5;
            *(context + 0xd08) += 1;
            source_val[dest_1 + 3] = data_7;
            void* item_24_1 = context;
            DynObj_LookupHashItem_7(data_7, dest_1, flagP, source_val[0xd]);
            *(source_val[dest_1 + 3] + 8) = source_val;
        }

        source_val = source_val[dest_1 + 3];
    }

    source_val[0xe] |= *(param_3 + 0x5c);
    return DynObj_ParseConfigFile_8(source_val, param_3);
}
