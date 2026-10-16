#include "004849B0-FX_FireBallUpdate_5.h"
/* 0x004849b0 FX_FireBallUpdate_5 full linked: callers=1 callees=13 */
int32_t sub_4849b0(void* a1)

{
    void* ebx = **(a1 + 0x68);
    double var_e8;
    memcpy(&var_e8, ebx + 0x20, 0x18);
    double var_90;
    memcpy(&var_90, **(ebx + 0xde8) + 0x20, 0x18);
    double var_80 = var_80 + 4096.0;
    double var_a8;
    memcpy(&var_a8, &var_e8, 0x18);
    double var_d8;
    double var_98 = var_d8 + 4096.0;
    double var_c0 = var_90 - var_e8;
    double var_e0;
    double var_88;
    double var_b8 = var_88 - var_e0;
    double var_b0 = var_80 - var_d8;
    long double st0 = sub_4b3130(&var_c0);
    long double temp0 = 0.0;
    st0 - temp0;

    if (!(*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
        | (st0 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        long double x87_r7_11 = 10240.0 / st0;
        void* var_74_1 = ebx;
        var_c0 = x87_r7_11 * var_c0;
        double var_b8_1 = x87_r7_11 * var_b8;
        long double x87_r7_12 = x87_r7_11 * var_b0;
        double var_b0_1 = x87_r7_12;
        var_e8 = var_a8 - var_c0;
        double var_a0;
        var_e0 = var_a0 - var_b8_1;
        var_d8 = var_98 - x87_r7_12;
        char eax_3 = Level_LoadObjects_4();
        void var_78;
        void var_70;
        sub_4cc2a0(Level_StartMission_4(), &var_70, &var_a8, &var_e8, 1, eax_3, &var_78,
            0xffffffff);
        int32_t var_18;
        void var_68;

        if (var_18)
            memcpy(&var_a8, &var_68, 0x18);
        else
            memcpy(&var_a8, &var_e8, 0x18);
    }

    float var_138;
    sub_483100(&var_138, &var_a8, &var_90);
    memcpy(a1 + 0x20, &var_a8, 0x18);
    float var_110;
    sub_4b3b60(&var_110, -1.57079637f);
    float var_134;
    float var_130;
    float var_104;
    float var_f8;
    var_e8 = var_f8 * var_130 + var_104 * var_134 + var_110 * var_138;
    float var_10c;
    float var_100;
    float var_f4;
    *(&var_e8 + 4) = var_f4 * var_130 + var_100 * var_134 + var_10c * var_138;
    float var_108;
    float var_fc;
    float var_f0;
    var_e0 = var_f0 * var_130 + var_fc * var_134 + var_108 * var_138;
    float var_12c;
    float var_128;
    float var_124;
    *(&var_e0 + 4) = var_124 * var_f8 + var_128 * var_104 + var_12c * var_110;
    var_d8 = var_124 * var_f4 + var_128 * var_100 + var_12c * var_10c;
    *(&var_d8 + 4) = var_124 * var_f0 + var_128 * var_fc + var_12c * var_108;
    int32_t var_114;
    int32_t result;
    int32_t var_c4 = result + var_114 + 1;
    float var_120;
    float var_11c;
    float var_118;
    float var_d0 = var_118 * var_f8 + var_11c * var_104 + var_120 * var_110;
    float var_cc = var_118 * var_f4 + var_11c * var_100 + var_120 * var_10c;
    float var_c8 = var_118 * var_f0 + var_11c * var_fc + var_120 * var_108;
    memcpy(a1 + 0x38, &var_e8, 0x28);
    return result;
}
