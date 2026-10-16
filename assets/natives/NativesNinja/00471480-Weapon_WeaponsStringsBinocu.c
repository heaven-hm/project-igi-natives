#include "00471480-Weapon_WeaponsStringsBinocu.h"
/* 0x00471480 Weapon_WeaponsStringsBinocu full linked: callers=2 callees=31 */
int32_t sub_471480(void* a1)

{
    int32_t eax = g_c28b44;
    int32_t ecx = g_c28b48;
    void* var_11c = a1;
    void* eax_1 = *(a1 + 0x14);
    long double x87_r7 = *(a1 + 0x7c);
    void* var_118 = eax_1;
    int32_t edx = *(eax_1 + 0x14);
    double var_108;
    memcpy(&var_108, a1 + 0x60, 0x18);
    double var_13c = x87_r7;
    double var_134 = *(a1 + 0x80);
    double var_12c = *(a1 + 0x84);
    int32_t var_114 = edx;
    int32_t var_110 = 0x3f800000;
    long double x87_r7_3;

    if (!sub_48f2d0())
        x87_r7_3 = 1000.0;
    else
        x87_r7_3 = 914.40000000000009;

    var_13c = x87_r7_3 * var_13c * 4096.0;
    long double x87_r7_6;

    if (!sub_48f2d0())
        x87_r7_6 = 1000.0;
    else
        x87_r7_6 = 914.40000000000009;

    double var_134_1 = x87_r7_6 * var_134 * 4096.0;
    long double x87_r7_9;

    if (!sub_48f2d0())
        x87_r7_9 = 1000.0;
    else
        x87_r7_9 = 914.40000000000009;

    var_13c = var_108 + var_13c;
    double var_100;
    double var_134_2 = var_100 + var_134_1;
    double var_f8;
    double var_12c_1 = var_f8 + x87_r7_9 * var_12c * 4096.0;
    char eax_5 = Level_StartMission_2();
    void var_120;
    void var_f0;
    sub_4cc2a0(Level_StartMission_4(), &var_f0, &var_108, &var_13c, 1, eax_5, &var_120, 0xffffffff);
    int32_t eax_7;
    void* ecx_1;
    int32_t edx_1;
    eax_7 = sub_4b64e0("weapons/strings/Binoculars/range");
    int32_t* edi;

    if (!eax_7)
        edi = "RANGE";
    else
    {
        char* var_17c_1 = "weapons/strings/Binoculars/range";
        edi = Resource_Load(eax_7, edx_1, ecx_1, nullptr);
    }

    char* var_18c_1;
    char* var_188_1;
    double var_15c;
    int32_t var_98;
    void var_80;

    if (!var_98)
    {
        void* eax_14 = &g_5402cc;

        if (!sub_48f2d0())
            eax_14 = &g_5402c8;

        void* var_178_1 = eax_14;
        int32_t eax_15 = sub_48f2d0();
        int32_t eax_16 = -(eax_15);
        char var_180 = ((eax_16 - eax_16) & 0x7d0) + 0x3e8;
        int32_t* var_184_1 = edi;
        var_188_1 = "%s: %0.f+%s";
        var_18c_1 = &var_80;
    }
    else
    {
        double var_90;
        var_15c = var_90 * 0.000244140625;
        void* ebx_1 = &g_5402cc;

        if (!sub_48f2d0())
            ebx_1 = &g_5402c8;

        if (!sub_48f2d0())
        {
            int32_t edx_2 = *(&var_15c + 4);
            var_15c = var_15c;
            *(&var_15c + 4) = edx_2;
        }
        else
            var_15c = var_15c * 3.2808398950000002;

        void* var_178 = ebx_1;
        int32_t var_17c_2 = *(&var_15c + 4);
        int32_t var_180_1 = var_15c;
        int32_t* var_184 = edi;
        var_188_1 = "%s: %0.f%s";
        var_18c_1 = &var_80;
    }

    Game_DataSymbolLoad(var_18c_1, var_188_1);
    sub_4b6e90(*(a1 + 0x20), &var_80);
    long double x87_r7_18 = eax;
    float var_160 = x87_r7_18;
    *(*(a1 + 0x20) + 4) = x87_r7_18 * 0.378125012f;
    long double x87_r7_20 = ecx;
    float var_154 = x87_r7_20;
    *(*(a1 + 0x20) + 8) = x87_r7_20 * 0.550000012f - sub_4b7e00(*(a1 + 0x20));
    sub_4b6f50(*(a1 + 0x20));
    float var_124;
    float var_10c;
    sub_4b2d00(a1 + 0x7c, &var_124, &var_10c);
    sub_472050(a1);
    float* esi_2 = a1 + 0x2b54;
    int32_t i_1 = 0xc;
    float var_164_1 = var_160 * 0.125f;
    var_15c = var_154 * 0.762499988f;
    float var_150_3 = var_160 * 0.1875f * 0.0833333358f;
    int32_t i;

    do
    {
        sub_4719d0(esi_2, a1 + 0x138);
        sub_471a90(esi_2, var_164_1, var_15c, var_150_3 - var_160 * 0.00937500037f,
            var_154 * 0.125f, 0f, 0);
        esi_2 = &esi_2[5];
        i = i_1;
        i_1 -= 1;
        var_164_1 = var_150_3 + var_164_1;
    } while (i != 1);
    var_15c = sub_4b6ce0(g_5be344 + 0x18);
    float var_164_2 = var_160 / var_15c;
    var_15c = var_154 + var_164_2;
    int32_t edi_1 = var_15c;
    float var_14c_1 = var_160 * 0.5f;
    float var_144_1 = -(var_164_2);
    sub_4b51f0(g_5be344 + 0x18, var_144_1, var_144_1, var_14c_1, var_144_1, var_144_1, edi_1,
        var_14c_1, edi_1, 128f, 128f, 128f, 0, 0x1000000, 0);
    var_15c = var_160 + var_164_2;
    int32_t eax_26 = var_15c;
    int32_t ecx_8 = sub_4b51f0(g_5be344 + 0x18, eax_26, var_144_1, var_14c_1, var_144_1, eax_26,
        edi_1, var_14c_1, edi_1, 128f, 128f, 128f, 0, 0x1000000, 0);
    int32_t eax_30;
    int32_t edx_8;
    edx_8 = HIGHD(ecx);
    eax_30 = LOWD(ecx);
    var_15c = (eax_30 - edx_8) >> 1;
    int32_t eax_34;
    int32_t edx_9;
    edx_9 = HIGHD(eax);
    eax_34 = LOWD(eax);
    float var_14c_2 = var_15c;
    var_15c = (eax_34 - edx_9) >> 1;
    float var_164_3 = var_15c;
    float var_148_1 = var_160 * 0.09375f;
    int32_t var_180_3 = ecx_8;
    int32_t var_184_3 = ecx_8;
    int32_t var_1a4_2 = ecx_8;
    int32_t ecx_9 = sub_4b5860(0x534070, 5.60519386e-45f, var_164_3 - var_148_1, var_14c_2,
        0x3f800000, 0f, 100f, 0f, 0x3f000000, 0f, var_160 * 0.015625f, var_154 * 0.020833334f,
        0x80000, 0);
    int32_t var_180_5 = ecx_9;
    int32_t var_184_5 = ecx_9;
    int32_t var_1a4_4 = ecx_9;
    sub_4b5860(0x534070, 5.60519386e-45f, var_148_1 + var_164_3, var_14c_2, 0x3f800000, 0f, 100f,
        0f, 0x3f000000, 0f, var_160 * -0.015625f, var_154 * -0.020833334f, 0x80000, 0);
    sub_4b5730(0f, var_14c_2, 0x3f800000, var_160, var_14c_2, 0x3f800000, 0f, 32f, 0f, 0f, 32f, 0f,
        0x3f000000, 0x80000, 0);
    sub_4b5730(var_164_3, 0f, 0x3f800000, var_164_3, var_154, 0x3f800000, 0f, 32f, 0f, 0f, 32f, 0f,
        0x3f000000, 0x80000, 0);
    return sub_471b60(a1);
}
