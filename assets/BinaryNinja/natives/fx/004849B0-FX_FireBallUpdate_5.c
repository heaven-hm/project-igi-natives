// Original IGI.EXE function: FX_FireBallUpdate_5 (VA 0x004849B0; static CFG gate FAIL, CFG score 0.821).
#include "FX_FireBallUpdate_5.h"
int32_t FX_FireBallUpdate_5(void* a1)

{
    void* ctxB = **(a1 + 0x68);
    double v_e8;
    memcpy(&v_e8, ctxB + 0x20, 0x18);
    double v_90;
    memcpy(&v_90, **(ctxB + 0xde8) + 0x20, 0x18);
    double v_80 = v_80 + 4096.0;
    double v_a8;
    memcpy(&v_a8, &v_e8, 0x18);
    double v_d8;
    double v_98 = v_d8 + 4096.0;
    double v_c0 = v_90 - v_e8;
    double v_e0;
    double v_88;
    double v_b8 = v_88 - v_e0;
    double v_b0 = v_80 - v_d8;
    long double fp0 = Sys_OpenFileStream_11(&v_c0);
    long double f0 = 0.0;
    fp0 - f0;

    if (!(*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        long double x87_r7_11 = 10240.0 / fp0;
        void* v_74_1 = ctxB;
        v_c0 = x87_r7_11 * v_c0;
        double v_b8_1 = x87_r7_11 * v_b8;
        long double x87_r7_12 = x87_r7_11 * v_b0;
        double v_b0_1 = x87_r7_12;
        v_e8 = v_a8 - v_c0;
        double v_a0;
        v_e0 = v_a0 - v_b8_1;
        v_d8 = v_98 - x87_r7_12;
        char valA3 = Level_LoadObjects_4();
        void v_78;
        void v_70;
        DynObj_FindSymbol_11(Level_StartMission_4(), &v_70, &v_a8, &v_e8, 1, valA3, &v_78,
            0xffffffff);
        int32_t v_18;
        void v_68;

        if (v_18)
            memcpy(&v_a8, &v_68, 0x18);
        else
            memcpy(&v_a8, &v_e8, 0x18);
    }

    float v_138;
    FX_DebrisSpawn_3(&v_138, &v_a8, &v_90);
    memcpy(a1 + 0x20, &v_a8, 0x18);
    float v_110;
    Sys_CloseFileStream_12(&v_110, -1.57079637f);
    float v_134;
    float v_130;
    float v_104;
    float v_f8;
    v_e8 = v_f8 * v_130 + v_104 * v_134 + v_110 * v_138;
    float v_10c;
    float v_100;
    float v_f4;
    *(&v_e8 + 4) = v_f4 * v_130 + v_100 * v_134 + v_10c * v_138;
    float v_108;
    float v_fc;
    float v_f0;
    v_e0 = v_f0 * v_130 + v_fc * v_134 + v_108 * v_138;
    float v_12c;
    float v_128;
    float v_124;
    *(&v_e0 + 4) = v_124 * v_f8 + v_128 * v_104 + v_12c * v_110;
    v_d8 = v_124 * v_f4 + v_128 * v_100 + v_12c * v_10c;
    *(&v_d8 + 4) = v_124 * v_f0 + v_128 * v_fc + v_12c * v_108;
    int32_t v_114;
    int32_t result;
    int32_t v_c4 = result + v_114 + 1;
    float v_120;
    float v_11c;
    float v_118;
    float v_d0 = v_118 * v_f8 + v_11c * v_104 + v_120 * v_110;
    float v_cc = v_118 * v_f4 + v_11c * v_100 + v_120 * v_10c;
    float v_c8 = v_118 * v_f0 + v_11c * v_fc + v_120 * v_108;
    memcpy(a1 + 0x38, &v_e8, 0x28);
    return result;
}
