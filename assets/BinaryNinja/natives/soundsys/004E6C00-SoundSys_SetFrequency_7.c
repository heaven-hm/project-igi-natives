// IGI native provenance: SoundSys_SetFrequency_7 - 0x004E6C00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6C00-SoundSys_SetFrequency_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetFrequency_7.h"
int32_t SoundSys_SetFrequency_7(void* context)

{
    int32_t data_3 = SoundSys_SetFrequency_6();
    int32_t temp_val = 0;
    temp_val = *(context + 0x1c);
    int32_t result = *(((data_3 * 0x180 + temp_val) << 2) + &g_a96ae0);

    if (result)
        result = result(context);

    return result;
}
