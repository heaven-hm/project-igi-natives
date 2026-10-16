#include "00529A10-Light_RenderLensflare_7.h"
/* 0x00529a10 Light_RenderLensflare_7 full linked: callers=2 callees=2 */
int32_t* sub_529a10(void* a1)

{
    (*(a1 + 0x100))(a1);
    *(a1 + 0x104) = *(a1 + 0x100);
    int32_t* eax_1 = sub_4e75a0();
    int32_t var_18 = 0;
    return Camera_SubmitFrame(*(a1 + 0x88), a1 + 0xb8, a1 + 0x8c, *(a1 + 0xd0), 0x3f800000,
        eax_1, 0, 0, 0f);
}
