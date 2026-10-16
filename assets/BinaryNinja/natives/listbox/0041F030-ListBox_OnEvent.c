#include "ListBox_OnEvent.h"
int32_t* ListBox_OnEvent(void* a1)

{
    Menu_UpdateLanguage_9(a1);
    g_57bbd8 = a1;

    if (Script_FormatString_6(a1 + 0xbf8))
        Script_SpawnNewTask_7(a1 + 0xbf8, a1);

    g_57bbd8 = 0;
    int32_t* result = Script_FormatString_6(a1 + 0xc48);

    if (result)
    {
        Script_SpawnNewTask_7(a1 + 0xc48, a1);
        int32_t objC1 = *(a1 + 0xbe0);
🚫🚫🚫        int32_t v_8_1 = /* int32_t v_8_1 = (unimplemented  {fistp qword [esp+0x8], fp0}).d */;
        /* unimplemented  {fistp qword [esp+0x8], fp0} */
        result = nullptr;

        if (objC1 > 0)
        {
            int32_t* tmpD1 = a1 + 0xe0;

            do
            {
                if (v_8_1 == *tmpD1)
                {
                    *(a1 + 0xbe4) = result;
                    *(a1 + 0xbe8) = v_8_1;
                    break;
                }

                result += 1;
                tmpD1 = &tmpD1[0xb];
            } while (result < objC1);
        }
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t objC2 = g_afa7e0;

        do
        {
            int32_t* tmpD2 = *i;
            void* valA4;

            if (!tmpD2)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *tmpD2;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & tmpD2;
            }

            *((objC2 << 2) + &g_afa6e0) = valA4;
            g_afa7e0 = objC2 + 1;
            int32_t valA5 = Menu_HandleInput_13();
            int32_t objC4 = 0;
            objC4 = i[7];
            result = *(((valA5 * 0x180 + objC4) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            objC2 = g_afa7e0 - 1;
            g_afa7e0 = objC2;
            i = *((objC2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
