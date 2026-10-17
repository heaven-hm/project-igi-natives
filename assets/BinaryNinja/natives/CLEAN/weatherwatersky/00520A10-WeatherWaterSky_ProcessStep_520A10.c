// IGI native provenance: WeatherWaterSky_ProcessStep_520A10 - 0x00520A10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00520A10-WeatherWaterSky_ProcessStep_520A10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_ProcessStep_520A10.h"

int32_t WeatherWaterSky_ProcessStep_520A10(void* arg1)

{
    if (!*(arg1 + 0x128))
    {
        *(arg1 + 0x110) = *(arg1 + 0xf8) & 0xfffffffe;
        *(arg1 + 0x128) = 1;
        *(arg1 + 0x114) = *(arg1 + 0x100) & 0xfffffffe;
        *(arg1 + 0x118) = *(arg1 + 0x108) & 0xfffffffe;
        *(arg1 + 0x11c) = *(arg1 + 0x110);
        int32_t esi_2 = *(arg1 + 0x118);
        *(arg1 + 0x120) = *(arg1 + 0x114);
        *(arg1 + 0x124) = esi_2;
        int32_t* edx_9 = *(arg1 + 0xf0) + 0xde0;
        *edx_9 = *(arg1 + 0x110);
        edx_9[1] = *(arg1 + 0x114);
        edx_9[2] = *(arg1 + 0x118);
    }

    data_ba1fc8 = arg1 + 0xf8;
    float var_2c = 4096f;
    int32_t ecx_4 = *(arg1 + 0xf8) & 0xfffffffe;
    *(arg1 + 0x110) = ecx_4;
    *(arg1 + 0x114) = *(arg1 + 0x100) & 0xfffffffe;
    *(arg1 + 0x118) = *(arg1 + 0x108) & 0xfffffffe;
    data_ba1fd0 = *(arg1 + 0x11c) - ecx_4;
    data_ba1fd4 = *(arg1 + 0x120) - *(arg1 + 0x114);
    data_ba1fd8 = *(arg1 + 0x124) - *(arg1 + 0x118);
    void* edx_18 = *(arg1 + 0xf0);
    long double x87_r7_7 = *(arg1 + 0x11c);
    double var_18;
    __builtin_memcpy(&var_18, arg1 + 0xf8, 0x18);
    var_18 = var_18 - x87_r7_7;
    double var_10;
    double var_10_1 = var_10 - *(arg1 + 0x120);
    long double x87_r7_11 = *(arg1 + 0x124);
    double* var_30 = &var_18;
    double var_8;
    double var_8_1 = var_8 - x87_r7_11;
    return WorldObject_CommitTransform(edx_18, arg1, var_30, var_2c);
}
