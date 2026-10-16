#include "0051EA10-FlatSky_LoadParameters.h"
/* 0x0051ea10 FlatSky_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_51ea10(void* a1)

{
    void* eax = g_a44344;
    *(a1 + 0x68) = eax;
    *(a1 + 0x74) = 0x3f000000;
    *(a1 + 0x70) = 0x42c80000;
    *(a1 + 0x6c) = 0x40a00000;
    *(a1 + 0x78) = 0;
    *(a1 + 0x7c) = 0;
    *(a1 + 0x80) = 0;
    sub_4c6890(eax, a1, 0xffffffff);
    *(a1 + 0x84) = sub_52cb30();
    *(a1 + 0x88) = 0x41700000;
    *(a1 + 0x8c) = 0x3e428f5c;
    *(a1 + 0x90) = 0x3e99999a;
    *(a1 + 0x94) = 0x3edc28f6;
    memcpy(a1 + 0x98,
        "\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x"
    "3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc\x3e\x5c\x8f\x42\x3e\x9a\x99\x99\x3e\xf6\x28\xdc"
    "3e\x00",
        0x31);
    return 0x3e428f5c;
}
