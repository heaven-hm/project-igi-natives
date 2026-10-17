// IGI native provenance: WeatherWaterSky_InvokeLightmapsRes - 0x00523450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00523450-WeatherWaterSky_InvokeLightmapsRes.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_InvokeLightmapsRes.h"

int32_t WeatherWaterSky_InvokeLightmapsRes(void* arg1)

{
    if (!g_a83a08)
    {
        Light_LightmapsRes();

        if (Sys_AllocateMemory_16(0xa83b54))
        {
            void* ecx_1;
            int32_t edx_1;
            ecx_1 = Light_LightmapsRes();
            int32_t var_10_1 = 0xa83b54;
            Resource_Load(0xa83b54, edx_1, ecx_1, nullptr);
        }
    }

    int32_t a83a08_1 = g_a83a08;
    void** eax_4 = *(g_a83a04 + (a83a08_1 << 2)) * g_a83a10 + g_a83a00;
    *(data_a83a14 + eax_4) = a83a08_1;
    g_a83a08 += 1;
    *(arg1 + 0x74) = eax_4;
    *eax_4 = arg1;
    *(arg1 + 0x68) = 0;
    *(arg1 + 0x6f) = 0;
    *(arg1 + 0x70) = 0;
    *(arg1 + 0x71) = 0;
    *(arg1 + 0x69) = 0;
    *(arg1 + 0x6a) = 0;
    *(arg1 + 0x6b) = 0;
    *(arg1 + 0x6c) = 0;
    *(arg1 + 0x6d) = 0;
    *(arg1 + 0x6e) = 0;
    *(arg1 + 0x72) = 0;
    *(arg1 + 0x73) = 0;
    Game_DataSymbolLoad(arg1 + 0x78, &g_script_ret_type);
    int32_t ecx_2 = *(arg1 + 0x14);
    __builtin_memcpy(arg1 + 0x8c,
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\xc8\x42\x00\x00\x80\x3f\x00\x00\x80\x3f\xe8\x03\x00\x"
    "00\x96\x00\x00\x00",
        0x1c);
    *(arg1 + 0xa8) = 0;
    *(arg1 + 0xac) = 0;
    *(arg1 + 0xb0) = 0;
    *(arg1 + 0xb4) = 1;
    *(arg1 + 0xd0) = 0;
    *(arg1 + 0xd4) = 0;
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xb8) = ecx_2;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0xc8) = 0;
    *(arg1 + 0xbc) = 0;
    *(arg1 + 0xcc) = 1;
    *(arg1 + 0xdc) = 0;
    DynObj_RegisterSymbol_8(g_a44344, arg1, 0);
    return Light_CalculateAttenuation_2(arg1);
}
