#include "FlatSky_Update.h"
int32_t FlatSky_Update(void* a1)

{
    int32_t objC1 = Display_SetBackgroundColourFn(*(a1 + 0x78) * 255f, *(a1 + 0x7c) * 255f,
        *(a1 + 0x80) * 255f);

    if (*(a1 + 0xc8))
    {
        *(a1 + 0xb0) = *(a1 + 0xbc);
        *(a1 + 0xb4) = *(a1 + 0xc0);
        *(a1 + 0xb8) = *(a1 + 0xc4);
        *(a1 + 0x98) = *(a1 + 0xa4);
        *(a1 + 0x9c) = *(a1 + 0xa8);
        objC1 = *(a1 + 0xac);
        *(a1 + 0xa0) = objC1;
    }

    int32_t v_10_1 = objC1;
    Light_ComputeDirectionalLight_10(*(a1 + 0x84), *(a1 + 0x88) * 3.14159274f * 0.00555555569f);
    return Light_SampleLightmap_9(*(a1 + 0x84), a1 + 0x8c, a1 + 0xa4, a1 + 0x98, a1 + 0xbc,
        a1 + 0xb0);
}
