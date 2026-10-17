// Original IGI.EXE function: HumanAI_LoadParameters (VA 0x0044F060; static CFG gate FAIL, CFG score 0.809).
#include "HumanAI_LoadParameters.h"
int32_t HumanAI_LoadParameters(void* context)

{
    int32_t entity_val;
    int32_t item_c = entity_val;
    AI_CheckVisibility_18(*(context + 0x14), context);
    *(context + 0x3b68) = 0xffffffff;
    *(context + 0x3b70) = 0;
    *(context + 0x3b6c) = 0;
    *(context + 0x3c70) = 0;
    *(context + 0x3a28) = 0;
    *(context + 0xe0) = context + 0xe4;
    *(context + 0xe8) = context + 0xe0;
    *(context + 0xe4) = 0;
    Env_ActivateEntity_12(context);
    *(context + 0x8fc) = context + 0x900;
    *(context + 0x904) = context + 0x8fc;
    *(context + 0x900) = 0;
    char* data_3 = context + 0x934;
    int32_t i_2 = 0x20;
    int32_t i;

    do
    {
        *data_3 = 0;
        data_3 = &data_3[0x30];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    int32_t* source_val = context + 0xf08;
    int32_t item_c_1 = 0x20;
    *(context + 0x1508) = context + 0x150c;
    *(context + 0x1510) = context + 0x1508;
    *(context + 0x150c) = 0;
    bool flag_0_1;

    do
    {
        source_val[1] = 0;
        *source_val = 0;
        Camera_SetFieldOfView_33(context + 0x1508, source_val);
        source_val = &source_val[0xc];
        flag_0_1 = item_c_1 != 1;
        item_c_1 -= 1;
    } while (flag_0_1);
    *(context + 0x1514) = 0;
    *(context + 0x3aa8) = 0;
    *(context + 0x3aac) = 0;
    *(context + 0x3aba) = 0;
    *(context + 0x3ab9) = 0;
    *(context + 0x3abb) = 0;
    *(context + 0x3abc) = 0;
    int32_t i_1 = 0xffffffff;
    *(context + 0x3abd) = 0;
    *(context + 0x3ac0) = 0xffffffff;
    *(context + 0x3ac4) = 0xffffffff;
    *(context + 0x3ac8) = 0xffffffff;
    *(context + 0x3acc) = 0;
    *(context + 0x3ad0) = 0xffffffff;
    *(context + 0x3ab0) = 0;
    *(context + 0x3ab4) = 0;
    *(context + 0x3b60) = 0xffffffff;
    *(context + 0x3b64) = 0;
    *(context + 0x3ec8) = 0x3cd4629b;
    *(context + 0x3ecc) = 0x3cd4629b;
    *(context + 0xa0) = 0x60000000;
    *(context + 0xa4) = 0x3fe921fb;
    *(context + 0xa8) = 0x60000000;
    *(context + 0xac) = 0x3febecde;
    *(context + 0xb0) = 0;
    *(context + 0xb4) = 0x40fe0000;
    *(context + 0xb8) = 0;
    memcpy(context + 0xbc,
        "\x00\x00\xfe\x40\x00\x00\x00\x60\xfb\x21\xe9\x3f\x00\x00\x00\x60\x18\x57\xf6\x3f", 0x14);
    *(context + 0xd0) = 0;
    *(context + 0xd4) = 0x40e40000;
    *(context + 0xd8) = 0;
    *(context + 0xdc) = 0x40e40000;
    *(context + 0x3d38) = 8;
    void* dest_val = g_53c9e0;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_val;
        dest_val += 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_4 = ~i_1;
    int32_t source_2;
    int32_t dest_3;
    dest_3 = memcpy(context + 0x3d15, dest_val - entity_4, entity_4 & 0xfffffffc);
    memcpy(dest_3, source_2, entity_4 & 3);
    *(context + 0x3d40) = 0x12c;
    *(context + 0x3db0) = 0;
    *(context + 0x3db4) = 0x40b80000;
    *(context + 0x3dd0) = 0xffffffff;
    *(context + 0x3dd4) = 0;
    *(context + 0x3df4) = 0;
    *(context + 0x3dd8) = 0;
    *(context + 0x3df8) = 0xffffffff;
    *(context + 0x3ddc) = 0;
    *(context + 0x3de0) = 0;
    *(context + 0x3dfc) = 0;
    int32_t temp_1 = *(context + 0x3d40);
    *(context + 0x3dfd) = 0;
    *(context + 0x3e00) = 0xffffffff;
    *(context + 0x3e04) = 0xffffffff;
    *(context + 0x3de8) = 0xffffffff;
    *(context + 0x3dec) = 0xffffffff;
    *(context + 0x3df0) = 0;
    *(context + 0x3df1) = 0;
    *(context + 0x3ea0) = 0;
    *(context + 0x3e10) = temp_1;
    *(context + 0x3ab8) = 0;
    *(context + 0x3d14) = 0;
    memset(context + 0x3e70, 0, 0x18);
    *(context + 0x3e4a) = 0;
    *(context + 0x3e4c) = 0;
    *(context + 0x3e28) = 0;
    *(context + 0x3e2c) = 0xffffffff;
    *(context + 0x3e30) = 0xffffffff;
    *(context + 0x3e48) = 0;
    *(context + 0x3e3c) = 0xffffffff;
    *(context + 0x3e44) = 0xffffffff;
    *(context + 0x3e50) = 0;
    *(context + 0x3e54) = 0;
    *(context + 0x3e58) = 0;
    *(context + 0x3e5c) = 0xffffffff;
    *(context + 0x3e60) = 0;
    *(context + 0x3e64) = 0;
    *(context + 0x3e69) = 0;
    *(context + 0x3e6a) = 0;
    *(context + 0x3e6b) = 0;
    return 0;
}
