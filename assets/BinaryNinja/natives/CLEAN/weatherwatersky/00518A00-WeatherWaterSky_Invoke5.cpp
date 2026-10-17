// IGI native provenance: WeatherWaterSky_Invoke5 - 0x00518A00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518A00-WeatherWaterSky_Invoke5.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke5.h"

void* WeatherWaterSky_Invoke5(void* arg1)

{
    Script_ParseEnumReal32_5();
    *(arg1 + 0x4b4c) = g_b818a0;
    *(arg1 + 0x4b50) = g_b818a4;
    *(arg1 + 0x4b54) = g_b818a8;
    long double x87_r7_1 = *(arg1 + 0x4b4c) * 0.5f;
    *(arg1 + 0x4b58) = g_ba2030;
    *(arg1 + 0x4b5c) = g_ba2034;
    int32_t ba2038_1 = g_ba2038;
    *(arg1 + 0x4b4c) = x87_r7_1;
    long double x87_r7_3 = *(arg1 + 0x4b50) * 0.5f;
    *(arg1 + 0x4b60) = ba2038_1;
    *(arg1 + 0x4b50) = x87_r7_3;
    *(arg1 + 0x4b54) = *(arg1 + 0x4b54) * 0.5f;
    void* a44344_1 = g_a44344;
    g_ba2040 = *(arg1 + 0x4c1c);
    *(a44344_1 + 0xdfc) = &g_ba2040;
    int32_t ecx_2 = g_a81020 + 1;
    g_a81020 = ecx_2;
    *((ecx_2 << 2) + &data_a80308) = arg1;
    return arg1;
}
