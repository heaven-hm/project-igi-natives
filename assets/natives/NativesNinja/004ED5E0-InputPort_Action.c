#include "004ED5E0-InputPort_Action.h"
/* 0x004ed5e0 InputPort_Action full linked: callers=3 callees=1 */
int32_t sub_4ed5e0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8 @ 0x24, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15)

{
    int32_t eax_1 = a1 * 0xb0;
    *(eax_1 + 0xbc20a4) = a2;
    *(eax_1 + 0xbc20a8) = a3;
    *(eax_1 + 0xbc20ac) = a4;
    *(eax_1 + 0xbc20b0) = 0;
    *(eax_1 + 0xbc20b4) = 0;
    *(eax_1 + 0xbc20b8) = 0;
    *(eax_1 + 0xbc20c0) = a5;
    *(eax_1 + 0xbc20c4) = a5;
    *(eax_1 + 0xbc20c8) = a10;
    *(eax_1 + 0xbc20cc) = a13;
    *(eax_1 + 0xbc20d0) = a6;
    *(eax_1 + 0xbc20d4) = a8;
    *(eax_1 + 0xbc20d8) = a11;
    *(eax_1 + 0xbc20dc) = a14;
    *(eax_1 + 0xbc20e0) = a7;
    *(eax_1 + 0xbc20e4) = a9;
    *(eax_1 + 0xbc20e8) = a12;
    *(eax_1 + 0xbc20ec) = a15;
    sub_507e90(eax_1 + &g_bc20f0, sub_4ed010);
    return 0;
}
