#include "gi_platform.h"
#include "004834D0-FX_FireBallUpdate_4.h"
int32_t FX_FireBallUpdate_4(void* a1)

{
    void* flagP = *(*(int32_t*)(uintptr_t)(a1 + 0x68));
    int32_t v_174;
    Sys_ReadFileBlock_12(&v_174, (*(int32_t*)(uintptr_t)(a1 + 0x108)), 0.0f, (*(int32_t*)(uintptr_t)(a1 + 0x10c)));
    long double x87_r7_1 = -((*(int32_t*)(uintptr_t)(a1 + 0x114)));
    double v_124;
    memcpy(&v_124, a1 + 0x70, 0x18);
    float v_170;
    double v_e8 = v_170 * x87_r7_1;
    float v_164;
    double v_e0 = v_164 * x87_r7_1;
    float v_158;
    long double x87_r7_2 = x87_r7_1 * v_158;
    double v_80 = (*(int32_t*)(uintptr_t)(a1 + 0xc8)) * x87_r7_2 + (*(int32_t*)(uintptr_t)(a1 + 0xc4)) * v_e0 + (*(int32_t*)(uintptr_t)(a1 + 0xc0)) * v_e8;
    long double x87_r7_5 =
        x87_r7_2 * (*(int32_t*)(uintptr_t)(a1 + 0xd4)) + (*(int32_t*)(uintptr_t)(a1 + 0xd0)) * v_e0 + (*(int32_t*)(uintptr_t)(a1 + 0xcc)) * v_e8;
    double v_108 =
        v_124 + (*(int32_t*)(uintptr_t)(a1 + 0xbc)) * x87_r7_2 + (*(int32_t*)(uintptr_t)(a1 + 0xb8)) * v_e0 + (*(int32_t*)(uintptr_t)(a1 + 0xb4)) * v_e8;
    double v_11c;
    double v_100 = v_11c + v_80;
    double v_114;
    double v_f8 = v_114 + x87_r7_5;
    float v_14c;
    FX_DebrisSpawn_3(&v_14c, &v_108, &v_124);
    int16_t idx = 0xffff;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(0.78539818525314331);

    if (!c2)
        idx = 0xfffe;

    void* v_8c = flagP;
    double v_d0;
    memcpy(&v_d0, &v_124, 0x18);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float v_10c = /* float v_10c = unimplemented  {fstp dword [esp+0x90], fp0} */;
    /* unimplemented  {fstp dword [esp+0x90], fp0} */
    int16_t top_2 = idx + 2;
    float v_b8;
    memcpy(&v_b8, &v_108, 0x18);

    while (true)
    {
        char valA1 = Level_LoadObjects_4();
        char v_90;
        char v_70;
        DynObj_FindSymbol_11(Level_StartMission_4(), &v_70, &v_d0, &v_b8, 1, valA1, &v_90,
            0xffffffff);
        int32_t v_18;

        if (!v_18)
            break;

        double v_18c;
        int32_t v_24;
        int32_t v_1c;

        if (v_1c && v_24)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [valA]} */
⋯            long double f0_1 = 0.0f;
            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f0_1 */ - f0_1;
            bool c0_1 = /* bool c0_1 =
                unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f0_1 */ < f0_1;
            bool c2_1 = FCMP_UO(/* bool c2_1 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f0_1) */,
                f0_1);
            bool c3_1 = /* bool c3_1 =
                unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f0_1 */ == f0_1;
            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */

            if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | (top_2 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, qword [esp+0x134]} */
🚫🚫                /* unimplemented  {fsub fp0, qword [esp+0xcc]} */
🚫🚫🚫                v_18c = /* v_18c = unimplemented  {fstp qword [esp+0x14], fp0} */;
                /* unimplemented  {fstp qword [esp+0x14], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [esp+0x140]} */
🚫🚫                /* unimplemented  {fsub fp0, qword [esp+0xd8]} */
🚫🚫🚫                double v_184_1 = /* double v_184_1 =
                    unimplemented  {fstp qword [esp+0x1c], fp0} */;
                /* unimplemented  {fstp qword [esp+0x1c], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [esp+0x148]} */
🚫🚫                /* unimplemented  {fsub fp0, qword [esp+0xe0]} */
🚫🚫🚫                double v_17c_1 = /* double v_17c_1 =
                    unimplemented  {fstp qword [esp+0x24], fp0} */;
                /* unimplemented  {fstp qword [esp+0x24], fp0} */
                Sys_FreeMemory_11(&v_18c);
🚫🚫                /* unimplemented  {fld fp0, qword [esp+0x14]} */
🚫🚫                /* unimplemented  {fmul fp0, qword [&g_533880]} */
🚫🚫🚫                v_18c = /* v_18c = unimplemented  {fstp qword [esp+0x10], fp0} */;
                /* unimplemented  {fstp qword [esp+0x10], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [esp+0x18]} */
🚫🚫                /* unimplemented  {fmul fp0, qword [&g_533880]} */
🚫🚫🚫                double v_184_2 = /* double v_184_2 =
                    unimplemented  {fstp qword [esp+0x18], fp0} */;
                /* unimplemented  {fstp qword [esp+0x18], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [esp+0x20]} */
🚫🚫                /* unimplemented  {fmul fp0, qword [&g_533880]} */
🚫🚫🚫                double v_17c_2 = /* double v_17c_2 =
                    unimplemented  {fstp qword [esp+0x20], fp0} */;
                /* unimplemented  {fstp qword [esp+0x20], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [esp+0x10]} */
🚫🚫                /* unimplemented  {fadd qword [esp+0x134]} */
🚫🚫🚫                v_d0 = /* v_d0 = unimplemented  {fstp qword [esp+0xcc], fp0} */;
                /* unimplemented  {fstp qword [esp+0xcc], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [esp+0x18]} */
🚫🚫                /* unimplemented  {fadd qword [esp+0x13c]} */
🚫🚫🚫                double v_c8_1 = /* double v_c8_1 =
                    unimplemented  {fstp qword [esp+0xd4], fp0} */;
                /* unimplemented  {fstp qword [esp+0xd4], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [esp+0x20]} */
🚫🚫                /* unimplemented  {fadd qword [esp+0x144]} */
🚫🚫🚫                double v_c0_1 = /* double v_c0_1 =
                    unimplemented  {fstp qword [esp+0xdc], fp0} */;
                /* unimplemented  {fstp qword [esp+0xdc], fp0} */
                int16_t top_19;
                top_2 = top_19;
                continue;
            }
        }

        if (!v_18)
            break;

        double* v_1a0_2 = &v_124;
        void* v_1ac_1 = a1;

        if (FX_FragmentSimulate_4(flagP, &v_108))
        {
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x134]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [esp+0x78]} */
🚫🚫🚫            v_18c = /* v_18c = unimplemented  {fstp qword [esp+0x14], fp0} */;
            /* unimplemented  {fstp qword [esp+0x14], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x140]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [esp+0x84]} */
