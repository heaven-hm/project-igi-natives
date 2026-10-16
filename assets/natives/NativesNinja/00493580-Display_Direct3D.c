#include "00493580-Display_Direct3D.h"
/* 0x00493580 Display_Direct3D full linked: callers=1 callees=36 */
int32_t* sub_493580()

{
    g_5ca0e0 = sub_4b0e00("Direct3D");
    int32_t eax_1 = sub_491df0();
    sub_4b0ec0(g_5ca0e0, eax_1, sub_493b20);
    int32_t eax_3 = sub_491e00();
    sub_4b0ec0(g_5ca0e0, eax_3, sub_4d3710);
    int32_t eax_4 = sub_491e10();
    sub_4b0ec0(g_5ca0e0, eax_4, sub_493d50);
    int32_t eax_5 = sub_491e20();
    sub_4b0ec0(g_5ca0e0, eax_5, sub_493b30);
    int32_t eax_7 = sub_491e30();
    sub_4b0ec0(g_5ca0e0, eax_7, sub_492400);
    int32_t eax_8 = sub_491e40();
    sub_4b0ec0(g_5ca0e0, eax_8, sub_494700);
    int32_t eax_9 = sub_491e50();
    sub_4b0ec0(g_5ca0e0, eax_9, sub_492450);
    int32_t eax_11 = sub_491e60();
    sub_4b0ec0(g_5ca0e0, eax_11, sub_4924d0);
    int32_t eax_12 = sub_491dc0();
    sub_4b0ec0(g_5ca0e0, eax_12, sub_494c50);
    int32_t eax_13 = sub_491db0();
    sub_4b0ec0(g_5ca0e0, eax_13, sub_493ca0);
    int32_t eax_15 = sub_491dd0();
    sub_4b0ec0(g_5ca0e0, eax_15, sub_494970);
    int32_t eax_16 = sub_491de0();
    sub_4b0ec0(g_5ca0e0, eax_16, sub_4927b0);
    g_bcad78 = 1;
    g_5ca0f8 = 1;
    __builtin_memset(&g_bcad20, 0, 0x50);
    g_bcabec = 0x3a83126f;
    g_bcad70 = 0x4479ffff;
    g_bcada0 = 0x3ed1b718;
    memcpy(&g_bcadc8,
        "\x01\x00\xc8\x48\x00\x50\xc3\x4d\x00\x00\xc0\x45\x00\x50\xc3\x4d\x18\xb7\x51\x3e\xcd\xcc\x4c\x43",
        0x18);
    memcpy(&g_bcadb0,
        "\x01\x00\xc8\x48\x90\xc2\x75\x3d\xa6\x9b\xc4\x40\x00\x50\xc3\x4d\xcd\xcc\xcc\x43", 0x14);
    g_bcada8 = 0x48c80001;
    g_bcabf0 = 0;
    g_bcacf0 = 0x3d4ccccd;
    g_bcad8c = 0x3f800000;
    g_bcade4 = 0x3f800000;
    g_bcad9c = 0x3f800000;
    g_bcade8 = sub_4b73f0(0xa);
    g_bcad7c = sub_4b73f0(0xa);
    g_bcadac = sub_4b73f0(0xa);
    int32_t* eax_20 = sub_4b73f0(0xa);
    g_bcadc4 = eax_20;
    g_bcacec = sub_4b7430(eax_20, sub_493a60);
    g_bcade0 = sub_4b7430(g_bcadc4, sub_493ac0);
    sub_48f490(sub_494f50);
    return sub_495200(sub_493820);
}
