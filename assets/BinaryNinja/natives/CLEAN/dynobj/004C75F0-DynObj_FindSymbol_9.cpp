// IGI native provenance: DynObj_FindSymbol_9 - 0x004C75F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C75F0-DynObj_FindSymbol_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_FindSymbol_9.h"
void* const DynObj_FindSymbol_9(int32_t context, void* param_2)

{
    void* const result = param_2;
    int32_t source_val;
    int32_t item_14 = source_val;
    void* i = *(result + 0x2c);
    void* const result_1 = nullptr;
    int32_t temp_val = 0x8000;

    while (i)
    {
        source_val = *(i + 0x5c);
        i = *(i + 0x58);
        temp_val |= source_val;
    }

    if (temp_val != *(result + 0x38))
        result_1 = 1;

    *(result + 0x38) = temp_val;

    while (true)
    {
        int32_t flagP4 = *(result + 4);
        void* result_2 = *(result + 8);

        if (!result_2)
            break;

        if (*(result + 0x30) || *(result + 0x2c))
        {
            result = result_1;

            if (!result)
                break;

        label_4c76ff:
            int32_t context_6 = 0x8000;
            int32_t* entity_7 = result_2 + 0xc;
            int32_t i_2 = 8;
            int32_t i_1;

            do
            {
                void* data_9 = *entity_7;

                if (data_9)
                {
                    flagP4 = *(data_9 + 0x3a);
                    flagP4 |= *(data_9 + 0x38);
                    context_6 |= flagP4;
                }

                entity_7 = &entity_7[1];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);

            if (*(result_2 + 0x3a) == context_6)
                result_1 = nullptr;

            *(result_2 + 0x3a) = context_6;
        }
        else
        {
            int32_t* data_1 = *(*(result_2 + (flagP4 << 2) + 0xc) + 0x3c);

            if (data_1)
                DynCubeObj_Action(data_1);

            int32_t temp_1 = *(*(result_2 + (flagP4 << 2) + 0xc) + *(context + 0xd14));
            int32_t data_4 = *(context + 0xd08) - 1;
            *(context + 0xd08) = data_4;

            if (temp_1 != data_4)
            {
                int32_t entity_4 = *(context + 0xd04);
                void* flagP1 = *(entity_4 + (temp_1 << 2));
                data_4 = *(entity_4 + (data_4 << 2)) * *(context + 0xd10) + *(context + 0xd00);
                int32_t context_5 = *(*(context + 0xd14) + data_4);
                *(entity_4 + (temp_1 << 2)) = *(entity_4 + (context_5 << 2));
                *(*(context + 0xd04) + (context_5 << 2)) = flagP1;
                *(*(context + 0xd14) + data_4) = temp_1;
            }

            *(result_2 + (flagP4 << 2) + 0xc) = 0;
            *(result_2 + 0x30) &= ~(1 << (flagP4 & 0x1f));

            if (result_1)
                goto label_4c76ff;
        }

        result = result_2;
    }

    return result;
}