🚫🚫🚫            double v_184_3 = /* double v_184_3 = unimplemented  {fstp qword [esp+0x1c], fp0} */;
            /* unimplemented  {fstp qword [esp+0x1c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x148]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [esp+0x8c]} */
🚫🚫🚫            double v_17c_3 = /* double v_17c_3 = unimplemented  {fstp qword [esp+0x24], fp0} */;
            /* unimplemented  {fstp qword [esp+0x24], fp0} */
🚫🚫            Sys_OpenFileStream_11(&v_18c);
            /* unimplemented  {call Sys_OpenFileStream_11} */
🚫🚫🚫            double v_f0_1 = /* double v_f0_1 = unimplemented  {fstp qword [esp+0xb0], fp0} */;
            /* unimplemented  {fstp qword [esp+0xb0], fp0} */
            Sys_FreeMemory_11(&v_18c);
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0xb4]} */
🚫🚫🚫            (*(int32_t*)(uintptr_t)(a1 + 0x110)) =
            /* unimplemented  {fstp dword [ctxB+0x110], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0xac]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [&g_533990]} */
🚫🚫🚫🚫🚫            long double f1_1 = 0.0;
            /* unimplemented  {fcom fp0, qword [&g_5333b0]} f- f1_1 */ - f1_1;
            bool c0_2 = /* bool c0_2 =
                unimplemented  {fcom fp0, qword [&g_5333b0]} f< f1_1 */ < f1_1;
            bool c2_2 = FCMP_UO(/* bool c2_2 =
                is_unordered.t(unimplemented  {fcom fp0, qword [&g_5333b0]}, f1_1) */,
                f1_1);
            bool c3_2 = /* bool c3_2 =
                unimplemented  {fcom fp0, qword [&g_5333b0]} f== f1_1 */ == f1_1;

            if (*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | ((top_2 - 1) & 7) << 0xb) + 1) & 1)
            {
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [&g_5333b0]} */
            }

