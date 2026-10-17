// Original IGI.EXE function: Light_RenderLensflare_7 (VA 0x00529A10; static CFG gate PASS, CFG score 1.000).
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
