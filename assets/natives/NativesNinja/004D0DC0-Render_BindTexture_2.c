#include "004D0DC0-Render_BindTexture_2.h"
/* 0x004d0dc0 Render_BindTexture_2 full linked: callers=1 callees=0 */
int32_t sub_4d0dc0(void* a1, int32_t a2, int32_t a3)

{
    int32_t result = *(*(a1 + 0xc) + 0x14);
    *(result + a2 * 0x14 + 4) = a3;
    return result;
}
