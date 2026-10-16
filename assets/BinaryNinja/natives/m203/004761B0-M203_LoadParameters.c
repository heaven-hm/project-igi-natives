#include "M203_LoadParameters.h"
struct status_msg* M203_LoadParameters(float a1)

{
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    DynObj_QtasklistIsFull(Level_CheckQTaskID_4(), a1);
    DynObj_LookupHashItem_6(Level_StartMission_4(), a1, 0);
    long double fpu7 = *(a1 + 0x9c);
    long double fpu6 = *(a1 + 0xa0);
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    float v_44_3 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), a1, &v_18, v_44_3, 2);
    *(a1 + 0x114) = 0;
    *(a1 + 0x118) = 0;
    uint32_t tmpD1 = g_5be3ac + 0x18;
    int32_t v_24 = 0;
    int32_t v_20 = 0;
    int32_t v_1c = 0;
    int32_t v_38;
    memcpy(&v_38,
        "\x9a\x99\x19\x44\x9a\x99\x19\x44\x00\x00\xfe\x42\x00\x00\xfe\x42\x00\x00\xfe\x42", 0x14);
    void* valA6 = Level_StartMission_4();
    int32_t v_30;
    struct status_msg* result = Script_FormatString_30(Script_FormatString(), valA6, tmpD1, &v_24, &v_30, &v_38,
        0x49480000, 0x1000008, 0, 0x3dcccccd, 0, 0x14, 0);
    *(a1 + 0x11c) = result;
    return result;
}
