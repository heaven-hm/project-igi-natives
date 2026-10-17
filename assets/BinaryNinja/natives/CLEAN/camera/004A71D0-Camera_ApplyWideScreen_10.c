// IGI native provenance: Camera_ApplyWideScreen_10 - 0x004A71D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A71D0-Camera_ApplyWideScreen_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_10.h"
uint32_t Camera_ApplyWideScreen_10(char* context)

{
    char* source_val = context;
    uint32_t i;
    int32_t entity_val;
    int32_t temp_val;
    i = Camera_SetFieldOfView_19(entity_val);
    int32_t entity_1 = *source_val;

    if (i != 0x65)
    {
        do
        {
            source_val = &source_val[1];

            if (g_54427c <= 1)
            {
                int32_t data_2 = *source_val;
                entity_1 = g_544070;
                data_2 = *(entity_1 + (data_2 << 1));
                i = data_2 & 4;
            }
            else
            {
                int32_t data_1 = *source_val;
                int32_t item_c_1 = data_1;
                i = Camera_ApplyBandFilter_12(data_1, temp_val, entity_1, 4);
                entity_1 = 4;
            }
        } while (i);
    }

    i = *source_val;
    *source_val = g_544280;
    char* source_1 = &source_val[1];
    char i_1;

    do
    {
        i_1 = *source_1;
        *source_1 = i;
        i = i_1;
        i_1 = *source_1;
        source_1 = &source_1[1];
    } while (i_1);
    return i;
}
