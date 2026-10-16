#include "004D9620-Render_DrawBoneMesh_12.h"
/* 0x004d9620 Render_DrawBoneMesh_12 full linked: callers=5 callees=4 */
int32_t sub_4d9620(void* a1 @ 0x8, int16_t a2, int32_t* a3)

{
    sub_4c7760(a1);
    sub_4d2d60(a1 + 0x68, a2);
    *(a1 + 0x74) = a3;
    *(a1 + 0x78) = 0x3f800000;
    *(a1 + 0x7c) = 0;
    *(a1 + 0x80) = 0;
    *(a1 + 0x84) = 0;
    *(a1 + 0x88) = 0x3f800000;
    *(a1 + 0x8c) = 0;
    *(a1 + 0x90) = 0;
    *(a1 + 0x94) = 0;
    *(a1 + 0x98) = 0x3f800000;
    *(a1 + 0x9c) = 0;
    *(a1 + 0xa0) = sub_4d0950(a3);
    *(a1 + 0xa4) = 0x3f800000;
    *(a1 + 0xa8) = 0x3f800000;
    *(a1 + 0xac) = 0x3f800000;
    *(a1 + 0xd0) = 0;
    *(a1 + 0xb0) = 0x3f800000;
    __builtin_memset(a1 + 0xb4, 0, 0x18);
    *(a1 + 0xcc) = 1;
    *(a1 + 0xd4) = 1;
    return 1;
}
