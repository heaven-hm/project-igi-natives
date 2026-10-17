// IGI native provenance: WeatherLightmap_Invoke2_500DE0 - 0x00500DE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00500DE0-WeatherLightmap_Invoke2_500DE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke2_500DE0.h"

int32_t* WeatherLightmap_Invoke2_500DE0(int32_t* arg1)

{
    int32_t* result_val = arg1[5];
    int32_t* eax_1 = QTask_TriggerEvent_2(arg1, g_a7a620);
    void* eax_2 = QTask_AllocateEvent_2(arg1, g_a7a620);
    void* base_val = eax_2;
    eax_2 = g_a7a620;
    int32_t* result = QTask_DeleteTask_2(arg1, eax_2);
    arg1[0x3c] = result;

    if (result)
        result = Menu_FormatScreen_3(result);

    if (!base_val)
    {
        if (eax_1)
        {
            result = Menu_FormatScreen_3(eax_1[0x3c]);
            eax_1[0x3c] = 0;
        }
    }
    else if (eax_1)
    {
        char eax_4;

        if (*(eax_1 + 0x1a2) || *(eax_1 + 0x1a1))
            eax_4 = 1;
        else
            eax_4 = 0;

        int32_t ecx_2 = result_val[8];
        int32_t var_18_1 = ecx_2;
        ecx_2 = eax_1[0x69];
        result = SoundSys_Update3DPosition_2(eax_1[0x3c], base_val + 0xf8, &eax_1[0x3e], base_val + 0x110,
            &eax_1[0x44], eax_4, ecx_2, eax_1[0x66], &eax_1[0x62]);
    }

    result = arg1[0x68];

    if (!result)
        return result;

    return DynObj_RegisterSymbol_9(arg1[0x67], arg1);
}
