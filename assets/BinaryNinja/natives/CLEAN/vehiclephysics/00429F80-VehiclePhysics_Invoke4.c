// IGI native provenance: VehiclePhysics_Invoke4 - 0x00429F80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00429F80-VehiclePhysics_Invoke4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_Invoke4.h"

int32_t* VehiclePhysics_Invoke4(float arg1)

{
    void* result_val = *(arg1 + 0x14);

    if (*(result_val + 0x1c) == g_57bcb8)
        *(result_val + 0x778) += 1;

    *(arg1 + 0x20) = 0;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x30) = 0;
    __builtin_memset(arg1 + 0x764, 0, 0x18);
    *(arg1 + 0x758) = 0;
    *(arg1 + 0x754) = 0x43480000;
    *(arg1 + 0x750) = 0x3f800000;
    *(arg1 + 0x77c) = 0xffffffff;
    *(arg1 + 0x880) = 0;
    *(arg1 + 0x70) = 0x3f800000;
    *(arg1 + 0x74) = 0;
    *(arg1 + 0x78) = 0;
    *(arg1 + 0x7c) = 0;
    *(arg1 + 0x80) = 0x3f800000;
    *(arg1 + 0x84) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x8c) = 0;
    *(arg1 + 0x90) = 0x3f800000;
    *(arg1 + 0x94) = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x2c) = 0;
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x780) = 0;
    DynObj_LookupHashItem_6(Level_StartMission_4(), arg1, 0);
    long double x87_r7 = *(arg1 + 0x9c);
    long double x87_r6 = *(arg1 + 0xa0);
    x87_r6 - x87_r7;
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

    float var_14_2 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), arg1, arg1 + 0x20, var_14_2, 2);
    *(arg1 + 0x884) = SoundSys_Update3DPosition_7(2);
    Script_FormatString_16(arg1);
    *(arg1 + 0x888) = 0xffffffff;
    *(arg1 + 0x88c) = 0;
    return Script_ExecuteLevelScript_6(arg1 + 0x890);
}
