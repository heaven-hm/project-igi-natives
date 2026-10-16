#include "00517980-Terrain_UpdateWaterWaves_6.h"
/* 0x00517980 Terrain_UpdateWaterWaves_6 full linked: callers=2 callees=0 */
int32_t* sub_517980(int32_t* a1, int32_t a2)

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
                int32_t* eax = result[1];

                if (!eax)
                    break;

                void* eax_1 = *eax;

                if (!eax_1)
                    break;

                result = *(eax_1 + 8);
            }

            if (!result)
                break;

            if (result[4] == a2)
                return result;
        }
    }

    return 0;
}
