// IGI native provenance: FlatSky_Update - 0x0051EB40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051EB40-FlatSky_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FlatSky_Update.h"
int32_t FlatSky_Update(void* context)

{
    int32_t entity_1 = Display_SetBackgroundColourFn(*(context + 0x78) * 255.0f, *(context + 0x7c) * 255.0f,
        *(context + 0x80) * 255.0f);

    if (*(context + 0xc8))
    {
        *(context + 0xb0) = *(context + 0xbc);
        *(context + 0xb4) = *(context + 0xc0);
        *(context + 0xb8) = *(context + 0xc4);
        *(context + 0x98) = *(context + 0xa4);
        *(context + 0x9c) = *(context + 0xa8);
        entity_1 = *(context + 0xac);
        *(context + 0xa0) = entity_1;
    }

    int32_t item_10_1 = entity_1;
    Light_ComputeDirectionalLight_10(*(context + 0x84), *(context + 0x88) * 3.14159274f * 0.00555555569f);
    return Light_SampleLightmap_9(*(context + 0x84), context + 0x8c, context + 0xa4, context + 0x98, context + 0xbc,
        context + 0xb0);
}
