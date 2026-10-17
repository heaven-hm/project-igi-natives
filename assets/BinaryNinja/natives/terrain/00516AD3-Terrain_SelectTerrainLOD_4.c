// Original IGI.EXE function: Terrain_SelectTerrainLOD_4 (VA 0x00516AD3; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SelectTerrainLOD_4.h"
long double Terrain_SelectTerrainLOD_4(char* context)

{
    char* source_val = context;

    while (true)
    {
        BOOL data_2;
        wchar16 (* entity_val)[0x21];

        if (g_54427c <= 1)
        {
            uint32_t data_3 = *source_val;
            entity_val = g_544070;
            data_3 = (*entity_val)[data_3];
            data_2 = data_3 & 8;
        }
        else
        {
            uint32_t data_1 = *source_val;
            uint32_t item_c_1 = data_1;
            int32_t temp_val;
            data_2 = Camera_ApplyBandFilter_12(data_1, temp_val, entity_val, 8);
            entity_val = 8;
        }

        if (!data_2)
            break;

        source_val = &source_val[1];
    }

    int32_t item_8 = 0;
    int32_t item_c_2 = 0;
    void* item_10_1 = Camera_UpdateViewCone_20(source_val);
    return *(Terrain_CalculateNormals_4(source_val) + 0x10);
}
