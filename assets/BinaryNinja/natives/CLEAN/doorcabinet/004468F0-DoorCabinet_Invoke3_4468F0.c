// IGI native provenance: DoorCabinet_Invoke3_4468F0 - 0x004468F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004468F0-DoorCabinet_Invoke3_4468F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke3_4468F0.h"

char* DoorCabinet_Invoke3_4468F0(float arg1)

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

    float var_18_2 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), arg1, arg1 + 0xf0, var_18_2, 2);
    *(arg1 + 0x74) = 0;
    *(arg1 + 0x78) = 0;
    *(arg1 + 0x70) = 0x3f800000;
    *(arg1 + 0x7c) = 0;
    *(arg1 + 0x80) = 0x3f800000;
    *(arg1 + 0x84) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x8c) = 0;
    *(arg1 + 0x90) = 0x3f800000;
    *(arg1 + 0x94) = 0;
    *(arg1 + 0x13c) = 0;
    *(arg1 + 0x140) = 0x42b40000;
    *(arg1 + 0x144) = 0x3f000000;
    *(arg1 + 0x148) = 0;
    __builtin_memcpy(arg1 + 0x110, arg1 + 0x70, 0x28);
    *(arg1 + 0x188) = 0;
    *(arg1 + 0x18c) = 0;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0x10c) = 0;
    *(arg1 + 0x198) = 0;
    *(arg1 + 0x19d) = 0;
    *(arg1 + 0x19e) = 0;
    Script_ExecuteLevelScript_6(arg1 + 0x1a0);
    Script_ExecuteLevelScript_6(arg1 + 0x1f0);
    Script_ExecuteLevelScript_6(arg1 + 0x240);
    *(arg1 + 0x290) = 0;
    *(arg1 + 0x294) = 0x40800000;
    *(arg1 + 0x298) = 0;
    *(arg1 + 0x138) = 0;
    *(arg1 + 0x194) = 0;
    char* result = arg1 + 0x158;
    int32_t i_1 = 3;
    int32_t i;

    do
    {
        *result = 0;
        result = &result[0x10];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(arg1 + 0x2e0) = 0;
    return result;
}
