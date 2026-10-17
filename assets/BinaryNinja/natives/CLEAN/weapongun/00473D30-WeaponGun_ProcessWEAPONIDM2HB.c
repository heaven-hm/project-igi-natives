// IGI native provenance: WeaponGun_ProcessWEAPONIDM2HB - 0x00473D30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00473D30-WeaponGun_ProcessWEAPONIDM2HB.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_ProcessWEAPONIDM2HB.h"

int32_t WeaponGun_ProcessWEAPONIDM2HB(float arg1)

{
    DynObj_QtasklistIsFull(Level_StartMission_3(), arg1);
    DynObj_LookupHashItem_6(Level_StartMission_4(), arg1, 0);
    long double x87_r7 = *(arg1 + 0x9c);
    long double x87_r6 = *(arg1 + 0xa0);
    x87_r6 - x87_r7;
    __builtin_memset(arg1 + 0xf0, 0, 0x18);
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(arg1 + 0xa0);
    else
        x87_r7_1 = *(arg1 + 0x9c);

    long double x87_r6_1 = *(arg1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(arg1 + 0x9c);
        long double x87_r6_2 = *(arg1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(arg1 + 0xa0);
        else
            x87_r7_3 = *(arg1 + 0x9c);
    }
    else
        x87_r7_3 = *(arg1 + 0x98);

    float var_18_3 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), arg1, arg1 + 0xf0, var_18_3, 1);
    *(arg1 + 0x108) = 0x3f800000;
    *(arg1 + 0x10c) = 0;
    *(arg1 + 0x110) = 0;
    *(arg1 + 0x114) = 0;
    *(arg1 + 0x118) = 0x3f800000;
    *(arg1 + 0x11c) = 0;
    *(arg1 + 0x120) = 0;
    *(arg1 + 0x124) = 0;
    *(arg1 + 0x128) = 0x3f800000;
    *(arg1 + 0x12c) = 0;
    __builtin_memcpy(arg1 + 0x70, arg1 + 0x108, 0x28);
    __builtin_memset(arg1 + 0x1f0, 0, 0x1c);
    *(arg1 + 0x218) = 0xffffffff;
    *(arg1 + 0x21c) = 0;
    *(arg1 + 0x1b0) = 0;
    int32_t result = Game_DataSymbolLoad(arg1 + 0x1c0, "WEAPON_ID_M2HB");
    *(arg1 + 0x1ec) = 0xffffffff;
    *(arg1 + 0x1e0) = 0x41c80000;
    *(arg1 + 0x1e4) = 0xc1c80000;
    *(arg1 + 0x1e8) = 0x42b40000;
    return result;
}
