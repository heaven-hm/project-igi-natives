#include "004834D0-FX_FireBallUpdate_4.h"
/* 0x004834d0 FX_FireBallUpdate_4 full linked: callers=1 callees=15 */
int32_t sub_4834d0(void* a1)

{
    void* ebp = **(a1 + 0x68);
    int32_t var_174;
    sub_4b38e0(&var_174, *(a1 + 0x108), 0f, *(a1 + 0x10c));
    long double x87_r7_1 = -(*(a1 + 0x114));
    double var_124;
    memcpy(&var_124, a1 + 0x70, 0x18);
    float var_170;
    double var_e8 = var_170 * x87_r7_1;
    float var_164;
    double var_e0 = var_164 * x87_r7_1;
    float var_158;
    long double x87_r7_2 = x87_r7_1 * var_158;
    double var_80 = *(a1 + 0xc8) * x87_r7_2 + *(a1 + 0xc4) * var_e0 + *(a1 + 0xc0) * var_e8;
    long double x87_r7_5 =
        x87_r7_2 * *(a1 + 0xd4) + *(a1 + 0xd0) * var_e0 + *(a1 + 0xcc) * var_e8;
    double var_108 =
        var_124 + *(a1 + 0xbc) * x87_r7_2 + *(a1 + 0xb8) * var_e0 + *(a1 + 0xb4) * var_e8;
    double var_11c;
    double var_100 = var_11c + var_80;
    double var_114;
    double var_f8 = var_114 + x87_r7_5;
    float var_14c;
    sub_483100(&var_14c, &var_108, &var_124);
    int16_t top = 0xffff;
    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(0.78539818525314331);

    if (!c2)
        top = 0xfffe;

    void* var_8c = ebp;
    double var_d0;
    memcpy(&var_d0, &var_124, 0x18);
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    float var_10c = /* float var_10c = unimplemented  {fstp dword [esp+0x90], st0} */;
    /* unimplemented  {fstp dword [esp+0x90], st0} */
    int16_t top_2 = top + 2;
    float var_b8;
    memcpy(&var_b8, &var_108, 0x18);

    while (true)
    {
        char eax_1 = Level_LoadObjects_4();
        void var_90;
        void var_70;
        sub_4cc2a0(Level_StartMission_4(), &var_70, &var_d0, &var_b8, 1, eax_1, &var_90,
            0xffffffff);
        int32_t var_18;

        if (!var_18)
            break;

        double var_18c;
        int32_t var_24;
        int32_t var_1c;

        if (var_1c && var_24)
        {
🚫🚫            /* unimplemented  {fld st0, dword [eax]} */
⋯            long double temp0_1 = 0f;
            /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp0_1 */ - temp0_1;
            bool c0_1 = /* bool c0_1 =
                unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp0_1 */ < temp0_1;
            bool c2_1 = FCMP_UO(/* bool c2_1 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp0_1) */,
                temp0_1);
            bool c3_1 = /* bool c3_1 =
                unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp0_1 */ == temp0_1;
            /* unimplemented  {fcomp st0, dword [&g_5333ec]} */

            if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | (top_2 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld st0, qword [esp+0x134]} */
🚫🚫                /* unimplemented  {fsub st0, qword [esp+0xcc]} */
🚫🚫🚫                var_18c = /* var_18c = unimplemented  {fstp qword [esp+0x14], st0} */;
                /* unimplemented  {fstp qword [esp+0x14], st0} */
🚫🚫                /* unimplemented  {fld st0, qword [esp+0x140]} */
🚫🚫                /* unimplemented  {fsub st0, qword [esp+0xd8]} */
🚫🚫🚫                double var_184_1 = /* double var_184_1 =
                    unimplemented  {fstp qword [esp+0x1c], st0} */;
                /* unimplemented  {fstp qword [esp+0x1c], st0} */
🚫🚫                /* unimplemented  {fld st0, qword [esp+0x148]} */
🚫🚫                /* unimplemented  {fsub st0, qword [esp+0xe0]} */
🚫🚫🚫                double var_17c_1 = /* double var_17c_1 =
                    unimplemented  {fstp qword [esp+0x24], st0} */;
                /* unimplemented  {fstp qword [esp+0x24], st0} */
                sub_4b3100(&var_18c);
🚫🚫                /* unimplemented  {fld st0, qword [esp+0x14]} */
🚫🚫                /* unimplemented  {fmul st0, qword [&g_533880]} */
🚫🚫🚫                var_18c = /* var_18c = unimplemented  {fstp qword [esp+0x10], st0} */;
                /* unimplemented  {fstp qword [esp+0x10], st0} */
🚫🚫                /* unimplemented  {fld st0, qword [esp+0x18]} */
🚫🚫                /* unimplemented  {fmul st0, qword [&g_533880]} */
🚫🚫🚫                double var_184_2 = /* double var_184_2 =
                    unimplemented  {fstp qword [esp+0x18], st0} */;
                /* unimplemented  {fstp qword [esp+0x18], st0} */
🚫🚫                /* unimplemented  {fld st0, qword [esp+0x20]} */
🚫🚫                /* unimplemented  {fmul st0, qword [&g_533880]} */
🚫🚫🚫                double var_17c_2 = /* double var_17c_2 =
                    unimplemented  {fstp qword [esp+0x20], st0} */;
                /* unimplemented  {fstp qword [esp+0x20], st0} */
🚫🚫                /* unimplemented  {fld st0, qword [esp+0x10]} */
🚫🚫                /* unimplemented  {fadd qword [esp+0x134]} */
🚫🚫🚫                var_d0 = /* var_d0 = unimplemented  {fstp qword [esp+0xcc], st0} */;
                /* unimplemented  {fstp qword [esp+0xcc], st0} */
🚫🚫                /* unimplemented  {fld st0, qword [esp+0x18]} */
🚫🚫                /* unimplemented  {fadd qword [esp+0x13c]} */
🚫🚫🚫                double var_c8_1 = /* double var_c8_1 =
                    unimplemented  {fstp qword [esp+0xd4], st0} */;
                /* unimplemented  {fstp qword [esp+0xd4], st0} */
🚫🚫                /* unimplemented  {fld st0, qword [esp+0x20]} */
🚫🚫                /* unimplemented  {fadd qword [esp+0x144]} */
🚫🚫🚫                double var_c0_1 = /* double var_c0_1 =
                    unimplemented  {fstp qword [esp+0xdc], st0} */;
                /* unimplemented  {fstp qword [esp+0xdc], st0} */
                int16_t top_19;
                top_2 = top_19;
                continue;
            }
        }

        if (!var_18)
            break;

        double* var_1a0_2 = &var_124;
        void* var_1ac_1 = a1;

        if (sub_483a00(ebp, &var_108))
        {
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x134]} */
🚫🚫            /* unimplemented  {fsub st0, qword [esp+0x78]} */
🚫🚫🚫            var_18c = /* var_18c = unimplemented  {fstp qword [esp+0x14], st0} */;
            /* unimplemented  {fstp qword [esp+0x14], st0} */
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x140]} */
🚫🚫            /* unimplemented  {fsub st0, qword [esp+0x84]} */
🚫🚫🚫            double var_184_3 = /* double var_184_3 = unimplemented  {fstp qword [esp+0x1c], st0} */;
            /* unimplemented  {fstp qword [esp+0x1c], st0} */
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x148]} */
🚫🚫            /* unimplemented  {fsub st0, qword [esp+0x8c]} */
🚫🚫🚫            double var_17c_3 = /* double var_17c_3 = unimplemented  {fstp qword [esp+0x24], st0} */;
            /* unimplemented  {fstp qword [esp+0x24], st0} */
