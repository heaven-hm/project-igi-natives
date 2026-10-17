// Original IGI.EXE function: Human_MovementIntegrator (VA 0x004614B0; static CFG gate PASS, CFG score 0.978).
#include "Human_MovementIntegrator.h"
int32_t Human_MovementIntegrator(void* context)

{
    int32_t data_val = *(context + 0x2f4);
    char item_69 = 0;
    int32_t item_68 = data_val;
    float item_5c = *(context + 0x664);
    float temp_1 = *(context + 0x668);
    int32_t temp_2 = *(context + 0x6f8);
    float entity_1 = *(context + 0x66c);
    item_5c = item_5c + *(context + 0x520);
    float item_58_1 = temp_1 + *(context + 0x524);
    float item_54_1 = entity_1 + *(context + 0x528);
    float* data_5;

    if (!temp_2 || !(data_val & 4))
    {
        data_5 = context + 0x67c;
    label_461770:
        *data_5 = 0.0f;
        *(context + 0x680) = 0;
        *(context + 0x684) = 0;
    }
    else
    {
        float item_44_1 = *(context + 0x6d8);
        long double fpu_val_7_6 = item_44_1;
        long double f0_1 = 0.0f;
        fpu_val_7_6 - f0_1;
        float item_40_1 = *(context + 0x6dc);
        float source_1 = *(context + 0x6e0);

        if (!(*(&((fpu_val_7_6 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_46157b:
            long double fpu_val_7_9 = source_1;
            long double fpu_val_6_1 = item_40_1;
            long double fpu_val_5_1 = item_44_1;
            long double fpu_val_7_11 =
                1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_9 * fpu_val_7_9);
            item_44_1 = item_44_1 * fpu_val_7_11;
            item_40_1 = item_40_1 * fpu_val_7_11;
            source_1 = source_1 * fpu_val_7_11;
        }
        else
        {
            long double fpu_val_7_7 = item_40_1;
            long double f1_1 = 0.0f;
            fpu_val_7_7 - f1_1;

            if (!(*(&((fpu_val_7_7 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_46157b;

            long double fpu_val_7_8 = source_1;
            long double f3_1 = 0.0f;
            fpu_val_7_8 - f3_1;

            if (!(*(&((fpu_val_7_8 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_8, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_8 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_46157b;
        }

        float item_48_1 = source_1;
        int32_t item_48_2 = 0;
        float item_64_1 = 90.0f - Sys_PushStack_9(source_1) * 57.2957764f;
        long double fpu_val_0_4 = item_64_1;
        long double f2_1 = 80.0f;
        fpu_val_0_4 - f2_1;

        if (*(&((fpu_val_0_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_4, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_0_4 == f2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
        {
            long double fpu_val_0_9 = item_64_1;
            long double f4_1 = 60.0f;
            fpu_val_0_9 - f4_1;

            if (*(&((fpu_val_0_9 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_9, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_0_9 == f4_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
            {
                long double fpu_val_0_14 = item_64_1;
                long double f5_1 = 50.0f;
                fpu_val_0_14 - f5_1;

                if (*(&((fpu_val_0_14 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_0_14, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_0_14 == f5_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
                {
                    long double fpu_val_0_20 = item_64_1;
                    long double f6_1 = 45.0f;
                    fpu_val_0_20 - f6_1;

                    if (*(&((fpu_val_0_20 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_0_20, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_0_20 == f6_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
                    {
                        data_5 = context + 0x67c;
                        goto label_461770;
                    }

                    data_5 = context + 0x67c;
                    *(context + 0x684) = *(context + 0x684);
                    item_69 = 1;
                    float item_4c_5 = item_40_1 * 18.9629631f;
                    *data_5 = item_44_1 * 18.9629631f + *data_5;
                    *(context + 0x680) = item_4c_5 + *(context + 0x680);
                }
                else
                {
                    data_5 = context + 0x67c;
                    *(context + 0x684) = *(context + 0x684);
                    item_69 = 1;
                    float item_4c_4 = item_40_1 * 56.8888893f;
                    *data_5 = item_44_1 * 56.8888893f + *data_5;
                    *(context + 0x680) = item_4c_4 + *(context + 0x680);
                }
            }
            else
            {
                data_5 = context + 0x67c;
                int32_t item_48_4 = 0;
                int32_t* entity_4 = data_5;
                item_69 = 1;
                *entity_4 = item_44_1 * 948.0f;
                entity_4[1] = item_40_1 * 948.0f;
                entity_4[2] = item_48_4;
            }
        }
        else
        {
            data_5 = context + 0x67c;
            int32_t item_48_3 = 0;
            item_69 = 1;
            *data_5 = item_44_1 * 1137.0f;
            data_5[1] = item_40_1 * 1137.0f;
            data_5[2] = item_48_3;
        }
    }

🚫🚫    /* unimplemented  {fld fp0, dword [data_val]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
    double item_20;
    memcpy(&item_20, context + 0x20, 0x18);
🚫🚫    *data_5 =
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x680]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    float item_64_2 = /* float item_64_2 = unimplemented  {fst dword [stack_ptr+0x14], fp0} */;
🚫🚫🚫    *(context + 0x680) =
    /* unimplemented  {fstp dword [context_val+0x680], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x684]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
    int32_t entity_6 = item_68;
    char data_6 = *(context + 0x694);
🚫🚫    float item_60 = /* float item_60 = unimplemented  {fst dword [stack_ptr+0x18], fp0} */;
🚫🚫🚫    *(context + 0x684) =
    /* unimplemented  {fstp dword [context_val+0x684], fp0} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x1c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x20]} */
    item_68 = entity_6 & 0xffffffef;
🚫🚫🚫    float item_58_2 = /* float item_58_2 = unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x24]} */
🚫🚫🚫    float item_54_2 = /* float item_54_2 = unimplemented  {fstp dword [stack_ptr+0x24], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x670]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    *(context + 0x670) =
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x674]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    float item_60_1 = /* float item_60_1 = unimplemented  {fst dword [stack_ptr+0x18], fp0} */;
🚫🚫🚫    *(context + 0x674) =
    /* unimplemented  {fstp dword [context_val+0x674], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x678]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    float item_64_3 = /* float item_64_3 = unimplemented  {fst dword [stack_ptr+0x14], fp0} */;
🚫🚫🚫    *(context + 0x678) =
    /* unimplemented  {fstp dword [context_val+0x678], fp0} */
🚫🚫    /* unimplemented  {fadd fp0, fp1} */
🚫🚫🚫    item_5c = /* item_5c = unimplemented  {fstp dword [stack_ptr+0x1c], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x1c], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x20]} */
🚫🚫🚫    float item_58_3 = /* float item_58_3 = unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
🚫🚫    /* unimplemented  {fadd dword [stack_ptr+0x24]} */
🚫🚫🚫    float item_54_3 = /* float item_54_3 = unimplemented  {fstp dword [stack_ptr+0x24], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x728]} */
🚫🚫    /* unimplemented  {fadd qword [stack_ptr+0x58]} */
🚫🚫    item_20 = /* item_20 = unimplemented  {fst qword [stack_ptr+0x58], fp0} */;
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x72c]} */
🚫🚫    /* unimplemented  {fadd qword [stack_ptr+0x60]} */
🚫🚫🚫    double item_18 = /* double item_18 = unimplemented  {fstp qword [stack_ptr+0x60], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr+0x60], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x730]} */
🚫🚫    /* unimplemented  {fadd qword [stack_ptr+0x68]} */
🚫🚫🚫    double item_10 = /* double item_10 = unimplemented  {fstp qword [stack_ptr+0x68], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr+0x68], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x1c]} */
🚫🚫    /* unimplemented  {fadd fp0, fp1} */
🚫🚫🚫    double item_38 = /* double item_38 = unimplemented  {fstp qword [stack_ptr+0x40], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr+0x40], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fadd qword [stack_ptr+0x60]} */
🚫🚫🚫    double item_30 = /* double item_30 = unimplemented  {fstp qword [stack_ptr+0x48], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr+0x48], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fadd qword [stack_ptr+0x68]} */
🚫🚫🚫    double item_28 = /* double item_28 = unimplemented  {fstp qword [stack_ptr+0x50], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr+0x50], fp0} */

    if (!data_6)
    {
        if (*(context + 0x696))
            Human_WallSweep(context, &item_20, &item_38, &item_5c, &item_68);

        if (*(context + 0x695))
        {
            float item_64_4 = 0.0f;

            if (item_68 & 4)
                item_64_4 = 2048.0f;

            if (item_69)
                item_64_4 = 8192.0f;

            float* item_84_2 = &item_5c;
            Human_GroundQuery(context, &item_20, &item_38, &item_68, item_64_4);
        }

        if (*(context + 0x698))
        {
            void* item_88_3 = context;
            Human_Separation(&item_20, &item_38, &item_5c);
        }
    }

    if (item_68 & 0x10)
    {
        void* item_80_4 = context;
        AI_CheckHearing_18(item_80_4, "Roof!\n");
🚫🚫        /* unimplemented  {fld fp0, qword [context_val+0x720]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_5334b0]} */
🚫🚫🚫        item_80_4 = /* item_80_4.q = unimplemented  {fstp qword [stack_ptr], fp0} */;
        /* unimplemented  {fstp qword [stack_ptr], fp0} */
        AI_CheckHearing_18(context, "Distance to roof from feet: %.2f\n");
    }

    float entity_9 = *(context + 0xa0);
    double* item_80_5 = &item_38;
    *(context + 0x2f4) = item_68;
    WorldObject_CommitTransform(Level_StartMission_4(), context, item_80_5, entity_9);
    int32_t item_8c_3 = *(&item_38 + 4);
    int32_t item_90_2 = item_38;
    AI_CheckHearing_18(context, "PosX: %.2f\n");
    int32_t item_9c = *(&item_30 + 4);
    int32_t item_a0 = item_30;
    AI_CheckHearing_18(context, "PosY: %.2f\n");
    int32_t item_ac = *(&item_28 + 4);
    int32_t item_b0 = item_28;
    AI_CheckHearing_18(context, "PosZ: %.2f\n");
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x728]} */
    *(context + 0x688) = item_5c;
    *(context + 0x68c) = item_58_3;
    *(context + 0x690) = item_54_3;
🚫🚫    /* unimplemented  {fadd dword [data_val]} */
🚫🚫🚫    *(context + 0x688) =
    /* unimplemented  {fstp dword [data_val], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x72c]} */
🚫🚫    /* unimplemented  {fadd dword [context_val+0x68c]} */
🚫🚫🚫    *(context + 0x68c) =
    /* unimplemented  {fstp dword [context_val+0x68c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x730]} */
🚫🚫    /* unimplemented  {fadd dword [context_val+0x690]} */
🚫🚫🚫    *(context + 0x690) =
    /* unimplemented  {fstp dword [context_val+0x690], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫🚫    item_80_5 = /* item_80_5.q = unimplemented  {fstp qword [stack_ptr], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr], fp0} */
    AI_CheckHearing_18(context, "SpeedX: %.2f\n");
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x30]} */
🚫🚫🚫    item_80_5 = /* item_80_5.q = unimplemented  {fstp qword [stack_ptr], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr], fp0} */
    AI_CheckHearing_18(context, "SpeedY: %.2f\n");
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫🚫    item_80_5 = /* item_80_5.q = unimplemented  {fstp qword [stack_ptr], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr], fp0} */
    return AI_CheckHearing_18(context, "SpeedZ: %.2f\n");
}
