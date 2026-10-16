#include "00504AD0-EditRigidObjAttachedToBone_LoadParameters.h"
/* 0x00504ad0 EditRigidObjAttachedToBone_LoadParameters full linked: callers=1 callees=4 */
int32_t sub_504ad0(int32_t* a1)

{
    a1[0x3c] = 0;
    a1[0x3d] = 0;
    a1[0x3e] = 0;
    a1[0x3f] = 0x3f800000;
    a1[0x40] = 0;
    a1[0x41] = 0;
    a1[0x42] = 0;
    a1[0x43] = 0x3f800000;
    a1[0x44] = 0;
    a1[0x45] = 0;
    a1[0x46] = 0;
    a1[0x47] = 0x3f800000;
    a1[0x48] = 0;
    a1[0x49] = 0;
    a1[0x4a] = g_54e6e8;
    int32_t edx = g_a44344;
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    sub_4c5710(edx, a1, 0);
    float var_24_2 = sub_4d0950(a1[0x1b]);
    return sub_4c7140(a1[0x1a], a1, &var_18, var_24_2, 2);
}
