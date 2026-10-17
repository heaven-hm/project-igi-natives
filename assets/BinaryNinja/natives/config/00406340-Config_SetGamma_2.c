// Original IGI.EXE function: Config_SetGamma_2 (VA 0x00406340; static CFG gate PASS, CFG score 1.000).
#include "Config_SetGamma_2.h"
void* Config_SetGamma_2(int32_t context)

{
    void* result = Level_InitTextures_7();
    int32_t source_val = 1;

    while (source_val != context)
    {
        void* data_val = FX_ExplosionSpawn_6(source_val);
        result = Config_GetActivePlayerProfileRecord();

        if (source_val == *(result + 0x560))
        {
            result = Config_GetActivePlayerProfileRecord();
            *(result + 0x560) = context;
        }

        source_val = *(data_val + 0x4a4);

        if (source_val == 0xffffffff)
            break;
    }

    return result;
}
