#include "gi_platform.h"
#include "00525380-LightmapInfo_Update.h"
int32_t* LightmapInfo_Update(void* a1)

{
    int32_t* flagP = (*(int32_t*)(uintptr_t)(a1 + 0xdc));
    int32_t* result = flagP[8];

    if (!result)
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0x6c));
        int32_t i = 0;

        if (result[0xf] > 0)
        {
            int32_t* dstD1 = flagP;

            do
            {
                result = Light_ComputeDirectionalLight_5(dstD1);
                i += 1;
                dstD1 = &dstD1[9];
            } while (i < (*(int32_t*)(uintptr_t)(*(a1 + 0x6c) + 0x3c)));
        }

        flagP[8] = 1;
    }

    return result;
}
