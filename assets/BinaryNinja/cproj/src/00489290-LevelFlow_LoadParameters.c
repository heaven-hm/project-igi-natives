#include "gi_platform.h"
#include "00489290-LevelFlow_LoadParameters.h"
int32_t LevelFlow_LoadParameters(int80_t a1 , void* a2)

{
    char result = Script_ParseEnumReal32_5();

    if (result)
    {
        int32_t* i = (*(int32_t*)(uintptr_t)(a2 + 8));
        (*(int32_t*)(uintptr_t)(a2 + 0x11c)) = (*(int32_t*)(uintptr_t)(a2 + 0x61));

        if (*i && i)
        {
            int32_t tmpD1 = g_afa7e0;

            do
            {
                int32_t* srcS1 = *i;
                void* valA4;

                if (!srcS1)
                    valA4 = nullptr;
                else
                {
                    int32_t valA1 = *srcS1;
                    int32_t valA2 = -(valA1);
                    valA4 = (valA2 - valA2) & srcS1;
                }

                *((tmpD1 << 2) + &g_afa6e0) = valA4;
                int32_t tmpD2 = tmpD1 + 1;
                int32_t valA5 = 0;
                g_afa7e0 = tmpD2;
                valA5 = i[7];
                int32_t valA6 = *((valA5 << 2) + &g_a970e0);

                if (valA6)
                {
                    valA6(i);
                    tmpD2 = g_afa7e0;
                }

                i = *((tmpD2 << 2) + &g_afa6dc);
                tmpD1 = tmpD2 - 1;
                g_afa7e0 = tmpD1;
            } while (i);
        }

        if (Script_FormatString_6(a2 + 0x7c))
        {
            Script_SpawnNewTask_7(a2 + 0x7c, a2);
            (*(int32_t*)(uintptr_t)(a2 + 0x60)) = a1;
        }

        if (Script_FormatString_6(a2 + 0xcc))
        {
            Script_SpawnNewTask_7(a2 + 0xcc, a2);
🚫🚫🚫            char v_8_2 = /* char v_8_2 = (unimplemented  {fistp qword [esp+0x10], fp0}).b */;
            /* unimplemented  {fistp qword [esp+0x10], fp0} */
            (*(int32_t*)(uintptr_t)(a2 + 0x61)) = v_8_2;
        }

        if ((*(int32_t*)(uintptr_t)(a2 + 0x61)))
            (*(int32_t*)(uintptr_t)(a2 + 0x60)) = 0;

        (*(int32_t*)(uintptr_t)(a2 + 0x68)) += 1;
        char tmpD7 = g_c28c65;
        char objC4 = g_c28c64 & 0x80;
        g_5c8aa8 = g_c28c6d & 0x80;
        result = g_c28c66 & 0x80;
        g_5c8aa9 = objC4;
        objC4 = g_c28c67;
        g_5c8aaa = tmpD7 & 0x80;
        tmpD7 = g_c28c68;
        g_5c8aab = result;
        result = g_c28c69 & 0x80;
        g_5c8aac = objC4 & 0x80;
        objC4 = g_c28c6a;
        g_5c8aad = tmpD7 & 0x80;
        tmpD7 = g_c28c6b;
        g_5c8aae = result;
        result = g_c28c6c & 0x80;
        g_5c8aaf = objC4 & 0x80;
        g_5c8ab0 = tmpD7 & 0x80;
        g_5c8ab1 = result;
    }

    return result;
}