🚫🚫            /* unimplemented  {fld fp0, fp0} */
🚫🚫            /* unimplemented  {fmul fp0, qword [esp+0x10]} */
🚫🚫🚫            v_18c = /* v_18c = unimplemented  {fstp qword [esp+0x10], fp0} */;
            /* unimplemented  {fstp qword [esp+0x10], fp0} */
🚫🚫            /* unimplemented  {fld fp0, fp0} */
🚫🚫            /* unimplemented  {fmul fp0, qword [esp+0x18]} */
🚫🚫🚫            double v_184_4 = /* double v_184_4 = unimplemented  {fstp qword [esp+0x18], fp0} */;
            /* unimplemented  {fstp qword [esp+0x18], fp0} */
🚫🚫            /* unimplemented  {fmul fp0, qword [esp+0x20]} */
🚫🚫🚫            double v_17c_4 = /* double v_17c_4 = unimplemented  {fstp qword [esp+0x20], fp0} */;
            /* unimplemented  {fstp qword [esp+0x20], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x10]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x78]} */
🚫🚫🚫            v_108 = /* v_108 = unimplemented  {fstp qword [esp+0x94], fp0} */;
            /* unimplemented  {fstp qword [esp+0x94], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x18]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x80]} */
🚫🚫🚫            double v_100_1 = /* double v_100_1 = unimplemented  {fstp qword [esp+0x9c], fp0} */;
            /* unimplemented  {fstp qword [esp+0x9c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x20]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x88]} */
🚫🚫🚫            double v_f8_1 = /* double v_f8_1 = unimplemented  {fstp qword [esp+0xa4], fp0} */;
            /* unimplemented  {fstp qword [esp+0xa4], fp0} */
        }

        break;
    }

    Sys_CloseFileStream_12(&v_174, -1.57079637.0f);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x3c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x28]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    v_b8 = /* v_b8 = unimplemented  {fstp dword [esp+0xe4], fp0} */;
    /* unimplemented  {fstp dword [esp+0xe4], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x38]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x2c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_b4 = /* float v_b4 = unimplemented  {fstp dword [esp+0xe8], fp0} */;
    /* unimplemented  {fstp dword [esp+0xe8], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x3c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x30]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_b0 = /* float v_b0 = unimplemented  {fstp dword [esp+0xec], fp0} */;
    /* unimplemented  {fstp dword [esp+0xec], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x64]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x34]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x28]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_ac = /* float v_ac = unimplemented  {fstp dword [esp+0xf0], fp0} */;
    /* unimplemented  {fstp dword [esp+0xf0], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x64]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x38]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x2c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_a8 = /* float v_a8 = unimplemented  {fstp dword [esp+0xf4], fp0} */;
    /* unimplemented  {fstp dword [esp+0xf4], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x64]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x3c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x30]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_a4 = /* float v_a4 = unimplemented  {fstp dword [esp+0xf8], fp0} */;
    /* unimplemented  {fstp dword [esp+0xf8], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x70]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x6c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x34]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x68]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x28]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_a0 = /* float v_a0 = unimplemented  {fstp dword [esp+0xfc], fp0} */;
    /* unimplemented  {fstp dword [esp+0xfc], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x70]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x6c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x38]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x68]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x2c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
    int32_t result;
    int32_t v_128;
    int32_t v_94 = result + v_128 + 1;
🚫🚫🚫    float v_9c = /* float v_9c = unimplemented  {fstp dword [esp+0x100], fp0} */;
    /* unimplemented  {fstp dword [esp+0x100], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x70]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x6c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x3c]} */
    memcpy(a1 + 0x20, &v_108, 0x18);
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x68]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [esp+0x30]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float v_98 = /* float v_98 = unimplemented  {fstp dword [esp+0x104], fp0} */;
    /* unimplemented  {fstp dword [esp+0x104], fp0} */
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = v_10c;
    memcpy(a1 + 0x38, &v_b8, 0x28);
    return result;
}
