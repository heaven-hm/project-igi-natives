// Original IGI.EXE function: Human_GroundQuery (VA 0x00462390; static CFG gate PASS, CFG score 0.900).
#include "Human_GroundQuery.h"
int32_t* Human_GroundQuery(void* context, double* param_2, int32_t* param_3, int32_t* param_4 , float param_5)

{
    int32_t item_23c = 0;
    *(context + 0x710) = 0;
    float item_1d0;
    float* item_244 = &item_1d0;
    char item_225 = 0;
    *(context + 0x714) = 0x41d00000;
    float* data_val = FX_ExplosionSpawn_16(item_244, context, item_23c);
    float item_210 = *data_val;
    int32_t item_20c = data_val[1];
    float item_208 = data_val[2];
    long double fpu7;

    if (!*(context + 0x33d))
        fpu7 = 1638.4000000000001;
    else
        fpu7 = 819.20000000000005;

    int32_t* source_val = param_3;
    long double fpu_val_7_2 = fpu7 - item_208 + *(source_val + 0x10);
    int32_t data_3 = source_val[2];
    int32_t item_a4 = source_val[1];
    void* temp_2 = *(context + 0x800);
    int32_t item_a8 = *source_val;
    int32_t item_a0 = data_3;
    double item_98 = fpu_val_7_2;
    int16_t idx = 0;
    int32_t item_9c = source_val[3];
    double item_1f8;
    int32_t item_1e8;
    int32_t* item_188;
    double item_180;
    double item_170;
    float item_150;
    int32_t item_14c;
    int32_t item_148;
    int32_t* item_130;
    int32_t* data_4;
    float item_220[0x4];

    if (!temp_2)
    {
        int32_t item_23c_14 = 1;
        int32_t item_240_10 = 0xffffffff;
        void item_1b4;
        double* item_244_2 = &item_1b4;
        void item_90;
        memcpy(&item_90, source_val, 0x18);
        int32_t item_1e0 = 0;
        int32_t item_1dc_1 = 0xc14f4000;
        void* item_1b0_1 = context;
        int32_t item_1d8_1 = 0;
        int32_t item_1d4_1 = 0x40c00000;
        char data_25 = Level_CheckQTaskID_3();
        DynObj_RemoveSymbol_10(Level_StartMission_4(), &item_188, &item_a8, 2, &item_1e0, data_25, item_244_2,
            item_240_10, item_23c_14);
        int32_t item_c0;

        if (item_c0)
        {
            float item_d8;
            long double fpu_val_7_22 = item_d8;
            long double f1_1 = 0.0f;
            fpu_val_7_22 - f1_1;
            idx = 0;

            if (*(&((fpu_val_7_22 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_22, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_22 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                float* data_29 = FX_ExplosionSpawn_16(&item_220, context, 0);
                item_1d0 = *data_29;
                int32_t item_1cc_1 = data_29[1];
                double item_b8;
                long double fpu_val_7_24 = data_29[2] + item_b8;
                *(context + 0x720) = fpu_val_7_24;
                long double f2_1 = 7372.8000000000002;
                fpu_val_7_24 - f2_1;
                idx = 0;

                if (*(&((fpu_val_7_24 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_24, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_24 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                    *param_4 |= 0x10;
            }
        }

        if (item_130)
        {
            source_val = param_3;

            if (*(context + 0x800))
                goto label_462984;

            goto label_462866;
        }

        int32_t item_23c_16 = 1;
        int32_t item_240_12 = 0xffffffff;
        double* item_244_4 = &item_1b4;
        item_1e0 = 0;
        int32_t item_1dc_2 = 0x414f4000;
        char data_32 = Level_CheckQTaskID_3();
        DynObj_RemoveSymbol_10(Level_StartMission_4(), &item_188, &item_a8, 1, &item_1e0, data_32, item_244_4,
            item_240_12, item_23c_16);
    label_462841:
        source_val = param_3;
    }
    else
    {
        item_225 = 0;
        memset(&item_188, 0, 0xe0);
        *(context + 0x710) = 0;
        *(context + 0x714) = 0;
        data_4 = *(temp_2 + 0x3b6c);

        if (data_4)
        {
            void* data_5 = Script_ExecuteLevelScript_23(data_4, *(temp_2 + 0x3e2c));
            memcpy(&item_180, source_val, 0x18);
            item_170 = item_170 - item_208;
            idx = 0;

            if (data_5)
            {
                item_130 = 1;
                int32_t item_13c_1 = *(data_5 + 0x138);
                item_150 = 0.0f;
                item_14c = 0;
                item_148 = 0x3f800000;
            }

            void* source_1 = temp_2;

            if (Camera_ApplyPostProcess_33(source_1 + 0xe0) <= 0)
            {
                void* data_22 = Script_ExecuteLevelScript_23(*(source_1 + 0x3b6c), *(source_1 + 0x3e2c));

                if (data_22)
                {
                    Script_CallNativeHandler_23(&item_1f8, data_22);
                    item_170 = item_1e8;
                    int32_t item_1e4;
                    *(&item_170 + 4) = item_1e4;
                }
            }
            else
            {
                int32_t* dest_2 = *(source_1 + 0xe0);
                item_220[0] = dest_2;

                if (*dest_2)
                {
                    if (Sys_PopStack_11(context + 0x820))
                    {
                        memcpy(context + 0x808, &item_180, 0x18);
                        memcpy(context + 0x820, &item_180, 0x18);
                        dest_2 = item_220[0];
                    }

                    long double fp0_1 = Sys_DispatchOpcode_11(AI_CombatTarget_4(dest_2), context + 0x820);
                    long double f5_1 = 100.0;
                    fp0_1 - f5_1;

                    if (!(*(&((fp0_1 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fp0_1, f5_1) ? 1 : 0) << 0xa
                        | (fp0_1 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        memcpy(context + 0x808, context + 0x820, 0x18);
                        memcpy(context + 0x820, AI_CombatTarget_4(item_220[0]), 0x18);
                    }

                    double* item_23c_6 = &item_1f8;
                    item_1f8 = *(context + 0x820) - item_180;
                    double item_178;
                    double item_1f0_1 = *(context + 0x828) - item_178;
                    item_1e8 = *(context + 0x830) - item_170;
                    idx = 0;

                    if (!Sys_PopStack_11(item_23c_6))
                    {
                        item_220[0] = Sys_OpenFileStream_11(&item_1f8);
                        item_1d0 = *(context + 0x830) - *(context + 0x818);
                        long double fp0_3 = Sys_DispatchOpcode_11(context + 0x820, context + 0x808);
                        long double fpu_val_7_16 = item_220[0] / fp0_3;
                        long double f6_1 = 0.0;
                        fpu_val_7_16 - f6_1;
                        long double fpu_val_7_17;

                        if (!(*(&((fpu_val_7_16 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_16, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_16 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double fp0_4 = Sys_DispatchOpcode_11(context + 0x820, context + 0x808);
                            long double fpu_val_7_19 = item_220[0] / fp0_4;
                            long double f8_1 = 1.0;
                            fpu_val_7_19 - f8_1;

                            if (*(&((fpu_val_7_19 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_19, f8_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_19 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double fp0_5 = Sys_DispatchOpcode_11(context + 0x820, context + 0x808);
                                fpu_val_7_17 = item_220[0] / fp0_5;
                            }
                            else
                                fpu_val_7_17 = 1.0;
                        }
                        else
                            fpu_val_7_17 = 0.0;

                        source_1 = temp_2;
                        item_170 = (1.0 - fpu_val_7_17) * item_1d0 + *(context + 0x818);
                        idx = 0;
                    }
                    else
                    {
                        source_1 = temp_2;
                        item_170 = *(context + 0x830);
                        *(&item_170 + 4) = *(context + 0x834);
                    }
                }
            }

            void* source_5 = *(source_1 + 0x3b6c);

            if (!*(source_5 + 0x64))
            {
                AI_CheckSector_19(context);
                item_225 = 1;
            }
            else if (*(context + 0x76c))
                item_225 = 1;
            else
            {
                Human_SetParent(context, *(source_5 + 0x14));
                item_225 = 1;
            }

            goto label_462841;
        }
    }
    int32_t* temp_7;

    if (item_130 && !*(context + 0x800))
    {
    label_462866:
        temp_7 = item_188;

        if (temp_7)
        {
            memcpy(&item_1f8, &item_180, 0x18);
            item_1e8 = item_170 + 204.80000000000001;
            long double fpu_val_7_28 = item_1e8 - 2048.0;
            double* item_1ac = &item_1f8;
            float* item_1a8_1 = &item_1d0;
            memcpy(&item_1d0, &item_1f8, 0x18);
            double item_1c0_1 = fpu_val_7_28;
            int32_t item_78;
            int32_t* item_18c_1 = &item_78;
            int32_t data_34 = 0;
            int32_t* item_20_1 = nullptr;
            item_78 = 0;
            char item_1a0_1 = 0xff;
            int32_t item_19c_1 = 0;
            int32_t item_1a4_1 = 1;
            int32_t item_198 = 0;
            int32_t item_194_1 = 0;
            int32_t item_190;
            strncpy(&item_190, "DCBA", 4);
            data_34 = temp_7[7];
            data_4 = *((data_34 << 2) + &g_a9a6e0);

            if (data_4)
            {
                data_4(temp_7, &item_1ac);
                int32_t item_2c;

                if (item_20_1)
                    int32_t item_13c_2 = item_2c;
                temp_7 = item_188;
            }

            source_val = param_3;
        }

        long double fpu_val_7_31 = *(source_val + 0x10) - item_170 - item_208;
        *(context + 0x710) = fpu_val_7_31;
        long double fpu_val_6_5 = param_5;
        fpu_val_7_31 - fpu_val_6_5;
        idx = 0;

        if (*(&((fpu_val_7_31 < fpu_val_6_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_31, fpu_val_6_5) ? 1 : 0) << 0xa
                | (fpu_val_7_31 == fpu_val_6_5 ? 1 : 0) << 0xe) + 1) & 0x41 || item_225)
            goto label_4629ac;

        goto label_462a6b;
    }

label_462984:
    temp_7 = item_188;

    if (!item_225)
    {
    label_462a6b:
        int32_t* item_23c_21 = nullptr;
        *param_4 &= 0xfffffffb;
        AI_UpdateSensors_20(context, item_23c_21);
        *(context + 0x728) = 0;
        *(context + 0x72c) = 0;
        *(context + 0x730) = 0;
    }
    else
    {
    label_4629ac:
        *param_4 |= 4;
        *(source_val + 0x10) = item_208 + item_170;
        int32_t entity_10;

        if (!temp_7)
        {
            entity_10 = AI_UpdateSensors_20(context, nullptr);
            *(context + 0x728) = 0;
            *(context + 0x72c) = 0;
            *(context + 0x730) = 0;
        }
        else
            entity_10 = AI_UpdateSensors_20(context, temp_7);

        int32_t item_200_1 = 0;
        long double fpu_val_7_36 = *source_val - *param_2;
        int32_t item_1fc_1 = 0;
        item_210 = fpu_val_7_36;
        item_208 = *(source_val + 8) - param_2[1];
        long double f3_1 = 0.0;
        fpu_val_7_36 - f3_1;
        long double fpu_val_7_37;
        long double f4_1;

        if (*(&((fpu_val_7_36 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_36, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_36 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            fpu_val_7_37 = item_208;
            f4_1 = 0.0;
            fpu_val_7_37 - f4_1;
        }

        int16_t top_1;

        if (!(*(&((fpu_val_7_36 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_36, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_36 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
            (fpu_val_7_37 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_37, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_37 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double fp0_6 = Sys_OpenFileStream_11(&item_210);
            long double fpu_val_6_10 = *(source_val + 0x10) - param_2[2];
            int32_t item_240_16 = entity_10;
            item_240_16 = fpu_val_6_10 / sqrtl(fpu_val_6_10 * fpu_val_6_10 + fp0_6 * fp0_6);
            top_1 = 0;
            Sys_PopStack_9(item_240_16);
        }
        else
            top_1 = 0xffff;

🚫🚫        *(context + 0x718) =
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533988]} */
🚫🚫🚫        *(context + 0x71c) =
        /* unimplemented  {fstp dword [context_val+0x71c], fp0} */
        idx = top_1 + 1;
    }

    memcpy(context + 0x6a0, &item_188, 0x70);

    if (!item_130)
    {
        *(context + 0x7ec) = 0;
        return item_130;
    }

    memcpy(context + 0x7d0, &item_180, 0x18);
🚫🚫    /* unimplemented  {fld fp0, qword [context_val+0x710]} */
🚫🚫🚫    *(context + 0x7f0) =
    /* unimplemented  {fstp dword [context_val+0x7f0], fp0} */
    *(context + 0x7f4) = item_150;
    *(context + 0x7f8) = item_14c;
    int32_t data_44 = item_148;
    *(context + 0x7fc) = data_44;
🚫🚫    /* unimplemented  {fld fp0, dword [entity_val]} */
⋯    long double f7 = 0.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f7 */ - f7;
    bool c0_9 = /* bool c0_9 = unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f7 */ < f7;
    bool c2_9 = FCMP_UO(/* bool c2_9 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f7) */, f7);
    bool c3_9 = /* bool c3_9 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f7 */ == f7;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
    data_44 = (c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe | (idx & 7) << 0xb;

    if (!(*(&data_44 + 1) & 0x40))
    {
🚫🚫    label_462b27:
        /* unimplemented  {fld fp0, dword [context_val+0x7fc]} */
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x7f8]} */
🚫🚫        /* unimplemented  {fld fp0, dword [entity_val]} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fmul fp0, fp1} */
🚫🚫        /* unimplemented  {fld fp0, fp2} */
🚫🚫        /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp3} */
🚫🚫        /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫        /* unimplemented  {fsqrt } */
🚫🚫🚫        /* unimplemented  {fstp fp3, fp0} */
        /* unimplemented  {fstp fp3, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fdivr fp0, qword [&g_5333f8]} */
🚫🚫        /* unimplemented  {fld fp0, dword [entity_val]} */
🚫🚫        /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫        *(context + 0x7f4) =
        /* unimplemented  {fstp dword [entity_val], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x7f8]} */
🚫🚫        /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫        *(context + 0x7f8) =
        /* unimplemented  {fstp dword [context_val+0x7f8], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x7fc]} */
🚫🚫        /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫        *(context + 0x7fc) =
        /* unimplemented  {fstp dword [context_val+0x7fc], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x7f8]} */
⋯        long double f9_1 = 0.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f9_1 */ - f9_1;
        bool c0_10 = /* bool c0_10 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f9_1 */ < f9_1;
        bool c2_10 = FCMP_UO(/* bool c2_10 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f9_1) */, f9_1);
        bool c3_10 = /* bool c3_10 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f9_1 */ == f9_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
        data_44 = (c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb;

        if (!(*(&data_44 + 1) & 0x40))
            goto label_462b27;

🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x7fc]} */
⋯        long double f10_1 = 0.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f10_1 */ - f10_1;
        bool c0_11 = /* bool c0_11 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f10_1 */ < f10_1;
        bool c2_11 = FCMP_UO(/* bool c2_11 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f10_1) */,
            f10_1);
        bool c3_11 = /* bool c3_11 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f10_1 */ == f10_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
        data_44 = (c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb;

        if (!(*(&data_44 + 1) & 0x40))
            goto label_462b27;
    }

    *(context + 0x7ec) = 1;
    return data_44;
}
