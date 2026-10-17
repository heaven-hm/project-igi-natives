// IGI native provenance: WeatherLightmap_Invoke9 - 0x00506240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00506240-WeatherLightmap_Invoke9.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke9.h"

void* WeatherLightmap_Invoke9(void* arg1)

{
    if (!*(arg1 + 0xd4))
    {
        int32_t eax_1 = *(arg1 + 0xe4);

        if (eax_1 != 0xffffffff)
        {
            int32_t a7ad08_1 = g_a7ad08;

            if (eax_1 != a7ad08_1 - 1)
            {
                void* ecx_1 = *((a7ad08_1 << 2) + &g_a7a8f0);
                *((eax_1 << 2) + &g_a7a8f4) = ecx_1;
                *(ecx_1 + 0xe4) = eax_1;
            }

            g_a7ad08 -= 1;
        }
    }

    return DynObj_RegisterSymbol_9(*(arg1 + 0x68), arg1);
}
