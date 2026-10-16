#include "gi_platform.h"
#include "00406340-Config_SetGamma_2.h"
void* Config_SetGamma_2(int32_t a1)

{
    void* result = Level_InitTextures_7();
    int32_t srcS = 1;

    while (srcS != a1)
    {
        void* valA = FX_ExplosionSpawn_6(srcS);
        result = Config_GetActivePlayerProfileRecord();

        if (srcS == *(result + 0x560))
        {
            result = Config_GetActivePlayerProfileRecord();
            *(result + 0x560) = a1;
        }

        srcS = (*(int32_t*)(uintptr_t)(valA + 0x4a4));

        if (srcS == 0xffffffff)
            break;
    }

    return result;
}
