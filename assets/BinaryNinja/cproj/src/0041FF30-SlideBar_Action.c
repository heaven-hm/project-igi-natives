#include "gi_platform.h"
#include "0041FF30-SlideBar_Action.h"
int32_t SlideBar_Action(int80_t a1 , int32_t a2)

{
    if (Script_FormatString_6(a2 + 0x1f8))
    {
        Script_SpawnNewTask_7(a2 + 0x1f8, a2);
        (*(int32_t*)(uintptr_t)(a2 + 0x248)) = a1;
    }

    int32_t result = Script_FormatString_6(a2 + 0xb8);

    if (result)
    {
        if ((*(int32_t*)(uintptr_t)(a2 + 0x248)))
        {
            Script_SpawnNewTask_7(a2 + 0xb8, a2);
🚫🚫🚫            int32_t v_8_2 = /* int32_t v_8_2 =
                (unimplemented  {fistp qword [esp+0x10], fp0}).d */;
            /* unimplemented  {fistp qword [esp+0x10], fp0} */
            result = Menu_PlayMusic_10(a2, v_8_2);
        }
        else
        {
            result = Script_SpawnNewTask_7(a2 + 0xb8, a2);
🚫🚫🚫            (*(int32_t*)(uintptr_t)(a2 + 0xa0)) =
            /* unimplemented  {fstp qword [srcS+0xa0], fp0} */
        }
    }

    int32_t* i = (*(int32_t*)(uintptr_t)(a2 + 8));

    if (*i && i)
    {
        int32_t objC2 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA6;

            if (!tmpD1)
                valA6 = nullptr;
            else
            {
                int32_t valA3 = *tmpD1;
                int32_t valA4 = -(valA3);
                valA6 = (valA4 - valA4) & tmpD1;
            }

            *((objC2 << 2) + &g_afa6e0) = valA6;
            g_afa7e0 = objC2 + 1;
            int32_t valA7 = Menu_HandleInput_13();
            int32_t valA8 = 0;
            valA8 = i[7];
            result = *(((valA7 * 0x180 + valA8) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            objC2 = g_afa7e0 - 1;
            g_afa7e0 = objC2;
            i = *((objC2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
