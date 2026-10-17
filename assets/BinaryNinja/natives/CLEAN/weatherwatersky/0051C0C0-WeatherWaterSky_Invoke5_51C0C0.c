// IGI native provenance: WeatherWaterSky_Invoke5_51C0C0 - 0x0051C0C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051C0C0-WeatherWaterSky_Invoke5_51C0C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke5_51C0C0.h"

int32_t WeatherWaterSky_Invoke5_51C0C0(void* arg1, int32_t arg2)

{
    void* source_ptr = *(arg1 + 0x14);
    uint32_t eax_1 = SoundSys_SetFrequency_5();
    int32_t data_val = 0;
    data_val = *(source_ptr + 0x1c);
    int32_t result = *(((eax_1 * 0x180 + data_val) << 2) + &g_a96ae0);

    if (!result)
        return result;

    return result(source_ptr, arg2);
}
