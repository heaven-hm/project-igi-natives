// IGI native provenance: Config_SetGamma_2 - 0x00406340 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406340-Config_SetGamma_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
