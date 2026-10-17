// Original IGI.EXE function: SlideBar_Action (VA 0x0041FF30; static CFG gate PASS, CFG score 1.000).
#include "SlideBar_Action.h"
int32_t SlideBar_Action(long double context , int32_t param_2)

{
    if (Script_FormatString_6(param_2 + 0x1f8))
    {
        Script_SpawnNewTask_7(param_2 + 0x1f8, param_2);
        *(param_2 + 0x248) = context;
    }

    int32_t result = Script_FormatString_6(param_2 + 0xb8);

    if (result)
    {
        if (*(param_2 + 0x248))
        {
            Script_SpawnNewTask_7(param_2 + 0xb8, param_2);
🚫🚫🚫            int32_t item_8_2 = /* int32_t item_8_2 =
                (unimplemented  {fistp qword [stack_ptr+0x10], fp0}).d */;
            /* unimplemented  {fistp qword [stack_ptr+0x10], fp0} */
            result = Menu_PlayMusic_10(param_2, item_8_2);
        }
        else
        {
            result = Script_SpawnNewTask_7(param_2 + 0xb8, param_2);
🚫🚫🚫            *(param_2 + 0xa0) =
            /* unimplemented  {fstp qword [source_val+0xa0], fp0} */
        }
    }

    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        int32_t entity_2 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_6;

            if (!temp_1)
                data_6 = nullptr;
            else
            {
                int32_t data_3 = *temp_1;
                int32_t data_4 = -(data_3);
                data_6 = (data_4 - data_4) & temp_1;
            }

            *((entity_2 << 2) + &g_afa6e0) = data_6;
            g_afa7e0 = entity_2 + 1;
            int32_t data_7 = Menu_HandleInput_13();
            int32_t data_8 = 0;
            data_8 = i[7];
            result = *(((data_7 * 0x180 + data_8) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            entity_2 = g_afa7e0 - 1;
            g_afa7e0 = entity_2;
            i = *((entity_2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