🚫🚫            sub_4b3130(&var_18c);
            /* unimplemented  {call sub_4b3130} */
🚫🚫🚫            double var_f0_1 = /* double var_f0_1 = unimplemented  {fstp qword [esp+0xb0], st0} */;
            /* unimplemented  {fstp qword [esp+0xb0], st0} */
            sub_4b3100(&var_18c);
🚫🚫            /* unimplemented  {fld st0, qword [esp+0xb4]} */
🚫🚫🚫            *(a1 + 0x110) = /* *(a1 + 0x110) = unimplemented  {fstp dword [ebx+0x110], st0} */;
            /* unimplemented  {fstp dword [ebx+0x110], st0} */
🚫🚫            /* unimplemented  {fld st0, qword [esp+0xac]} */
🚫🚫            /* unimplemented  {fsub st0, qword [&g_533990]} */
🚫🚫🚫🚫🚫            long double temp1_1 = 0.0;
            /* unimplemented  {fcom st0, qword [&g_5333b0]} f- temp1_1 */ - temp1_1;
            bool c0_2 = /* bool c0_2 =
                unimplemented  {fcom st0, qword [&g_5333b0]} f< temp1_1 */ < temp1_1;
            bool c2_2 = FCMP_UO(/* bool c2_2 =
                is_unordered.t(unimplemented  {fcom st0, qword [&g_5333b0]}, temp1_1) */,
                temp1_1);
            bool c3_2 = /* bool c3_2 =
                unimplemented  {fcom st0, qword [&g_5333b0]} f== temp1_1 */ == temp1_1;

            if (*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | ((top_2 - 1) & 7) << 0xb) + 1) & 1)
            {
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
🚫🚫                /* unimplemented  {fld st0, qword [&g_5333b0]} */
            }

