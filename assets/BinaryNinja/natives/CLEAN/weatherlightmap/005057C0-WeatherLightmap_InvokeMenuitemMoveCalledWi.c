// IGI native provenance: WeatherLightmap_InvokeMenuitemMoveCalledWi - 0x005057C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005057C0-WeatherLightmap_InvokeMenuitemMoveCalledWi.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_InvokeMenuitemMoveCalledWi.h"

void* WeatherLightmap_InvokeMenuitemMoveCalledWi(void* arg1, int32_t* arg2)

{
    if (*arg2 != *(arg1 + 0x38))
        *(arg1 + 0x4e) = 0;
    else
    {
        char ecx_1 = arg2[6];

        if (ecx_1 & 1)
            return Physics_MenuitemMoveCalledWi(*(arg1 + 0x14), 0xfffffffd);

        if (ecx_1 & 2)
            return Physics_MenuitemMoveCalledWi(*(arg1 + 0x14), 0xfffffffc);

        if (ecx_1 & 4)
            return Physics_MenuitemMoveCalledWi(*(arg1 + 0x14), 0xffffffff);

        if (ecx_1 & 8)
            return Physics_MenuitemMoveCalledWi(*(arg1 + 0x14), 0xfffffffe);

        *(arg1 + 0x4d) = 1;
    }

    int32_t ecx_3 = *(arg1 + 0x50);

    if (!ecx_3)
        return arg1;

    return ecx_3(arg1, arg2);
}
