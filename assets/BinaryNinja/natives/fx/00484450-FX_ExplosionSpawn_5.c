// IGI native provenance: FX_ExplosionSpawn_5 - 0x00484450 - CFG score 90.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 00484450-FX_ExplosionSpawn_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_ExplosionSpawn_5.h"
int32_t FX_ExplosionSpawn_5(void* context)

{
    void* flagP = **(context + 0x68);

    if (FX_DebrisSpawn_2(context) && *(context + 0x124) & 1)
        return FX_FireBallUpdate_5(context);

    int32_t item_174;
    Sys_ReadFileBlock_12(&item_174, *(context + 0x108), 0.0f, *(context + 0x10c));
    long double fpu_val_7_1 = -(*(context + 0x114));
    double item_124;
    memcpy(&item_124, context + 0x70, 0x18);
    float item_170;
    double item_e8 = item_170 * fpu_val_7_1;
    float item_164;
    double item_e0 = item_164 * fpu_val_7_1;
    float item_158;
    long double fpu_val_7_2 = fpu_val_7_1 * item_158;
    double item_80 = *(context + 0xc8) * fpu_val_7_2 + *(context + 0xc4) * item_e0 + *(context + 0xc0) * item_e8;
    long double fpu_val_7_5 =
        fpu_val_7_2 * *(context + 0xd4) + *(context + 0xd0) * item_e0 + *(context + 0xcc) * item_e8;
    double item_108 =
        item_124 + *(context + 0xbc) * fpu_val_7_2 + *(context + 0xb8) * item_e0 + *(context + 0xb4) * item_e8;
    double item_11c;
    double item_100 = item_11c + item_80;
    double item_114;
    double item_f8 = item_114 + fpu_val_7_5;
    float item_14c;
    FX_DebrisSpawn_3(&item_14c, &item_108, &item_124);
    int16_t idx = 0xffff;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(0.78539818525314331);

    if (!c2)
        idx = 0xfffe;

    double item_d0;
    memcpy(&item_d0, &item_124, 0x18);
    void* item_8c = flagP;
    float item_b8;
    memcpy(&item_b8, &item_108, 0x18);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float item_10c = /* float item_10c = unimplemented  {fstp dword [stack_ptr+0x90], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x90], fp0} */
    int16_t top_2 = idx + 2;

    while (true)
    {
        char data_3 = Level_LoadObjects_4();
        void item_90;
        void item_70;
        DynObj_FindSymbol_11(Level_StartMission_4(), &item_70, &item_d0, &item_b8, 1, data_3, &item_90,
            0xffffffff);
        int32_t item_18;

        if (!item_18)
            break;

        double item_18c;
        int32_t item_24;
        int32_t item_1c;

        if (item_1c && item_24)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [data_val]} */
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
🚫🚫                /* unimplemented  {fld fp0, qword [stack_ptr+0x134]} */
🚫🚫                /* unimplemented  {fsub fp0, qword [stack_ptr+0xcc]} */
🚫🚫🚫                item_18c = /* item_18c = unimplemented  {fstp qword [stack_ptr+0x14], fp0} */;
                /* unimplemented  {fstp qword [stack_ptr+0x14], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [stack_ptr+0x140]} */
🚫🚫                /* unimplemented  {fsub fp0, qword [stack_ptr+0xd8]} */
🚫🚫🚫                double item_184_1 = /* double item_184_1 =
                    unimplemented  {fstp qword [stack_ptr+0x1c], fp0} */;
                /* unimplemented  {fstp qword [stack_ptr+0x1c], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [stack_ptr+0x148]} */
🚫🚫                /* unimplemented  {fsub fp0, qword [stack_ptr+0xe0]} */
🚫🚫🚫                double item_17c_1 = /* double item_17c_1 =
                    unimplemented  {fstp qword [stack_ptr+0x24], fp0} */;
                /* unimplemented  {fstp qword [stack_ptr+0x24], fp0} */
                Sys_FreeMemory_11(&item_18c);
🚫🚫                /* unimplemented  {fld fp0, qword [stack_ptr+0x14]} */
🚫🚫                /* unimplemented  {fmul fp0, qword [&g_533880]} */
🚫🚫🚫                item_18c = /* item_18c = unimplemented  {fstp qword [stack_ptr+0x10], fp0} */;
                /* unimplemented  {fstp qword [stack_ptr+0x10], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [stack_ptr+0x18]} */
🚫🚫                /* unimplemented  {fmul fp0, qword [&g_533880]} */
🚫🚫🚫                double item_184_2 = /* double item_184_2 =
                    unimplemented  {fstp qword [stack_ptr+0x18], fp0} */;
                /* unimplemented  {fstp qword [stack_ptr+0x18], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [stack_ptr+0x20]} */
🚫🚫                /* unimplemented  {fmul fp0, qword [&g_533880]} */
🚫🚫🚫                double item_17c_2 = /* double item_17c_2 =
                    unimplemented  {fstp qword [stack_ptr+0x20], fp0} */;
                /* unimplemented  {fstp qword [stack_ptr+0x20], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [stack_ptr+0x10]} */
🚫🚫                /* unimplemented  {fadd qword [stack_ptr+0x134]} */
🚫🚫🚫                item_d0 = /* item_d0 = unimplemented  {fstp qword [stack_ptr+0xcc], fp0} */;
                /* unimplemented  {fstp qword [stack_ptr+0xcc], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [stack_ptr+0x18]} */
🚫🚫                /* unimplemented  {fadd qword [stack_ptr+0x13c]} */
🚫🚫🚫                double item_c8_1 = /* double item_c8_1 =
                    unimplemented  {fstp qword [stack_ptr+0xd4], fp0} */;
                /* unimplemented  {fstp qword [stack_ptr+0xd4], fp0} */
🚫🚫                /* unimplemented  {fld fp0, qword [stack_ptr+0x20]} */
🚫🚫                /* unimplemented  {fadd qword [stack_ptr+0x144]} */
🚫🚫🚫                double item_c0_1 = /* double item_c0_1 =
                    unimplemented  {fstp qword [stack_ptr+0xdc], fp0} */;
                /* unimplemented  {fstp qword [stack_ptr+0xdc], fp0} */
                int16_t top_19;
                top_2 = top_19;
                continue;
            }
        }

        if (!item_18)
            break;

        double* item_1a0_2 = &item_124;
        void* item_1ac_1 = context;

        if (FX_FragmentSimulate_4(flagP, &item_108))
        {
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0x134]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [stack_ptr+0x78]} */
🚫🚫🚫            item_18c = /* item_18c = unimplemented  {fstp qword [stack_ptr+0x14], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x14], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0x140]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [stack_ptr+0x84]} */
🚫🚫🚫            double item_184_3 = /* double item_184_3 = unimplemented  {fstp qword [stack_ptr+0x1c], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x1c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0x148]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [stack_ptr+0x8c]} */
🚫🚫🚫            double item_17c_3 = /* double item_17c_3 = unimplemented  {fstp qword [stack_ptr+0x24], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x24], fp0} */
🚫🚫            Sys_OpenFileStream_11(&item_18c);
            /* unimplemented  {call Sys_OpenFileStream_11} */
