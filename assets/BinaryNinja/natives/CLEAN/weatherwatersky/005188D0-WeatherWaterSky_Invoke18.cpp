// IGI native provenance: WeatherWaterSky_Invoke18 - 0x005188D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005188D0-WeatherWaterSky_Invoke18.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke18.h"

int32_t* WeatherWaterSky_Invoke18(int32_t* arg1)

{
    int32_t* result = arg1;

    if (result[0xf])
    {
        void** esi_1 = &result[0x13];
        int32_t i_1 = 3;
        int32_t i;

        do
        {
            result = *esi_1;

            if (result)
                result = Sys_ReadFileBlock_18(result);

            esi_1 = &esi_1[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
