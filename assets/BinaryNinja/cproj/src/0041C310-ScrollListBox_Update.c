#include "gi_platform.h"
#include "0041C310-ScrollListBox_Update.h"
void* ScrollListBox_Update(void* a1)

{
    Menu_HandleInput_7(a1);
    g_57bbb0 = a1;

    if (Script_FormatString_6(a1 + 0x12b0))
        Script_SpawnNewTask_7(a1 + 0x12b0, a1);

    g_57bbb0 = 0;
    int32_t i = 0;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x1254)) > 0)
    {
        int32_t* dstD1 = a1 + 0x98;

        do
        {
            *dstD1 = Menu_LocalSS((*(int32_t*)(uintptr_t)(a1 + 0x44)), &dstD1[-0x10]);
            i += 1;
            dstD1 = &dstD1[0x12];
        } while (i < (*(int32_t*)(uintptr_t)(a1 + 0x1254)));
    }

    char valA5 = Script_FormatString_6(a1 + 0x1300);
    int32_t i_1;
    int32_t valA6;
    int32_t objC2;

    if (valA5)
    {
        Script_SpawnNewTask_7(a1 + 0x1300, a1);
        objC2 = (*(int32_t*)(uintptr_t)(a1 + 0x1254));
🚫🚫🚫        i_1 = /* i_1 = (unimplemented  {fistp qword [esp+0xc], fp0}).d */;
        /* unimplemented  {fistp qword [esp+0xc], fp0} */
        valA6 = 0;
    }

    if (!valA5 || objC2 <= 0)
    {
    label_41c3c1: ;
        objC2 = (*(int32_t*)(uintptr_t)(a1 + 0x1254));
        (*(int32_t*)(uintptr_t)(a1 + 0x129c)) = 0;
        int32_t valA7;

        if (!objC2)
            valA7 = 0;
        else
            valA7 = (*(int32_t*)(uintptr_t)(a1 + 0x54));

        (*(int32_t*)(uintptr_t)(a1 + 0x12a0)) = valA7;
    }
    else
    {
        int32_t* tmpD1 = a1 + 0x54;

        while (i_1 != *tmpD1)
        {
            valA6 += 1;
            tmpD1 = &tmpD1[0x12];

            if (valA6 >= objC2)
                goto label_41c3c1;
        }

        (*(int32_t*)(uintptr_t)(a1 + 0x129c)) = valA6;
        (*(int32_t*)(uintptr_t)(a1 + 0x12a0)) = i_1;
    }

    int32_t flagP = (*(int32_t*)(uintptr_t)(a1 + 0x2c));
    int32_t f0 = (flagP - 4) / (*(int32_t*)(uintptr_t)(a1 + 0x13f0));
    bool tmpD4 = f0 < objC2;
    (*(int32_t*)(uintptr_t)(a1 + 0x12a9)) = tmpD4;
    int32_t dstD5;

    if (!tmpD4)
        dstD5 = 0;
    else
    {
        void* tmpD5 = (*(int32_t*)(uintptr_t)(a1 + 0x13f4));
        int32_t dstD4 = *(tmpD5 + 0x28);
        int32_t v_20_1 = 0;
        Menu_UpdateLanguage_10(tmpD5, (*(int32_t*)(uintptr_t)(a1 + 0x28)) + (*(int32_t*)(uintptr_t)(a1 + 0x20)) - dstD4, (*(int32_t*)(uintptr_t)(a1 + 0x24)), flagP,
            objC2 - f0 + 1);
        dstD5 = dstD4 + 2;
    }

    (*(int32_t*)(uintptr_t)(*(a1 + 0x13f8) + 0x20)) = (*(int32_t*)(uintptr_t)(a1 + 0x20));
    (*(int32_t*)(uintptr_t)(*(a1 + 0x13f8) + 0x24)) = (*(int32_t*)(uintptr_t)(a1 + 0x24));
    (*(int32_t*)(uintptr_t)(*(a1 + 0x13f8) + 0x2c)) = (*(int32_t*)(uintptr_t)(a1 + 0x2c));
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x13f8));
    *(result + 0x28) = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - dstD5;
    (*(int32_t*)(uintptr_t)(a1 + 0x12aa)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x12a4)) = 0xffffffff;
    int32_t* i_2 = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*i_2 && i_2)
    {
        int32_t objC10 = g_afa7e0;

        do
        {
            int32_t* tmpD10 = *i_2;
            void* valA17;

            if (!tmpD10)
                valA17 = nullptr;
            else
            {
                int32_t valA14 = *tmpD10;
                int32_t valA15 = -(valA14);
                valA17 = (valA15 - valA15) & tmpD10;
            }

            *((objC10 << 2) + &g_afa6e0) = valA17;
            g_afa7e0 = objC10 + 1;
            int32_t valA18 = Menu_HandleInput_13();
            int32_t tmpD11 = 0;
            tmpD11 = i_2[7];
            result = *(((valA18 * 0x180 + tmpD11) << 2) + &g_a96ae0);

            if (result)
                result = result(i_2);

            objC10 = g_afa7e0 - 1;
            g_afa7e0 = objC10;
            i_2 = *((objC10 << 2) + &g_afa6e0);
        } while (i_2);
    }

    return result;
}
