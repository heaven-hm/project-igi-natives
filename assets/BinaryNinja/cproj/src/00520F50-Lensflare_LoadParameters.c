#include "gi_platform.h"
#include "00520F50-Lensflare_LoadParameters.h"
void* Lensflare_LoadParameters(void* a1)

{
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0x84));

    if (valA == 0xffffffff)
    {
        void* dstD2 = (*(int32_t*)(uintptr_t)(a1 + 0x14));

        if (dstD2)
        {
            valA = Light_SampleLightmap_5();

            if (*(dstD2 + 0x1c) == valA)
            {
                (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = *(dstD2 + 0x24);
                (*(int32_t*)(uintptr_t)(a1 + 0x70)) = *(dstD2 + 0x28);
                (*(int32_t*)(uintptr_t)(a1 + 0x74)) = *(dstD2 + 0x2c);
                (*(int32_t*)(uintptr_t)(a1 + 0x78)) = *(dstD2 + 0x30);
                valA = *(dstD2 + 0x34);
                (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = valA;
                (*(int32_t*)(uintptr_t)(a1 + 0x80)) = *(dstD2 + 0x38);
            }
        }
    }
    else
    {
        valA = Script_ExecuteLevelScript_4(valA);
        void* dstD = valA;

        if (dstD)
        {
            valA = Light_SampleLightmap_5();

            if ((*(int32_t*)(uintptr_t)(dstD + 0x1c)) == valA)
            {
                (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = (*(int32_t*)(uintptr_t)(dstD + 0x24));
                (*(int32_t*)(uintptr_t)(a1 + 0x70)) = (*(int32_t*)(uintptr_t)(dstD + 0x28));
                (*(int32_t*)(uintptr_t)(a1 + 0x74)) = (*(int32_t*)(uintptr_t)(dstD + 0x2c));
                (*(int32_t*)(uintptr_t)(a1 + 0x78)) = (*(int32_t*)(uintptr_t)(dstD + 0x30));
                (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = (*(int32_t*)(uintptr_t)(dstD + 0x34));
                int32_t valA3 = (*(int32_t*)(uintptr_t)(dstD + 0x38));
                (*(int32_t*)(uintptr_t)(a1 + 0x80)) = valA3;
                return valA3;
            }
        }
    }

    return valA;
}
