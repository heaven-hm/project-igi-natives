// IGI native provenance: Light_ApplyLightmap_11 - 0x0052D630 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052D630-Light_ApplyLightmap_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_ApplyLightmap_11.h"
int32_t Light_ApplyLightmap_11(int32_t* context, int32_t* param_2)

{
    int32_t context_val;
    int32_t item_204 = context_val;
    void item_100;
    Light_SetLightColor_10(context, &item_100, 0x100, 1, 1, 1);
    void item_200;
    Light_SetLightColor_10(param_2, &item_200, 0x100, 1, 1, 1);
    char* source_val = &item_200;
    char* data_1 = &item_100;

    while (true)
    {
        char temp_1 = *data_1;
        char context_1 = *source_val;
        bool c_1 = temp_1 < context_1;

        if (temp_1 == context_1)
        {
            if (!temp_1)
                break;

            temp_1 = data_1[1];
            context_1 = source_val[1];
            c_1 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                data_1 = &data_1[2];
                source_val = &source_val[2];

                if (!temp_1)
                    break;

                continue;
            }
        }

        return data_1 - data_1 + 1;
    }

    return 0;
}
