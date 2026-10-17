// IGI native provenance: WeatherLightmap_Invoke3 - 0x004FEA60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FEA60-WeatherLightmap_Invoke3.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke3.h"

void WeatherLightmap_Invoke3(void* arg1)

{
    void* context_val = *(arg1 + 0x14);

    if (!context_val)
        return;

    int32_t esi_1 = 0;
    esi_1 = *(context_val + 0x1c);
    int32_t result_val = *(((*g_a7a4f4 * 0x180 + esi_1) << 2) + &g_a96ae0);

    if (result_val)
        result_val(context_val, arg1);
}
