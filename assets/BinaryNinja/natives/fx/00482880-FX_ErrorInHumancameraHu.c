// IGI native provenance: FX_ErrorInHumancameraHu - 0x00482880 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00482880-FX_ErrorInHumancameraHu.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_ErrorInHumancameraHu.h"
int32_t* FX_ErrorInHumancameraHu(void* context)

{
    int32_t entity_val = 0;
    char* data_val = &g_5c118d;

    while (!*data_val)
    {
        data_val = &data_val[8];
        entity_val += 1;

        if (data_val >= 0x5c158d)
            return data_val;
    }

    int32_t* data_1 = *((entity_val << 3) + &g_5c1188);

    if (*data_1)
    {
        *(context + 0x68) = data_1;
        *(context + 0x118) = entity_val;
        return data_1;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
