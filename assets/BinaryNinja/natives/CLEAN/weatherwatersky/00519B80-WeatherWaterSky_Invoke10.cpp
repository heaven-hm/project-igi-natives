// IGI native provenance: WeatherWaterSky_Invoke10 - 0x00519B80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00519B80-WeatherWaterSky_Invoke10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke10.h"

int32_t WeatherWaterSky_Invoke10(void* arg1)

{
    return Terrain_SelectTerrainLOD_10(*(arg1 + 0x14), arg1);
}
