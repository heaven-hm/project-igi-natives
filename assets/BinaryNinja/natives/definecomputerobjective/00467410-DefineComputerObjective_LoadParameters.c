// Original IGI.EXE function: DefineComputerObjective_LoadParameters (VA 0x00467410; static CFG gate PASS, CFG score 1.000).
#include "DefineComputerObjective_LoadParameters.h"
char DefineComputerObjective_LoadParameters(long double context , void* param_2)

{
    char data_val = Script_FormatString_6(param_2 + 0x20);
    char result;
    int16_t idx;

    if (data_val)
    {
        Script_SpawnNewTask_7(param_2 + 0x20, param_2);
        idx = 1;
        result = context;
    }

    if (!data_val || result)
    {
        g_5bdc78 = param_2;
        int32_t* source_1 = param_2 + 0x134;
        int32_t i_1 = 6;
        int32_t i;

        do
        {
            if (!Script_FormatString_6(&source_1[-0x28]))
                *source_1 = 0;
            else
            {
                Script_SpawnNewTask_7(&source_1[-0x28], param_2);
🚫🚫🚫                char item_8_2 = /* char item_8_2 =
                    (unimplemented  {fistp qword [stack_ptr+0x18], fp0}).b */;
                /* unimplemented  {fistp qword [stack_ptr+0x18], fp0} */
                idx += 1;
                *source_1 = item_8_2;
            }

            result = Script_FormatString_6(&source_1[-0x14]);

            if (!result)
                source_1[1] = 0;
            else
            {
                result = Script_SpawnNewTask_7(&source_1[-0x14], param_2);
🚫🚫🚫                char item_8_3 = /* char item_8_3 =
                    (unimplemented  {fistp qword [stack_ptr+0x18], fp0}).b */;
                /* unimplemented  {fistp qword [stack_ptr+0x18], fp0} */
                idx += 1;
                source_1[1] = item_8_3;
            }

            source_1 = &source_1[0x33];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