🚫🚫            /* unimplemented  {fld st0, st0} */
🚫🚫            /* unimplemented  {fmul st0, qword [esp+0x10]} */
🚫🚫🚫            var_18c = /* var_18c = unimplemented  {fstp qword [esp+0x10], st0} */;
            /* unimplemented  {fstp qword [esp+0x10], st0} */
🚫🚫            /* unimplemented  {fld st0, st0} */
🚫🚫            /* unimplemented  {fmul st0, qword [esp+0x18]} */
🚫🚫🚫            double var_184_4 = /* double var_184_4 = unimplemented  {fstp qword [esp+0x18], st0} */;
            /* unimplemented  {fstp qword [esp+0x18], st0} */
🚫🚫            /* unimplemented  {fmul st0, qword [esp+0x20]} */
🚫🚫🚫            double var_17c_4 = /* double var_17c_4 = unimplemented  {fstp qword [esp+0x20], st0} */;
            /* unimplemented  {fstp qword [esp+0x20], st0} */
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x10]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x78]} */
🚫🚫🚫            var_108 = /* var_108 = unimplemented  {fstp qword [esp+0x94], st0} */;
            /* unimplemented  {fstp qword [esp+0x94], st0} */
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x18]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x80]} */
🚫🚫🚫            double var_100_1 = /* double var_100_1 = unimplemented  {fstp qword [esp+0x9c], st0} */;
            /* unimplemented  {fstp qword [esp+0x9c], st0} */
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x20]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x88]} */
🚫🚫🚫            double var_f8_1 = /* double var_f8_1 = unimplemented  {fstp qword [esp+0xa4], st0} */;
            /* unimplemented  {fstp qword [esp+0xa4], st0} */
        }

        break;
    }

    sub_4b3b60(&var_174, -1.57079637f);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x3c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x28]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    var_b8 = /* var_b8 = unimplemented  {fstp dword [esp+0xe4], st0} */;
    /* unimplemented  {fstp dword [esp+0xe4], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x38]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x2c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_b4 = /* float var_b4 = unimplemented  {fstp dword [esp+0xe8], st0} */;
    /* unimplemented  {fstp dword [esp+0xe8], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x3c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x30]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_b0 = /* float var_b0 = unimplemented  {fstp dword [esp+0xec], st0} */;
    /* unimplemented  {fstp dword [esp+0xec], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x64]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x34]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x28]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_ac = /* float var_ac = unimplemented  {fstp dword [esp+0xf0], st0} */;
    /* unimplemented  {fstp dword [esp+0xf0], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x64]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x38]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x2c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_a8 = /* float var_a8 = unimplemented  {fstp dword [esp+0xf4], st0} */;
    /* unimplemented  {fstp dword [esp+0xf4], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x64]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x3c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x30]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_a4 = /* float var_a4 = unimplemented  {fstp dword [esp+0xf8], st0} */;
    /* unimplemented  {fstp dword [esp+0xf8], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x70]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x6c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x34]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x68]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x28]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_a0 = /* float var_a0 = unimplemented  {fstp dword [esp+0xfc], st0} */;
    /* unimplemented  {fstp dword [esp+0xfc], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x70]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x6c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x38]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x68]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x2c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
    int32_t result;
    int32_t var_128;
    int32_t var_94 = result + var_128 + 1;
🚫🚫🚫    float var_9c = /* float var_9c = unimplemented  {fstp dword [esp+0x100], st0} */;
    /* unimplemented  {fstp dword [esp+0x100], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x70]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x6c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x3c]} */
    memcpy(a1 + 0x20, &var_108, 0x18);
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x68]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x30]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_98 = /* float var_98 = unimplemented  {fstp dword [esp+0x104], st0} */;
    /* unimplemented  {fstp dword [esp+0x104], st0} */
    *(a1 + 0x60) = var_10c;
    memcpy(a1 + 0x38, &var_b8, 0x28);
    return result;
}
