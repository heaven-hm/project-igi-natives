// Original IGI.EXE function: Weapon_FireBullet_2 (VA 0x00471B60; static CFG gate PASS, CFG score 0.979).
#include "Weapon_FireBullet_2.h"
int32_t Weapon_FireBullet_2(void* context)

{
    void* dest_val = context;
    void* context_val = dest_val;
    *(dest_val + 0x134) = 0;
    *(dest_val + 0x130) = 0;
    int32_t data_val = AI_UpdateOrders_17();
    int16_t saved_src = data_val;
    data_val = *(dest_val + 0x1c);
    int32_t result;
    int32_t entity_val;
    result = TaskType_IsDerivedFrom(data_val, saved_src);

    while (!result)
    {
        context_val = *(context_val + 0x14);

        if (!context_val)
            return result;

        int16_t data_1 = AI_UpdateOrders_17();
        entity_val = *(context_val + 0x1c);
        result = TaskType_IsDerivedFrom(entity_val, data_1);
    }

    int32_t* data_2 = AI_CombatTarget_18();
    int32_t* entity_1 = dest_val + 0x2c54;
    int32_t i_2 = 0xa;
    int32_t i;

    do
    {
        *entity_1 = 0;
        entity_1 = &entity_1[0xb];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    int32_t entity_2 = *data_2;
    float item_80;
    float item_7c;
    float item_74;
    float item_64;
    int16_t idx;

    if (entity_2 > 0)
    {
        int32_t* data_3 = &data_2[2];
        int32_t item_6c_1 = entity_2;
        item_74 = data_3;
        bool flag_0_1;

        do
        {
            void* flagP1 = *data_3;

            if (flagP1 && flagP1 != context_val && *(flagP1 + 0xcf6) && !*(flagP1 + 0xcf5))
            {
                double item_18[0x3];
                AI_FireWeapon_23(&item_18, *(flagP1 + 0x4ec));
                double item_30;
                memcpy(&item_30, flagP1 + 0x20, 0x18);
                long double fpu_val_7_2 = item_30 - g_bcab08;
                double item_28;
                long double fpu_val_6_2 = item_28 - g_bcab10;
                double item_20;
                long double fpu_val_5_2 = item_20 - g_bcab18;
                int32_t entity_3 = *(flagP1 + 0xa0);
                long double fpu_val_4_6 = g_bcaaf4 * fpu_val_5_2;
                long double fpu_val_3_6 = g_bcaaf0 * fpu_val_6_2;
                float item_4c =
                    g_bcaae8 * fpu_val_5_2 + g_bcaae4 * fpu_val_6_2 + g_bcaae0 * fpu_val_7_2;
                long double fpu_val_4_10 = g_bcab00 * fpu_val_5_2;
                long double fpu_val_3_10 = g_bcaafc * fpu_val_6_2;
                float item_48 = fpu_val_4_6 + fpu_val_3_6 + g_bcaaec * fpu_val_7_2;
                idx = 0;
                float item_44_1 = fpu_val_4_10 + fpu_val_3_10 + g_bcaaf8 * fpu_val_7_2;

                if (!Render_DrawBoneMesh(&item_4c, entity_3, 0))
                {
                    void* item_3c_1 = context_val;
                    void* item_38_1 = context_val;
                    void* item_34_1 = flagP1;
                    int32_t dest_2 = *(context + 0x130) + 1;
                    item_80 = 0.0f;
                    *(context + 0x130) = dest_2;
                    char data_8 = FX_TrailUpdate_12();
                    void item_40;
                    DynObj_RegisterSymbol_12(Level_StartMission_4(), &g_bcab08, &item_18, data_8, &item_40,
                        0xffffffff, 0xffffffff, &item_80);
                    Weapon_UpdateMuzzleFlash(&g_bcaae0, &item_64, &item_7c, &item_30);
                    long double fpu_val_7_4 = item_7c;
                    long double f5_1 = 0.0f;
                    fpu_val_7_4 - f5_1;
                    idx = 0;

                    if (!(*(&((fpu_val_7_4 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_4, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_4 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double fpu_val_7_5 = item_80;
                        long double f6_1 = 0.0f;
                        fpu_val_7_5 - f6_1;
                        idx = 0;
                        int32_t data_12;

                        data_12 = !(*(&((fpu_val_7_5 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_5, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_5 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40) ? 0 : 1;

                        int32_t temp_3 = 0;
                        temp_3 = *(flagP1 + 0xfc) != 1;
                        Weapon_ReloadClip_2(context, flagP1, item_7c, entity_3, &item_64, data_12, temp_3,
                            *(flagP1 + 0xcf5));
                    }
                }

                dest_val = context;
            }

            data_3 = item_74 + 4;
            flag_0_1 = item_6c_1 != 1;
            item_74 = data_3;
            item_6c_1 -= 1;
        } while (flag_0_1);
    }

    int32_t* source_3 = dest_val + 0x2c50;
    int32_t i_3 = 0xa;
    int32_t i_1;

    do
    {
        result = Timer_Now();

        if (!source_3[1])
        {
            result -= source_3[4];

            if (result > 0xbb8)
                source_3[-3] = 0;
        }
        else if (!*source_3)
        {
            *(dest_val + 0x134) += 1;
            float item_60_1;
            float item_5c_1;

            if (!source_3[-2])
            {
                if (!source_3[-1])
                {
                    item_64 = 64.0f;
                    item_60_1 = 0.0f;
                }
                else
                {
                    item_64 = 0.0f;
                    item_60_1 = 128.0f;
                }

                item_5c_1 = 0.0f;
            }
            else
            {
                item_64 = 0.0f;
                item_60_1 = 0.0f;
                item_5c_1 = 128.0f;
            }

            float data_14 = result - source_3[5];

            if (result - source_3[5] >= 0)
            {
                item_80 = 3.50324616e-43.0f;

                if (data_14 <= 0xfa)
                    item_80 = data_14;
            }
            else
                item_80 = 0.0f;

🚫🚫            /* unimplemented  {fild fp0, dword [stack_ptr+0x10]} */
            float data_15 = source_3[2];
            float temp_7 = source_3[3];
            item_74 = data_15;
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_534110]} */
            float item_70_1 = data_15;
🚫🚫            /* unimplemented  {fld fp0, fp0} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533468]} */
🚫🚫🚫            float item_68_2 = /* float item_68_2 = unimplemented  {fstp dword [stack_ptr+0x38], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x38], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
🚫🚫            /* unimplemented  {fsub fp0, fp1} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533480]} */
🚫🚫            /* unimplemented  {fadd dword [&g_5333e0]} */
🚫🚫🚫            float item_6c_2 = /* float item_6c_2 = unimplemented  {fstp dword [stack_ptr+0x34], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x34], fp0} */
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            int32_t entity_12 = Weapon_UpdateBarrel(&g_bcaae0, &item_7c, &item_74, temp_7);
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [stack_ptr+0x34]} */
            int32_t item_9c_3 = entity_12;
🚫🚫🚫            float item_9c_4 = /* float item_9c_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [stack_ptr+0x30]} */
            int32_t item_a0_4 = entity_12;
🚫🚫🚫            float item_a0_5 = /* float item_a0_5 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            result = Sys_DispatchOpcode_15(0x5340b0, 7.00649232e-45.0f, source_3[6], source_3[7], 0x3f800000, item_64,
                item_60_1, item_5c_1, 0x3f000000, item_68_2, item_a0_5, item_9c_4, 0, 0);
            idx -= 1;
        }

        source_3 = &source_3[0xb];
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    return result;
}
