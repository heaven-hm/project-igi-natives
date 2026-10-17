// Original IGI.EXE function: M203_Setup (VA 0x00476340; static CFG gate PASS, CFG score 0.944).
#include "M203_Setup.h"
int32_t M203_Setup(int32_t* a1)

{
    long double x87_r7_1 = a1[0x42] * 0.995000005f;
    int32_t* valA = a1[0x45];
    a1[0x42] = x87_r7_1;
    long double x87_r6_1 = a1[0x43] * 0.995000005f;
    double v_88[0x3];
    memcpy(&v_88, &a1[0x3c], 0x18);
    a1[0x43] = x87_r6_1;
    long double x87_r6_4 = (a1[0x44] - 35.6807098f) * 0.995000005f;
    float v_d0 = x87_r6_4;
    a1[0x44] = x87_r6_4;
    int32_t* v_c8 = a1;
    *(a1 + 0xf0) = x87_r7_1 + *(a1 + 0xf0);
    *(a1 + 0xf8) = x87_r6_1 + *(a1 + 0xf8);
    *(a1 + 0x100) = v_d0 + *(a1 + 0x100);
    double v_b8[0x3];
    memcpy(&v_b8, &a1[0x3c], 0x18);

    if (!valA)
        int32_t v_c4_1 = 0;
    else
        int32_t v_c4 = *valA;

    int32_t* valA2 = a1[0x46];

    if (!valA2)
        int32_t v_c0_1 = 0;
    else
        int32_t v_c0 = *valA2;

    int32_t v_bc = 0x3f800000;
    char valA3 = Level_StartMission_2();
    int32_t v_cc;
    int32_t v_70;
    int32_t objC2 = DynObj_FindSymbol_11(Level_StartMission_4(), &v_70, &v_88, &v_b8, 1, valA3,
        &v_cc, 0xffffffff);
    int32_t v_18;

    if (v_18)
    {
        int32_t v_114 = objC2;
        int32_t v_118 = objC2;
        void v_68;
        FX_SmokeEmit(&v_68, 1, 1, a1[0x49], a1[0x48] * 4096f, 0, 0x45800000, 3, 1, &v_70,
            "1009_01_1", "explo_proxy", 0x15, 2, 0x47c80000, 0);
        return QTask_FindType(a1);
    }

    long double x87_r7_10 = a1[0x27];
    long double x87_r6_5 = a1[0x28];
    x87_r6_5 - x87_r7_10;
    long double x87_r7_11;

    if (!(*(&((x87_r6_5 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_11 = a1[0x28];
    else
        x87_r7_11 = a1[0x27];

    long double x87_r6_6 = a1[0x26];
    x87_r6_6 - x87_r7_11;
    long double x87_r7_13;

    if (*(&((x87_r6_6 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, x87_r7_11) ? 1 : 0) << 0xa
        | (x87_r6_6 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_14 = a1[0x27];
        long double x87_r6_7 = a1[0x28];
        x87_r6_7 - x87_r7_14;

        if (!(*(&((x87_r6_7 < x87_r7_14 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_7, x87_r7_14) ? 1 : 0) << 0xa
                | (x87_r6_7 == x87_r7_14 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_13 = a1[0x28];
        else
            x87_r7_13 = a1[0x27];
    }
    else
        x87_r7_13 = a1[0x26];

    float v_e8_1 = Render_ComputeNormals(a1[0x1b]) * x87_r7_13;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, &a1[0x3c], v_e8_1);
    v_cc = 0;
    void v_a0;
    memcpy(&v_a0, &a1[0x3c], 0x18);
    int32_t v_c8_1 = 0;
    int32_t v_c4_2 = 0;
    float v_c4_3 = (Sys_AllocateMemory_14(Level_SetMission_5()) * 0.75 + 0.14999999999999999) * 4096000f
        * 9.25925906e-06f;
    float v_d4_2 = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.34999999999999998;
    long double x87_r7_26 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
    v_d0 = (x87_r7_26 + x87_r7_26) * 0.052359879f + 0.0127990814f;
    return Script_SpawnNewTask_31(a1[0x47], &v_a0, &v_cc, v_d4_2, v_d0, 0, 0x3f800000, 7, 7);
}
