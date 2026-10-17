// IGI native provenance: WeatherLightmap_ProcessRainDynCubeObj - 0x004F71F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F71F0-WeatherLightmap_ProcessRainDynCubeObj.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_ProcessRainDynCubeObj.h"

char* WeatherLightmap_ProcessRainDynCubeObj(void* arg1, void* arg2)

{
    long double x87_r7 = *(arg1 + 0x2c38);
    long double x87_r6 = *(arg1 + 0x2c40);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(arg1 + 0x2c40);
    else
        x87_r7_1 = *(arg1 + 0x2c38);

    long double temp0 = 800.0f;
    x87_r7_1 - temp0;

    if (!(*(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        x87_r7_1 = 800.0f;

    int32_t var_28;
    __builtin_memcpy(&var_28, arg1 + 0x2c20, 0x18);
    *(arg2 + 0x18) = 0;
    *(arg2 + 0x1c) = 0;
    *(arg2 + 0x20) = 0;
    double var_18;
    double var_18_1 = x87_r7_1 * 4096.0f + var_18;
    __builtin_memcpy(arg2, &var_28, 0x18);
    var_28 = 0x3f800000;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    var_18_1 = 0x3f800000;
    *(&var_18_1 + 4) = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    int32_t var_8 = 0x3f800000;
    int32_t var_4 = 0;
    __builtin_memcpy(arg2 + 0x24, &var_28, 0x28);
    *(arg2 + 0x4c) = *(arg1 + 0x2c38) * 4096.0f;
    char* result = *(arg2 + 0x50);

    if (!result)
        return result;

    return Game_DataSymbolLoad(result, "RainDynCubeObj");
}
