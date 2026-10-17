// IGI native provenance: SCameraLens_Tick - 0x00441770 - CFG score 95.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 00441770-SCameraLens_Tick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCameraLens_Tick.h"
int32_t SCameraLens_Tick(double* context)

{
    int32_t data_val = *(context + 0x25d4);
    void* context_val = context[0x4ba];

    if (!data_val)
    {
        int32_t data_2 = context[0x4bb];
        *(context + 0x25d4) = 7;
        context[0x4bb] = data_2 ^ 1;
    }
    else
        *(context + 0x25d4) = data_val - 1;

    int32_t data_4 = *(context + 0x25dc);
    int32_t entity_val;

    if (!data_4)
    {
        entity_val = context[0x4bc] + 1;
        int32_t temp_1 = 0;
        *(context + 0x25dc) = 7;
        context[0x4bc] = entity_val;
        temp_1 = g_5be25c;

        if (entity_val > temp_1 - 1)
            context[0x4bc] = 0;
    }
    else
        *(context + 0x25dc) = data_4 - 1;

    int16_t data_6;
    data_6 = *(context_val + 0x169);
    *(context_val + 0x16a) = data_6;
    data_6 = *(context_val + 0x168);
    double* item_30;

    if (data_6)
    {
        long double fpu_val_7_5 = context[0x1e];
        long double f0_1 = *(context_val + 0x120);
        fpu_val_7_5 - f0_1;
        long double fpu_val_7_6 = context[0x1e];

        if (!(*(&((fpu_val_7_5 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f2_1 = *(context_val + 0x120);
            fpu_val_7_6 - f2_1;

            if (!(*(&((fpu_val_7_6 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_6, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_9 = context[0x1e] - 0.0436332338f;
                context[0x1e] = fpu_val_7_9;
                long double f6_1 = *(context_val + 0x120);
                fpu_val_7_9 - f6_1;

                if (*(&((fpu_val_7_9 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_9, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_9 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                    context[0x1e] = *(context_val + 0x120);
            }
        }
        else
        {
            long double fpu_val_7_7 = fpu_val_7_6 + 0.0436332338f;
            context[0x1e] = fpu_val_7_7;
            long double f3_1 = *(context_val + 0x120);
            fpu_val_7_7 - f3_1;

            if (!(*(&((fpu_val_7_7 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                context[0x1e] = *(context_val + 0x120);
        }

        int32_t item_2c_5 = 1;
        item_30 = context;
        double item_18;
        WeaponType_UpdateAnim(&item_18, item_30, item_2c_5);
        item_18 = item_18 + context[4];
        double item_10;
        double item_10_1 = item_10 + context[5];
        double item_8;
        double item_8_1 = item_8 + context[6];
        memcpy(&context[0x22], &item_18, 0x18);
        memcpy(&context[0x25], &context[0xe], 0x28);
        context[0x30] = 0;
        Car_DetectionSweep(&context[0x31], &context[0x22], context[0x4ba], 1);
        long double fpu0;
        camera_move(fpu0, context);
        entity_val = Env_CameraBeepS(context);
    }
    else
    {
        long double fpu7 = context[0x1e];
        long double f1_1 = -1.30899692f;
        fpu7 - f1_1;
        long double fpu_val_7_1 = context[0x1e];

        if (!(*(&((fpu7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1_1) ? 1 : 0) << 0xa
            | (fpu7 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f4_1 = -1.30899692f;
            fpu_val_7_1 - f4_1;

            if (!(*(&((fpu_val_7_1 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_1, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_4 = context[0x1e] - 0.0436332338f;
                context[0x1e] = fpu_val_7_4;
                long double f7_1 = -1.30899692f;
                fpu_val_7_4 - f7_1;

                if (*(&((fpu_val_7_4 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_4, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_4 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
                    context[0x1e] = 0xbfa78d36;
            }
        }
        else
        {
            long double fpu_val_7_2 = fpu_val_7_1 + 0.0436332338f;
            context[0x1e] = fpu_val_7_2;
            long double f5_1 = -1.30899692f;
            fpu_val_7_2 - f5_1;

            if (!(*(&((fpu_val_7_2 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_2, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                context[0x1e] = 0xbfa78d36;
        }

        *(context_val + 0x169) = 0;
        void* data_7 = context[0x4b8];

        if (data_7)
        {
            entity_val = SoundSys_SetFrequency_7(data_7);
            context[0x4b8] = 0;
        }

        int32_t* data_8 = *(context + 0x25c4);

        if (data_8)
        {
            void* data_9 = *data_8;

            if (data_9)
                SoundSys_SetFrequency_7(data_9);

            entity_val = Qtask_UpdateList(*(context + 0x25c4));
            *(context + 0x25c4) = 0;
        }

        struct status_msg* data_10 = context[0x4b9];

        if (data_10)
        {
            entity_val = SoundSys_SetFrequency_7(data_10);
            context[0x4b9] = 0;
        }
    }

    if (*(context + 0x25cc))
    {
        *(context + 0x25cc) = 0;
        *(context_val + 0x170) = 1;
        item_30 = DynObj_Missing(context_val + 0x138);
        DynObj_CreateMagicObject_5(context, item_30);
        *(context + 0xdc) = 0;
        entity_val = FX_SmokeEmit(&context[4], 1, 0, 0x3e800000, 0x45000000, 0, 0, 7, 3, nullptr, "1009_01_1",
            "explo_camera", 0x15, 2, 0x47c80000, 0);
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0xf4]} */
🚫🚫    /* unimplemented  {fadd dword [context_val+0x108]} */
    float data_16 = context[0x1e];
    int32_t item_2c_7 = entity_val;
🚫🚫    /* unimplemented  {fadd dword [context_val+0x124]} */
🚫🚫🚫    float item_2c_8 = /* float item_2c_8 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    item_30 = nullptr;
    int32_t result = Sys_ReadFileBlock_12(&context[0xe], data_16, item_30, item_2c_8);
    int32_t* i_1 = context[1];

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t temp_6 = g_afa7e0;

            do
            {
                int32_t* source_2 = *i;
                void* data_20;

                if (!source_2)
                    data_20 = nullptr;
                else
                {
                    int32_t data_17 = *source_2;
                    int32_t data_18 = -(data_17);
                    data_20 = (data_18 - data_18) & source_2;
                }

                *((temp_6 << 2) + &g_afa6e0) = data_20;
                int32_t temp_7 = temp_6 + 1;
                int32_t data_21 = 0;
                g_afa7e0 = temp_7;
                data_21 = i[7];
                result = *((data_21 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    temp_7 = g_afa7e0;
                }

                i = *((temp_7 << 2) + &g_afa6dc);
                temp_6 = temp_7 - 1;
                g_afa7e0 = temp_6;
            } while (i);
        }
    }

    return result;
}
