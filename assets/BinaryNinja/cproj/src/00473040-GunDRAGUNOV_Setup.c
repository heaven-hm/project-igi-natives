#include "gi_platform.h"
#include "00473040-GunDRAGUNOV_Setup.h"
int32_t GunDRAGUNOV_Setup(float a1, int32_t a2)

{
    int32_t valA = g_c28b44;
    int32_t objC = g_c28b48;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x1b0)))
        return ((int(*)())(uintptr_t)(*(((FX_DebrisSpawn_8() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0)))(a1, a2);

    a1 = valA;
    a2 = a1 / Sys_CloseFileStream_17(g_5be360 + 0x18);
    long double x87_r7_3 = objC;
    float v_18 = x87_r7_3;
    float v_c = x87_r7_3 * 0.5.0f;
    float v_8 = a1 * 0.5.0f;
    float v_4 = -(a2);
    Sys_FreeMemory_15(g_5be360 + 0x18, v_4, v_4, v_8, v_4, v_4, v_c, v_8, v_c, 128.0f,
        128.0f, 128.0f, 0, 0x1000000, 0);
    float v_4_1 = a1 + a2;
    Sys_FreeMemory_15(g_5be360 + 0x18, v_4_1, v_4, v_8, v_4, v_4_1, v_c, v_8, v_c,
        128.0f, 128.0f, 128.0f, 0, 0x1000000, 0);
    a2 = v_18 + a2;
    Sys_FreeMemory_15(g_5be360 + 0x18, v_4, a2, v_8, a2, v_4, v_c, v_8, v_c, 128.0f,
        128.0f, 128.0f, 0, 0x1000000, 0);
    Sys_FreeMemory_15(g_5be360 + 0x18, v_4_1, a2, v_8, a2, v_4_1, v_c, v_8, v_c, 128.0f,
        128.0f, 128.0f, 0, 0x1000000, 0);
    int32_t valA15 = Sys_ExecuteBytecode_17(g_5be364 + 0x18);
    int32_t valA16;
    int32_t tmpD5;
    tmpD5 = HIGHD(valA15);
    valA16 = LOWD(valA15);
    int32_t valA19;
    int32_t tmpD6;
    tmpD6 = HIGHD(objC);
    valA19 = LOWD(objC);
    a2 = ((valA19 - tmpD6) >> 1) - ((valA16 - tmpD5) >> 1);
    float v_4_3 = valA15 + a2;
    Sys_FreeMemory_15(g_5be364 + 0x18, 0, a2, a1, a2, 0, v_4_3, a1, v_4_3, 128.0f, 128.0f,
        128.0f, 0, 0x1000000, 0);
    int32_t valA27 = Sys_CloseFileStream_17(g_5be35c + 0x18);
    int32_t valA28;
    int32_t tmpD9;
    tmpD9 = HIGHD(valA27);
    valA28 = LOWD(valA27);
    int32_t valA31;
    int32_t tmpD10;
    tmpD10 = HIGHD(valA);
    valA31 = LOWD(valA);
    a1 = ((valA31 - tmpD10) >> 1) - ((valA28 - tmpD9) >> 1);
    a2 = valA27 + a1;
    return Sys_FreeMemory_15(g_5be35c + 0x18, a1, 0, a2, 0, a1, v_18, a2, v_18, 128.0f, 128.0f,
        128.0f, 0, 0x1000000, 0);
}
