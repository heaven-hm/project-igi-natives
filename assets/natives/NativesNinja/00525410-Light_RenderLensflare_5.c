#include "00525410-Light_RenderLensflare_5.h"
/* 0x00525410 Light_RenderLensflare_5 full linked: callers=1 callees=3 */
int32_t sub_525410(void* a1)

{
    Qhash_Init(1);
    int16_t ecx_1 = *(a1 + 0x28);
    sub_4b2450(a1, 0, ecx_1 << 2, ecx_1, *(a1 + 0x2a), 3, *(a1 + 0x24));
    /* tailcall */
    return Qhash_Reset();
}
