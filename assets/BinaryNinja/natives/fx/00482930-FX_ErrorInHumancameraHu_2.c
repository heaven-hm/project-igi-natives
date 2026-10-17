// IGI native provenance: FX_ErrorInHumancameraHu_2 - 0x00482930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00482930-FX_ErrorInHumancameraHu_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_ErrorInHumancameraHu_2.h"
int32_t FX_ErrorInHumancameraHu_2(void* context)

{
    int32_t context_val;
    int32_t item_4 = context_val;
    int32_t data_1 = *(context + 0x118) + 1;
    int32_t source_val = 0;
    *(context + 0x118) = data_1;
    int32_t entity_val = data_1;
    int32_t result;

    while (true)
    {
        result = entity_val & 0x8000007f;

        if (result < 0)
            result = ((result - 1) | 0xffffff80) + 1;

        if (*((result << 3) + &g_5c118d))
            break;

        source_val += 1;
        entity_val += 1;

        if (source_val >= 0x80)
        {
            *(context + 0x118) = data_1 - 1;
            return result;
        }
    }

    int32_t* entity_1 = *((result << 3) + &g_5c1188);

    if (*entity_1)
    {
        *(context + 0x68) = entity_1;
        *(context + 0x118) = result;
        return result;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
