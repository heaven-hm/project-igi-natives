#include "gi_platform.h"
#include "00428630-Menu_LeaveMenus_19.h"
int32_t Menu_LeaveMenus_19(float a1)

{
    float ctxB = a1;
    int32_t result_2 = (*(int32_t*)(uintptr_t)(ctxB + 0x878)) + 1;
    int32_t result = result_2;
    bool cond_0 = result < (*(int32_t*)(uintptr_t)(ctxB + 0x880));
    (*(int32_t*)(uintptr_t)(ctxB + 0x878)) = result_2;

    if (!cond_0)
    {
        long double fp0_1 = Sys_AllocateMemory_14(0x57bc88);
        float objC2 = (*(int32_t*)(uintptr_t)(ctxB + 0xf8));
        int32_t valA2 = (*(int32_t*)(uintptr_t)(*(*(**(ctxB + 0x6c) + 0xc) + 0xc) + 0x7c));
        (*(int32_t*)(uintptr_t)(ctxB + 0x878)) = 0;
        int32_t i_2;
        float v_3c;
        double v_18;
        double v_10;
        double v_8;

        if (valA2)
        {
            long double x87_r7_8;

            if (valA2 != 1)
            {
                WeaponType_UpdateAnim(&v_18, ctxB, 1);
                v_18 = v_18 + (*(int32_t*)(uintptr_t)(ctxB + 0x20));
                v_10 = v_10 + (*(int32_t*)(uintptr_t)(ctxB + 0x28));
                x87_r7_8 = v_8 + (*(int32_t*)(uintptr_t)(ctxB + 0x30));
            }
            else
            {
                WeaponType_RegisterType_2(&i_2, ctxB, 0);
                float v_44;
                long double x87_r7_5 = -(v_44);
                float v_40;
                long double x87_r6_3 = v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + i_2 * (*(int32_t*)(uintptr_t)(ctxB + 0x70));
                memcpy(&v_18, ctxB + 0x20, 0x18);
                v_3c = x87_r6_3 + x87_r7_5 * (*(int32_t*)(uintptr_t)(ctxB + 0x74));
                float v_38_1 =
                    v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + i_2 * (*(int32_t*)(uintptr_t)(ctxB + 0x7c)) + x87_r7_5 * (*(int32_t*)(uintptr_t)(ctxB + 0x80));
                long double x87_r7_7 =
                    v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + i_2 * (*(int32_t*)(uintptr_t)(ctxB + 0x88)) + x87_r7_5 * (*(int32_t*)(uintptr_t)(ctxB + 0x8c));
                v_18 = v_3c + v_18;
                v_10 = v_38_1 + v_10;
                x87_r7_8 = x87_r7_7 + v_8;
            }

            v_8 = x87_r7_8;
        }
        else
            memcpy(&v_18, ctxB + 0x20, 0x18);

        long double x87_r7_15 = objC2 / (*(int32_t*)(uintptr_t)(ctxB + 0x884));
        int32_t v_24 = (*(int32_t*)(uintptr_t)(ctxB + 0x114));
        result = (*(int32_t*)(uintptr_t)(ctxB + 0x118));
        int32_t result_1 = result;
        int32_t v_1c_1 = (*(int32_t*)(uintptr_t)(ctxB + 0x11c));
        i_2 = x87_r7_15;
        int32_t i_1 = i_2;
        a1 = i_1;

        if (i_1 <= 1)
        {
            i_1 = 1;
            a1 = 1.40129846e-45.0f;
        }

        long double x87_r7_16 = (*(int32_t*)(uintptr_t)(ctxB + 0x108));
        double v_34 = (*(int32_t*)(uintptr_t)(ctxB + 0x10c));
        double v_2c_1 = (*(int32_t*)(uintptr_t)(ctxB + 0x110));
        long double x87_r6_21 = 1.0f / a1;
        a1 = x87_r6_21;
        v_3c = x87_r6_21 * x87_r7_16;
        v_34 = a1 * v_34;
        double v_2c_2 = a1 * v_2c_1;

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                Sys_AllocateMemory_14(0x57bc88);
                Sys_AllocateMemory_14(0x57bc88);
                Sys_AllocateMemory_14(0x57bc88);
                i_2 = (*(int32_t*)(uintptr_t)(ctxB + 0x88c)) * 3.0f;
                int16_t i_4 = i_2;
                i_2 = (Sys_AllocateMemory_14(0x57bc88) * 0.300000012.0f + 0.600000024.0f) * (*(int32_t*)(uintptr_t)(ctxB + 0x88c)) * 30.0f;
                int32_t i_3 = i_2;
                float v_70_1 = Sys_AllocateMemory_14(0x57bc88) * 6.28318548.0f;
                long double x87_r7_38 = 0.5.0f - Sys_AllocateMemory_14(0x57bc88);
                result = Script_SpawnNewTask_31((*(int32_t*)(uintptr_t)(ctxB + 0x868)), &v_18, &v_24,
                    fp0_1 * 0.300000012.0f + 0.150000006.0f, x87_r7_38 * 0.0376991145.0f, v_70_1,
                    0x3f800000, i_4, i_3);
                i = i_1;
                i_1 -= 1;
                v_18 = v_3c + v_18;
                v_10 = v_34 + v_10;
                v_8 = v_2c_2 + v_8;
            } while (i != 1);
        }
    }

    return result;
}
