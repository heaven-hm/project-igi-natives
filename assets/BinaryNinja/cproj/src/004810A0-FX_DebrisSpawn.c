#include "gi_platform.h"
#include "004810A0-FX_DebrisSpawn.h"
struct status_msg* FX_DebrisSpawn(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, int32_t a7, uint32_t a8, uint32_t a9, int32_t* a10, int32_t a11, int32_t a12, int32_t* a13, int32_t a14, int32_t a15, int32_t* a16, uint32_t a17, uint32_t a18, uint32_t a19, uint32_t a20)

{
    int32_t kind;
    kind = g_5c1154;
    struct status_msg* result = QTask_HandleInput(Script_FormatString(), kind, 0);
    memcpy(&result->head[8], a1, 0x18);
    result->head[0xf] = a3;
    result->head[0xe] = a2;
    result->head[0x10] = a3;
    result->head[0x14] = a4;
    result->head[0x16] = a6;
    result->head[0x15] = a5;
    result->head[0x11] = *a16;
    result->head[0x12] = a16[1];
    result->head[0x13] = a16[2];
    long double fpu7 = result->head[0x11];
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_48113e: ;
        long double x87_r7_3 = result->head[0x13];
        long double x87_r6_1 = result->head[0x12];
        long double x87_r5_1 = result->head[0x11];
        long double x87_r7_5 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_3 * x87_r7_3);
        result->head[0x11] = result->head[0x11] * x87_r7_5;
        result->head[0x12] = result->head[0x12] * x87_r7_5;
        result->head[0x13] = result->head[0x13] * x87_r7_5;
    }
    else
    {
        long double x87_r7_1 = result->head[0x12];
        long double f1_1 = 0.0f;
        x87_r7_1 - f1_1;

        if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_48113e;

        long double x87_r7_2 = result->head[0x13];
        long double f2_1 = 0.0f;
        x87_r7_2 - f2_1;

        if (!(*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_48113e;
    }

    result->head[0x17] = a17;
    result->head[0x18] = a18;
    result->head[0x19] = a19;
    result->head[0x1a] = a8;
    result->head[0x1b] = a9;
    int32_t* v_1c;

    if (a10 && *a10)
    {
        uint32_t valA8 = Weapon_CheckAmmo_8();
        int32_t objC5 = 0;
        objC5 = *(*a10 + 0x1c);

        if (*(((valA8 * 0x180 + objC5) << 2) + &g_a96ae0))
        {
            int32_t tmpD8 = g_5c1164 + 0x18;
            v_1c = a10;
            int32_t srcS4 = *a10;
            int32_t v_14_1 = tmpD8;
            int32_t v_18_1 = 0;
            int32_t v_10_1 = a7;
            uint32_t valA13 = Weapon_CheckAmmo_8();
            int32_t tmpD9 = 0;
            tmpD9 = *(srcS4 + 0x1c);
            ((int(*)())(uintptr_t)(*(((valA13 * 0x180 + tmpD9) << 2) + &g_a96ae0)))(srcS4, &v_1c);
        }
    }

    int32_t dstD1 = a12;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC9 = ~i;
    int32_t srcS6;
    int32_t dstD4;
    dstD4 = memcpy(&result->head[0x1c], dstD1 - objC9, objC9 & 0xfffffffc);
    memcpy(dstD4, srcS6, objC9 & 3);
    float v_28 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.628318548.0f;
    float v_24 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.628318548.0f;
    float v_20 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.628318548.0f;
    float* v_40_2 = &v_28;
    result->head[0x20] = Physics_CheckHullCollision_2(0x2d, a11, 0, 0x3f7ae148, 0x3f19999a, 0x4232674f,
        result->head[0x15] * 0.000219726557.0f, &v_28, 0);

    if (a13 == 0xffffffff)
    {
        result->head[0x21] = a20;
        return result;
    }

    v_1c = a13;
    int32_t v_14_2 = a14;
    int32_t v_18_2 = 1;
    int32_t v_c = a1;
    int32_t v_10_2 = a15;
    int32_t v_4 = 0;
    struct status_msg* result_1 = result;
    AI_EventBroadcast(&v_1c);
    result->head[0x21] = a20;
    return result;
}
