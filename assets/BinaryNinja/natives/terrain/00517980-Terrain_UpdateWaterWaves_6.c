// Original IGI.EXE function: Terrain_UpdateWaterWaves_6 (VA 0x00517980; static CFG gate PASS, CFG score 1.000).
#include "Terrain_UpdateWaterWaves_6.h"
int32_t* Terrain_UpdateWaterWaves_6(int32_t* a1, int32_t a2)

{
    int32_t* result = a1;

    if (result)
    {
        while (true)
        {
            int32_t* result_1 = *result;

            if (result_1)
                result = result_1;
            else
            {
                int32_t* valA = result[1];

                if (!valA)
                    break;

                void* valA1 = *valA;

                if (!valA1)
                    break;

                result = *(valA1 + 8);
            }

            if (!result)
                break;

            if (result[4] == a2)
                return result;
        }
    }

    return 0;
}