🚫🚫🚫            double item_f0_1 = /* double item_f0_1 = unimplemented  {fstp qword [stack_ptr+0xb0], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0xb0], fp0} */
            Sys_FreeMemory_11(&item_18c);
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0xb4]} */
🚫🚫🚫            *(context + 0x110) =
            /* unimplemented  {fstp dword [context_val+0x110], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0xac]} */
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
🚫🚫            /* unimplemented  {fmul fp0, qword [stack_ptr+0x10]} */
🚫🚫🚫            item_18c = /* item_18c = unimplemented  {fstp qword [stack_ptr+0x10], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x10], fp0} */
🚫🚫            /* unimplemented  {fld fp0, fp0} */
🚫🚫            /* unimplemented  {fmul fp0, qword [stack_ptr+0x18]} */
🚫🚫🚫            double item_184_4 = /* double item_184_4 = unimplemented  {fstp qword [stack_ptr+0x18], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x18], fp0} */
🚫🚫            /* unimplemented  {fmul fp0, qword [stack_ptr+0x20]} */
🚫🚫🚫            double item_17c_4 = /* double item_17c_4 = unimplemented  {fstp qword [stack_ptr+0x20], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x20], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0x10]} */
🚫🚫            /* unimplemented  {fadd qword [stack_ptr+0x78]} */
🚫🚫🚫            item_108 = /* item_108 = unimplemented  {fstp qword [stack_ptr+0x94], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x94], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0x18]} */
🚫🚫            /* unimplemented  {fadd qword [stack_ptr+0x80]} */
🚫🚫🚫            double item_100_1 = /* double item_100_1 = unimplemented  {fstp qword [stack_ptr+0x9c], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x9c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [stack_ptr+0x20]} */
🚫🚫            /* unimplemented  {fadd qword [stack_ptr+0x88]} */
🚫🚫🚫            double item_f8_1 = /* double item_f8_1 = unimplemented  {fstp qword [stack_ptr+0xa4], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0xa4], fp0} */
        }

        break;
    }

    Sys_CloseFileStream_12(&item_174, -1.57079637f);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x48]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x3c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x28]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    item_b8 = /* item_b8 = unimplemented  {fstp dword [stack_ptr+0xe4], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xe4], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x58]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x44]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x38]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x2c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_b4 = /* float item_b4 = unimplemented  {fstp dword [stack_ptr+0xe8], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xe8], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x58]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x48]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x3c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x30]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_b0 = /* float item_b0 = unimplemented  {fstp dword [stack_ptr+0xec], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xec], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x64]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x40]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x34]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x28]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_ac = /* float item_ac = unimplemented  {fstp dword [stack_ptr+0xf0], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xf0], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x64]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x44]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x38]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x2c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_a8 = /* float item_a8 = unimplemented  {fstp dword [stack_ptr+0xf4], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xf4], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x64]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x48]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x3c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x30]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_a4 = /* float item_a4 = unimplemented  {fstp dword [stack_ptr+0xf8], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xf8], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x70]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x40]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x6c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x34]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x68]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x28]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_a0 = /* float item_a0 = unimplemented  {fstp dword [stack_ptr+0xfc], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0xfc], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x70]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x44]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x6c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x38]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x68]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x2c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
    int32_t result;
    int32_t item_128;
    int32_t item_94 = result + item_128 + 1;
🚫🚫🚫    float item_9c = /* float item_9c = unimplemented  {fstp dword [stack_ptr+0x100], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x100], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x70]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x48]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x6c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x3c]} */
    memcpy(context + 0x20, &item_108, 0x18);
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x68]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [stack_ptr+0x30]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_98 = /* float item_98 = unimplemented  {fstp dword [stack_ptr+0x104], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x104], fp0} */
    *(context + 0x60) = item_10c;
    memcpy(context + 0x38, &item_b8, 0x28);
    return result;
}
