// Original IGI.EXE function: Menu_LeaveMenus_19 (VA 0x00428630; static CFG gate PASS, CFG score 0.944).
#include "Menu_LeaveMenus_19.h"
int32_t Menu_LeaveMenus_19(float context)

{
    float context_val = context;
    int32_t result_2 = *(context_val + 0x878) + 1;
    int32_t result = result_2;
    bool flag_0 = result < *(context_val + 0x880);
    *(context_val + 0x878) = result_2;

    if (!flag_0)
    {
        long double fp0_1 = Sys_AllocateMemory_14(0x57bc88);
        float entity_2 = *(context_val + 0xf8);
        int32_t data_2 = *(*(*(**(context_val + 0x6c) + 0xc) + 0xc) + 0x7c);
        *(context_val + 0x878) = 0;
        int32_t i_2;
        float item_3c;
        double item_18;
        double item_10;
        double item_8;

        if (data_2)
        {
            long double fpu_val_7_8;

            if (data_2 != 1)
            {
                WeaponType_UpdateAnim(&item_18, context_val, 1);
                item_18 = item_18 + *(context_val + 0x20);
                item_10 = item_10 + *(context_val + 0x28);
                fpu_val_7_8 = item_8 + *(context_val + 0x30);
            }
            else
            {
                WeaponType_RegisterType_2(&i_2, context_val, 0);
                float item_44;
                long double fpu_val_7_5 = -(item_44);
                float item_40;
                long double fpu_val_6_3 = item_40 * *(context_val + 0x78) + i_2 * *(context_val + 0x70);
                memcpy(&item_18, context_val + 0x20, 0x18);
                item_3c = fpu_val_6_3 + fpu_val_7_5 * *(context_val + 0x74);
                float item_38_1 =
                    item_40 * *(context_val + 0x84) + i_2 * *(context_val + 0x7c) + fpu_val_7_5 * *(context_val + 0x80);
                long double fpu_val_7_7 =
                    item_40 * *(context_val + 0x90) + i_2 * *(context_val + 0x88) + fpu_val_7_5 * *(context_val + 0x8c);
                item_18 = item_3c + item_18;
                item_10 = item_38_1 + item_10;
                fpu_val_7_8 = fpu_val_7_7 + item_8;
            }

            item_8 = fpu_val_7_8;
        }
        else
            memcpy(&item_18, context_val + 0x20, 0x18);

        long double fpu_val_7_15 = entity_2 / *(context_val + 0x884);
        int32_t item_24 = *(context_val + 0x114);
        result = *(context_val + 0x118);
        int32_t result_1 = result;
        int32_t item_1c_1 = *(context_val + 0x11c);
        i_2 = fpu_val_7_15;
        int32_t i_1 = i_2;
        context = i_1;

        if (i_1 <= 1)
        {
            i_1 = 1;
            context = 1.40129846e-45.0f;
        }

        long double fpu_val_7_16 = *(context_val + 0x108);
        double item_34 = *(context_val + 0x10c);
        double item_2c_1 = *(context_val + 0x110);
        long double fpu_val_6_21 = 1.0f / context;
        context = fpu_val_6_21;
        item_3c = fpu_val_6_21 * fpu_val_7_16;
        item_34 = context * item_34;
        double item_2c_2 = context * item_2c_1;

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                Sys_AllocateMemory_14(0x57bc88);
                Sys_AllocateMemory_14(0x57bc88);
                Sys_AllocateMemory_14(0x57bc88);
                i_2 = *(context_val + 0x88c) * 3.0f;
                int16_t i_4 = i_2;
                i_2 = (Sys_AllocateMemory_14(0x57bc88) * 0.300000012f + 0.600000024f) * *(context_val + 0x88c) * 30.0f;
                int32_t i_3 = i_2;
                float item_70_1 = Sys_AllocateMemory_14(0x57bc88) * 6.28318548f;
                long double fpu_val_7_38 = 0.5f - Sys_AllocateMemory_14(0x57bc88);
                result = Script_SpawnNewTask_31(*(context_val + 0x868), &item_18, &item_24,
                    fp0_1 * 0.300000012f + 0.150000006f, fpu_val_7_38 * 0.0376991145f, item_70_1,
                    0x3f800000, i_4, i_3);
                i = i_1;
                i_1 -= 1;
                item_18 = item_3c + item_18;
                item_10 = item_34 + item_10;
                item_8 = item_2c_2 + item_8;
            } while (i != 1);
        }
    }

    return result;
}
