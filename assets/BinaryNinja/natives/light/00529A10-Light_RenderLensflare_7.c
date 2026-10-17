// Original IGI.EXE function: Light_RenderLensflare_7 (VA 0x00529A10; static CFG gate PASS, CFG score 1.000).
#include "Light_RenderLensflare_7.h"
int32_t* Light_RenderLensflare_7(void* a1)

{
    (*(a1 + 0x100))(a1);
    *(a1 + 0x104) = *(a1 + 0x100);
    int32_t* valA1 = SoundSys_SetFrequency_9();
    int32_t v_18 = 0;
    return Camera_SubmitFrame(*(a1 + 0x88), a1 + 0xb8, a1 + 0x8c, *(a1 + 0xd0), 0x3f800000,
        valA1, 0, 0, 0f);
}
