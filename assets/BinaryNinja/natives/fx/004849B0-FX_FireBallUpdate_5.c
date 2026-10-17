// Original IGI.EXE function: FX_FireBallUpdate_5 (VA 0x004849B0; static CFG gate FAIL, CFG score 0.821).
#include "FX_FireBallUpdate_5.h"
int32_t FX_FireBallUpdate_5(void* context)

{
    void* context_val = **(context + 0x68);
    double item_e8;
    memcpy(&item_e8, context_val + 0x20, 0x18);
    double item_90;
    memcpy(&item_90, **(context_val + 0xde8) + 0x20, 0x18);
    double item_80 = item_80 + 4096.0;
    double item_a8;
    memcpy(&item_a8, &item_e8, 0x18);
    double item_d8;
    double item_98 = item_d8 + 4096.0;
    double item_c0 = item_90 - item_e8;
    double item_e0;
    double item_88;
    double item_b8 = item_88 - item_e0;
    double item_b0 = item_80 - item_d8;
    long double fp0 = Sys_OpenFileStream_11(&item_c0);
    long double f0 = 0.0;
    fp0 - f0;

    if (!(*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        long double fpu_val_7_11 = 10240.0 / fp0;
        void* item_74_1 = context_val;
        item_c0 = fpu_val_7_11 * item_c0;
        double item_b8_1 = fpu_val_7_11 * item_b8;
        long double fpu_val_7_12 = fpu_val_7_11 * item_b0;
        double item_b0_1 = fpu_val_7_12;
        item_e8 = item_a8 - item_c0;
        double item_a0;
        item_e0 = item_a0 - item_b8_1;
        item_d8 = item_98 - fpu_val_7_12;
        char data_3 = Level_LoadObjects_4();
        void item_78;
        void item_70;
        DynObj_FindSymbol_11(Level_StartMission_4(), &item_70, &item_a8, &item_e8, 1, data_3, &item_78,
            0xffffffff);
        int32_t item_18;
        void item_68;

        if (item_18)
            memcpy(&item_a8, &item_68, 0x18);
        else
            memcpy(&item_a8, &item_e8, 0x18);
    }

    float item_138;
    FX_DebrisSpawn_3(&item_138, &item_a8, &item_90);
    memcpy(context + 0x20, &item_a8, 0x18);
    float item_110;
    Sys_CloseFileStream_12(&item_110, -1.57079637f);
    float item_134;
    float item_130;
    float item_104;
    float item_f8;
    item_e8 = item_f8 * item_130 + item_104 * item_134 + item_110 * item_138;
    float item_10c;
    float item_100;
    float item_f4;
    *(&item_e8 + 4) = item_f4 * item_130 + item_100 * item_134 + item_10c * item_138;
    float item_108;
    float item_fc;
    float item_f0;
    item_e0 = item_f0 * item_130 + item_fc * item_134 + item_108 * item_138;
    float item_12c;
    float item_128;
    float item_124;
    *(&item_e0 + 4) = item_124 * item_f8 + item_128 * item_104 + item_12c * item_110;
    item_d8 = item_124 * item_f4 + item_128 * item_100 + item_12c * item_10c;
    *(&item_d8 + 4) = item_124 * item_f0 + item_128 * item_fc + item_12c * item_108;
    int32_t item_114;
    int32_t result;
    int32_t item_c4 = result + item_114 + 1;
    float item_120;
    float item_11c;
    float item_118;
    float item_d0 = item_118 * item_f8 + item_11c * item_104 + item_120 * item_110;
    float item_cc = item_118 * item_f4 + item_11c * item_100 + item_120 * item_10c;
    float item_c8 = item_118 * item_f0 + item_11c * item_fc + item_120 * item_108;
    memcpy(context + 0x38, &item_e8, 0x28);
    return result;
}
