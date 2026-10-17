// IGI native provenance: Terrain_UpdateWaterWaves_5 - 0x00517510 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517510-Terrain_UpdateWaterWaves_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_UpdateWaterWaves_5.h"
int32_t Terrain_UpdateWaterWaves_5(char* context)

{
    char* temp_val = context;
    char data_val = *temp_val;
    int32_t entity_val;

    if (data_val != 0x24)
    {
        if (data_val != 0x30)
            return Camera_ResetMatrix_4(temp_val);

        entity_val = temp_val[1];

        if (entity_val != 0x78 && entity_val != 0x58)
            return Camera_ResetMatrix_4(temp_val);

        if (data_val != 0x24)
            temp_val = &temp_val[1];
    }

    entity_val = temp_val[1];
    void* temp_1 = &temp_val[1];
    int32_t result = 0;

    while (entity_val)
    {
        int32_t data_2 = result << 4;

        if (entity_val <= 0x39)
        {
            entity_val &= 0xf;
            result = data_2 + entity_val;
        }
        else
        {
            entity_val &= 0xf;
            result = data_2 + entity_val + 9;
        }

        entity_val = *(temp_1 + 1);
        temp_1 += 1;
    }

    return result;
}
