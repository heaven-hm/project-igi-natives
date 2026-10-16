#include "gi_platform.h"
#include "0044F060-HumanAI_LoadParameters.h"
int32_t HumanAI_LoadParameters(void* a1)

{
    int32_t objC;
    int32_t v_c = objC;
    AI_CheckVisibility_18((*(int32_t*)(uintptr_t)(a1 + 0x14)), a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x3b68)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3b70)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3b6c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c70)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3a28)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xe0)) = a1 + 0xe4;
    (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = a1 + 0xe0;
    (*(int32_t*)(uintptr_t)(a1 + 0xe4)) = 0;
    Env_ActivateEntity_12(a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x8fc)) = a1 + 0x900;
    (*(int32_t*)(uintptr_t)(a1 + 0x904)) = a1 + 0x8fc;
    (*(int32_t*)(uintptr_t)(a1 + 0x900)) = 0;
    char* valA3 = a1 + 0x934;
    int32_t i_2 = 0x20;
    int32_t i;

    do
    {
        *valA3 = 0;
        valA3 = &valA3[0x30];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    int32_t* srcS = a1 + 0xf08;
    int32_t v_c_1 = 0x20;
    (*(int32_t*)(uintptr_t)(a1 + 0x1508)) = a1 + 0x150c;
    (*(int32_t*)(uintptr_t)(a1 + 0x1510)) = a1 + 0x1508;
    (*(int32_t*)(uintptr_t)(a1 + 0x150c)) = 0;
    bool cond_0_1;

    do
    {
        srcS[1] = 0;
        *srcS = 0;
        Camera_SetFieldOfView_33(a1 + 0x1508, srcS);
        srcS = &srcS[0xc];
        cond_0_1 = v_c_1 != 1;
        v_c_1 -= 1;
    } while (cond_0_1);
    (*(int32_t*)(uintptr_t)(a1 + 0x1514)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3aa8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3aac)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3aba)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ab9)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3abb)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3abc)) = 0;
    int32_t i_1 = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3abd)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ac0)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ac4)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ac8)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3acc)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ad0)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ab0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ab4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3b60)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3b64)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ec8)) = 0x3cd4629b;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ecc)) = 0x3cd4629b;
    (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = 0x60000000;
    (*(int32_t*)(uintptr_t)(a1 + 0xa4)) = 0x3fe921fb;
    (*(int32_t*)(uintptr_t)(a1 + 0xa8)) = 0x60000000;
    (*(int32_t*)(uintptr_t)(a1 + 0xac)) = 0x3febecde;
    (*(int32_t*)(uintptr_t)(a1 + 0xb0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb4)) = 0x40fe0000;
    (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = 0;
    memcpy(a1 + 0xbc,
        "\x00\x00\xfe\x40\x00\x00\x00\x60\xfb\x21\xe9\x3f\x00\x00\x00\x60\x18\x57\xf6\x3f", 0x14);
    (*(int32_t*)(uintptr_t)(a1 + 0xd0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xd4)) = 0x40e40000;
    (*(int32_t*)(uintptr_t)(a1 + 0xd8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xdc)) = 0x40e40000;
    (*(int32_t*)(uintptr_t)(a1 + 0x3d38)) = 8;
    void* dstD = g_53c9e0;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD;
        dstD += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC4 = ~i_1;
    int32_t srcS2;
    int32_t dstD3;
    dstD3 = memcpy(a1 + 0x3d15, dstD - objC4, objC4 & 0xfffffffc);
    memcpy(dstD3, srcS2, objC4 & 3);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d40)) = 0x12c;
    (*(int32_t*)(uintptr_t)(a1 + 0x3db0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3db4)) = 0x40b80000;
    (*(int32_t*)(uintptr_t)(a1 + 0x3dd0)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3dd4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3df4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3dd8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3df8)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ddc)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3de0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3dfc)) = 0;
    int32_t tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x3d40));
    (*(int32_t*)(uintptr_t)(a1 + 0x3dfd)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e00)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e04)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3de8)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3dec)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3df0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3df1)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ea0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e10)) = tmpD1;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ab8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3d14)) = 0;
    __builtin_memset(a1 + 0x3e70, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x3e4a)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e4c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e28)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e2c)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e30)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e48)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e3c)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e44)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e50)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e54)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e58)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e5c)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e60)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e64)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e69)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e6a)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3e6b)) = 0;
    return 0;
}
