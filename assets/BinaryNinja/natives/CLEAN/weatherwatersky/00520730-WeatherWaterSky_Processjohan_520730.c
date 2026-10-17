// IGI native provenance: WeatherWaterSky_Processjohan_520730 - 0x00520730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00520730-WeatherWaterSky_Processjohan_520730.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Processjohan_520730.h"

int32_t WeatherWaterSky_Processjohan_520730(int32_t* arg1)

{
    arg1[0x3c] = g_a44344;
    arg1[0x3e] = 0;
    arg1[0x40] = 0;
    arg1[0x42] = 0;
    arg1[0x3f] = 0;
    arg1[0x41] = 0;
    arg1[0x43] = 0;
    arg1[0x4a] = 0;
    void* result_val = DynObj_Missing("johan");
    DynObj_LookupHashItem_6(arg1[0x3c], arg1, result_val);
    return DynObj_LinkDynamicCube_8(arg1[0x3c], arg1, &arg1[0x3e], 4096f, 1);
}
