// IGI native provenance: ExplosionObj_Invoke4_438C30 - 0x00438C30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00438C30-ExplosionObj_Invoke4_438C30.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_Invoke4_438C30.h"

int32_t* ExplosionObj_Invoke4_438C30(float arg1)

{
    DynObj_LookupHashItem_6(Level_StartMission_4(), arg1, 0);
    long double x87_r7 = *(arg1 + 0x9c);
    long double x87_r6 = *(arg1 + 0xa0);
    x87_r6 - x87_r7;
    __builtin_memset(arg1 + 0x20, 0, 0x18);
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

    float var_18_2 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), arg1, arg1 + 0x20, var_18_2, 2);
    *(arg1 + 0x160) = 0x3f800000;
    *(arg1 + 0x164) = 0;
    *(arg1 + 0x168) = 0;
    *(arg1 + 0x16c) = 0;
    *(arg1 + 0x170) = 0x3f800000;
    *(arg1 + 0x174) = 0;
    *(arg1 + 0x178) = 0;
    *(arg1 + 0x17c) = 0;
    *(arg1 + 0x180) = 0x3f800000;
    *(arg1 + 0x184) = 0;
    __builtin_memcpy(arg1 + 0x70, arg1 + 0x160, 0x28);
    *(arg1 + 0x1a0) = 0;
    *(arg1 + 0x1a4) = SoundSys_Update3DPosition_7(1);
    __builtin_memcpy(arg1 + 0x120,
        "\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x"
    "3f\x01",
        0x19);
    *(arg1 + 0xf0) = 0;
    int32_t* result = Script_ExecuteLevelScript_6(arg1 + 0x1ac);
    *(arg1 + 0x1a8) = 0;
    return result;
}
