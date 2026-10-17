// IGI native provenance: Terrain_UpdateWaterWaves_6 - 0x00517980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517980-Terrain_UpdateWaterWaves_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_UpdateWaterWaves_6.h"
int32_t* Terrain_UpdateWaterWaves_6(int32_t* context, int32_t param_2)

{
    int32_t* result = context;

    if (result)
    {
        while (true)
        {
            int32_t* result_1 = *result;

            if (result_1)
                result = result_1;
            else
            {
                int32_t* data_val = result[1];

                if (!data_val)
                    break;

                void* data_1 = *data_val;

                if (!data_1)
                    break;

                result = *(data_1 + 8);
            }

            if (!result)
                break;

            if (result[4] == param_2)
                return result;
        }
    }

    return 0;
}
