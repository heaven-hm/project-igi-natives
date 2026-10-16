#include "ProximityMine_Init_2.h"

int32_t ProximityMine_Init_2(void* pThis, char* param)

{
    int32_t result = *(param + 8);

    if (result != pThis)
    {
        int32_t edx_1 = *(pThis + 0x208);

        if (result != edx_1)
        {
            result = *(param + 0xc);

            if (result != pThis && result != edx_1)
            {
                *param = 1;
                return result;
            }
        }
    }

    *param = 0;
    return result;
}
