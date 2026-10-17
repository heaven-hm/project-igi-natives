// IGI native provenance: Light_RenderLensflare_7 - 0x00529A10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00529A10-Light_RenderLensflare_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_RenderLensflare_7.h"
int32_t* Light_RenderLensflare_7(void* context)

{
    (*(context + 0x100))(context);
    *(context + 0x104) = *(context + 0x100);
    int32_t* data_1 = SoundSys_SetFrequency_9();
    int32_t item_18 = 0;
    return Camera_SubmitFrame(*(context + 0x88), context + 0xb8, context + 0x8c, *(context + 0xd0), 0x3f800000,
        data_1, 0, 0, 0.0f);
}
