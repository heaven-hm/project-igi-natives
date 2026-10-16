#include "gi_platform.h"
#include "00471480-Weapon_WeaponsStringsBinocu.h"
int32_t Weapon_WeaponsStringsBinocu(void* a1)

{
    int32_t valA = g_c28b44;
    int32_t objC = g_c28b48;
    void* v_11c = a1;
    void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x14));
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x7c));
    void* v_118 = valA1;
    int32_t tmpD = *(valA1 + 0x14);
    double v_108;
    memcpy(&v_108, a1 + 0x60, 0x18);
    double v_13c = fpu7;
    double v_134 = (*(int32_t*)(uintptr_t)(a1 + 0x80));
    double v_12c = (*(int32_t*)(uintptr_t)(a1 + 0x84));
    int32_t v_114 = tmpD;
    int32_t v_110 = 0x3f800000;
    long double x87_r7_3;

    if (!FX_SmokeEmit_26())
        x87_r7_3 = 1000.0;
    else
        x87_r7_3 = 914.40000000000009;

    v_13c = x87_r7_3 * v_13c * 4096.0;
    long double x87_r7_6;

    if (!FX_SmokeEmit_26())
        x87_r7_6 = 1000.0;
    else
        x87_r7_6 = 914.40000000000009;

    double v_134_1 = x87_r7_6 * v_134 * 4096.0;
    long double x87_r7_9;

    if (!FX_SmokeEmit_26())
        x87_r7_9 = 1000.0;
    else
        x87_r7_9 = 914.40000000000009;

    v_13c = v_108 + v_13c;
    double v_100;
    double v_134_2 = v_100 + v_134_1;
    double v_f8;
    double v_12c_1 = v_f8 + x87_r7_9 * v_12c * 4096.0;
    char valA5 = Level_StartMission_2();
    char v_120;
    char v_f0;
    DynObj_FindSymbol_11(Level_StartMission_4(), &v_f0, &v_108, &v_13c, 1, valA5, &v_120, 0xffffffff);
    int32_t valA7;
    void* objC1;
    int32_t tmpD1;
    valA7 = Sys_CheckHeap_16("weapons/strings/Binoculars/range");
    int32_t* dstD;

    if (!valA7)
        dstD = "RANGE";
    else
    {
        char* v_17c_1 = "weapons/strings/Binoculars/range";
        dstD = Resource_Load(valA7, tmpD1, objC1, nullptr);
    }

    char* v_18c_1;
    char* v_188_1;
    double v_15c;
    int32_t v_98;
    char v_80;

    if (!v_98)
    {
        void* valA14 = &g_5402cc;

        if (!FX_SmokeEmit_26())
            valA14 = &g_5402c8;

        void* v_178_1 = valA14;
        int32_t valA15 = FX_SmokeEmit_26();
        int32_t valA16 = -(valA15);
        char v_180 = ((valA16 - valA16) & 0x7d0) + 0x3e8;
        int32_t* v_184_1 = dstD;
        v_188_1 = "%s: %0.f+%s";
        v_18c_1 = &v_80;
    }
    else
    {
        double v_90;
        v_15c = v_90 * 0.000244140625;
        void* ctxB1 = &g_5402cc;

        if (!FX_SmokeEmit_26())
            ctxB1 = &g_5402c8;

        if (!FX_SmokeEmit_26())
        {
            int32_t tmpD2 = *(&v_15c + 4);
            v_15c = v_15c;
            *(&v_15c + 4) = tmpD2;
        }
        else
            v_15c = v_15c * 3.2808398950000002;

        void* v_178 = ctxB1;
        int32_t v_17c_2 = *(&v_15c + 4);
        int32_t v_180_1 = v_15c;
        int32_t* v_184 = dstD;
        v_188_1 = "%s: %0.f%s";
        v_18c_1 = &v_80;
    }

    Game_DataSymbolLoad(v_18c_1, v_188_1);
    Sys_FreeMemory_18((*(int32_t*)(uintptr_t)(a1 + 0x20)), &v_80);
    long double x87_r7_18 = valA;
    float v_160 = x87_r7_18;
    (*(int32_t*)(uintptr_t)(*(a1 + 0x20) + 4)) = x87_r7_18 * 0.378125012.0f;
    long double x87_r7_20 = objC;
    float v_154 = x87_r7_20;
    (*(int32_t*)(uintptr_t)(*(a1 + 0x20) + 8)) = x87_r7_20 * 0.550000012.0f - Sys_AllocateMemory_22((*(int32_t*)(uintptr_t)(a1 + 0x20)));
    Sys_CloseFileStream_18((*(int32_t*)(uintptr_t)(a1 + 0x20)));
    float v_124;
    float v_10c;
    Sys_ResolveSymbol_10(a1 + 0x7c, &v_124, &v_10c);
    Weapon_ComputeAccuracy_2(a1);
    float* srcS2 = a1 + 0x2b54;
    int32_t i_1 = 0xc;
    float v_164_1 = v_160 * 0.125.0f;
    v_15c = v_154 * 0.762499988.0f;
    float v_150_3 = v_160 * 0.1875.0f * 0.0833333358.0f;
    int32_t i;

    do
    {
        Weapon_CycleFireMode(srcS2, a1 + 0x138);
        Weapon_CheckAmmo(srcS2, v_164_1, v_15c, v_150_3 - v_160 * 0.00937500037.0f,
            v_154 * 0.125.0f, 0.0f, 0);
        srcS2 = &srcS2[5];
        i = i_1;
        i_1 -= 1;
        v_164_1 = v_150_3 + v_164_1;
    } while (i != 1);
    v_15c = Sys_CloseFileStream_17(g_5be344 + 0x18);
    float v_164_2 = v_160 / v_15c;
    v_15c = v_154 + v_164_2;
    int32_t dstD1 = v_15c;
    float v_14c_1 = v_160 * 0.5.0f;
    float v_144_1 = -(v_164_2);
    Sys_FreeMemory_15(g_5be344 + 0x18, v_144_1, v_144_1, v_14c_1, v_144_1, v_144_1, dstD1,
        v_14c_1, dstD1, 128.0f, 128.0f, 128.0f, 0, 0x1000000, 0);
    v_15c = v_160 + v_164_2;
    int32_t valA26 = v_15c;
    int32_t objC8 = Sys_FreeMemory_15(g_5be344 + 0x18, valA26, v_144_1, v_14c_1, v_144_1, valA26,
        dstD1, v_14c_1, dstD1, 128.0f, 128.0f, 128.0f, 0, 0x1000000, 0);
    int32_t valA30;
    int32_t tmpD8;
    tmpD8 = HIGHD(objC);
    valA30 = LOWD(objC);
    v_15c = (valA30 - tmpD8) >> 1;
    int32_t valA34;
    int32_t tmpD9;
    tmpD9 = HIGHD(valA);
    valA34 = LOWD(valA);
    float v_14c_2 = v_15c;
    v_15c = (valA34 - tmpD9) >> 1;
    float v_164_3 = v_15c;
    float v_148_1 = v_160 * 0.09375.0f;
    int32_t v_180_3 = objC8;
    int32_t v_184_3 = objC8;
    int32_t v_1a4_2 = objC8;
    int32_t objC9 = Sys_DispatchOpcode_15(0x534070, 5.60519386e-45.0f, v_164_3 - v_148_1, v_14c_2,
        0x3f800000, 0.0f, 100.0f, 0.0f, 0x3f000000, 0.0f, v_160 * 0.015625.0f, v_154 * 0.020833334.0f,
        0x80000, 0);
    int32_t v_180_5 = objC9;
    int32_t v_184_5 = objC9;
    int32_t v_1a4_4 = objC9;
    Sys_DispatchOpcode_15(0x534070, 5.60519386e-45.0f, v_148_1 + v_164_3, v_14c_2, 0x3f800000, 0.0f, 100.0f,
        0.0f, 0x3f000000, 0.0f, v_160 * -0.015625.0f, v_154 * -0.020833334.0f, 0x80000, 0);
    Sys_ExecuteBytecode_15(0.0f, v_14c_2, 0x3f800000, v_160, v_14c_2, 0x3f800000, 0.0f, 32.0f, 0.0f, 0.0f, 32.0f, 0.0f,
        0x3f000000, 0x80000, 0);
    Sys_ExecuteBytecode_15(v_164_3, 0.0f, 0x3f800000, v_164_3, v_154, 0x3f800000, 0.0f, 32.0f, 0.0f, 0.0f, 32.0f, 0.0f,
        0x3f000000, 0x80000, 0);
    return Weapon_FireBullet_2(a1);
}
