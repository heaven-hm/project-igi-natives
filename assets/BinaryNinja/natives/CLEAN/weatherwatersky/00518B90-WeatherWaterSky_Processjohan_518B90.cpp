// IGI native provenance: WeatherWaterSky_Processjohan_518B90 - 0x00518B90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518B90-WeatherWaterSky_Processjohan_518B90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Processjohan_518B90.h"

int32_t WeatherWaterSky_Processjohan_518B90(int32_t* arg1)

{
    arg1[0x3c] = g_a44344;
    __builtin_memset(&arg1[0x12fa], 0, 0x3c);
    arg1[0x1309] = 0xa;
    arg1[0x130d] = 0x200;
    arg1[0x130a] = 0;
    arg1[0x130b] = 0;
    arg1[0x130c] = 0;
    arg1[0x130e] = 0xffffffff;
    arg1[0x130f] = 0xffffffff;
    arg1[0x1310] = 0xffffffff;
    arg1[0x1311] = 0xffffffff;
    void* result_val = DynObj_Missing("johan");
    DynObj_LookupHashItem_6(arg1[0x3c], arg1, result_val);
    DynObj_LinkDynamicCube_8(arg1[0x3c], arg1, &arg1[0x12f4], 4096f, 2);
    int32_t a8101c_1 = g_a8101c;
    g_a81020 = 0;
    *((a8101c_1 << 2) + &g_a80200) = arg1;
    g_a8101c = a8101c_1 + 1;
    return a8101c_1 + 1;
}
