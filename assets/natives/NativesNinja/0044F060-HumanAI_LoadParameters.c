#include "0044F060-HumanAI_LoadParameters.h"
/* 0x0044f060 HumanAI_LoadParameters full linked: callers=0 callees=7 */
int32_t sub_44f060(void* a1)

{
    int32_t ecx;
    int32_t var_c = ecx;
    sub_460c70(*(a1 + 0x14), a1);
    *(a1 + 0x3b68) = 0xffffffff;
    *(a1 + 0x3b70) = 0;
    *(a1 + 0x3b6c) = 0;
    *(a1 + 0x3c70) = 0;
    *(a1 + 0x3a28) = 0;
    *(a1 + 0xe0) = a1 + 0xe4;
    *(a1 + 0xe8) = a1 + 0xe0;
    *(a1 + 0xe4) = 0;
    sub_44f380(a1);
    *(a1 + 0x8fc) = a1 + 0x900;
    *(a1 + 0x904) = a1 + 0x8fc;
    *(a1 + 0x900) = 0;
    char* eax_3 = a1 + 0x934;
    int32_t i_2 = 0x20;
    int32_t i;

    do
    {
        *eax_3 = 0;
        eax_3 = &eax_3[0x30];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    int32_t* esi = a1 + 0xf08;
    int32_t var_c_1 = 0x20;
    *(a1 + 0x1508) = a1 + 0x150c;
    *(a1 + 0x1510) = a1 + 0x1508;
    *(a1 + 0x150c) = 0;
    bool cond:0_1;

    do
    {
        esi[1] = 0;
        *esi = 0;
        sub_4af8f0(a1 + 0x1508, esi);
        esi = &esi[0xc];
        cond:0_1 = var_c_1 != 1;
        var_c_1 -= 1;
    } while (cond:0_1);
    *(a1 + 0x1514) = 0;
    *(a1 + 0x3aa8) = 0;
    *(a1 + 0x3aac) = 0;
    *(a1 + 0x3aba) = 0;
    *(a1 + 0x3ab9) = 0;
    *(a1 + 0x3abb) = 0;
    *(a1 + 0x3abc) = 0;
    int32_t i_1 = 0xffffffff;
    *(a1 + 0x3abd) = 0;
    *(a1 + 0x3ac0) = 0xffffffff;
    *(a1 + 0x3ac4) = 0xffffffff;
    *(a1 + 0x3ac8) = 0xffffffff;
    *(a1 + 0x3acc) = 0;
    *(a1 + 0x3ad0) = 0xffffffff;
    *(a1 + 0x3ab0) = 0;
    *(a1 + 0x3ab4) = 0;
    *(a1 + 0x3b60) = 0xffffffff;
    *(a1 + 0x3b64) = 0;
    *(a1 + 0x3ec8) = 0x3cd4629b;
    *(a1 + 0x3ecc) = 0x3cd4629b;
    *(a1 + 0xa0) = 0x60000000;
    *(a1 + 0xa4) = 0x3fe921fb;
    *(a1 + 0xa8) = 0x60000000;
    *(a1 + 0xac) = 0x3febecde;
    *(a1 + 0xb0) = 0;
    *(a1 + 0xb4) = 0x40fe0000;
    *(a1 + 0xb8) = 0;
    memcpy(a1 + 0xbc,
        "\x00\x00\xfe\x40\x00\x00\x00\x60\xfb\x21\xe9\x3f\x00\x00\x00\x60\x18\x57\xf6\x3f", 0x14);
    *(a1 + 0xd0) = 0;
    *(a1 + 0xd4) = 0x40e40000;
    *(a1 + 0xd8) = 0;
    *(a1 + 0xdc) = 0x40e40000;
    *(a1 + 0x3d38) = 8;
    void* edi = g_53c9e0;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi;
        edi += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_4 = ~i_1;
    int32_t esi_2;
    int32_t edi_3;
    edi_3 = memcpy(a1 + 0x3d15, edi - ecx_4, ecx_4 & 0xfffffffc);
    memcpy(edi_3, esi_2, ecx_4 & 3);
    *(a1 + 0x3d40) = 0x12c;
    *(a1 + 0x3db0) = 0;
    *(a1 + 0x3db4) = 0x40b80000;
    *(a1 + 0x3dd0) = 0xffffffff;
    *(a1 + 0x3dd4) = 0;
    *(a1 + 0x3df4) = 0;
    *(a1 + 0x3dd8) = 0;
    *(a1 + 0x3df8) = 0xffffffff;
    *(a1 + 0x3ddc) = 0;
    *(a1 + 0x3de0) = 0;
    *(a1 + 0x3dfc) = 0;
    int32_t edx_1 = *(a1 + 0x3d40);
    *(a1 + 0x3dfd) = 0;
    *(a1 + 0x3e00) = 0xffffffff;
    *(a1 + 0x3e04) = 0xffffffff;
    *(a1 + 0x3de8) = 0xffffffff;
    *(a1 + 0x3dec) = 0xffffffff;
    *(a1 + 0x3df0) = 0;
    *(a1 + 0x3df1) = 0;
    *(a1 + 0x3ea0) = 0;
    *(a1 + 0x3e10) = edx_1;
    *(a1 + 0x3ab8) = 0;
    *(a1 + 0x3d14) = 0;
    __builtin_memset(a1 + 0x3e70, 0, 0x18);
    *(a1 + 0x3e4a) = 0;
    *(a1 + 0x3e4c) = 0;
    *(a1 + 0x3e28) = 0;
    *(a1 + 0x3e2c) = 0xffffffff;
    *(a1 + 0x3e30) = 0xffffffff;
    *(a1 + 0x3e48) = 0;
    *(a1 + 0x3e3c) = 0xffffffff;
    *(a1 + 0x3e44) = 0xffffffff;
    *(a1 + 0x3e50) = 0;
    *(a1 + 0x3e54) = 0;
    *(a1 + 0x3e58) = 0;
    *(a1 + 0x3e5c) = 0xffffffff;
    *(a1 + 0x3e60) = 0;
    *(a1 + 0x3e64) = 0;
    *(a1 + 0x3e69) = 0;
    *(a1 + 0x3e6a) = 0;
    *(a1 + 0x3e6b) = 0;
    return 0;
}
