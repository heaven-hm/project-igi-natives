#include "Lensflare_LoadParameters.h"
void* Lensflare_LoadParameters(void* a1)

{
    void* valA = *(a1 + 0x84);

    if (valA == 0xffffffff)
    {
        void* dstD2 = *(a1 + 0x14);

        if (dstD2)
        {
            valA = Light_SampleLightmap_5();

            if (*(dstD2 + 0x1c) == valA)
            {
                *(a1 + 0x6c) = *(dstD2 + 0x24);
                *(a1 + 0x70) = *(dstD2 + 0x28);
                *(a1 + 0x74) = *(dstD2 + 0x2c);
                *(a1 + 0x78) = *(dstD2 + 0x30);
                valA = *(dstD2 + 0x34);
                *(a1 + 0x7c) = valA;
                *(a1 + 0x80) = *(dstD2 + 0x38);
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

            if (*(dstD + 0x1c) == valA)
            {
                *(a1 + 0x6c) = *(dstD + 0x24);
                *(a1 + 0x70) = *(dstD + 0x28);
                *(a1 + 0x74) = *(dstD + 0x2c);
                *(a1 + 0x78) = *(dstD + 0x30);
                *(a1 + 0x7c) = *(dstD + 0x34);
                int32_t valA3 = *(dstD + 0x38);
                *(a1 + 0x80) = valA3;
                return valA3;
            }
        }
    }

    return valA;
}
