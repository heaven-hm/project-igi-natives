// Original IGI.EXE function: EditVariable_Setup (VA 0x004889B0; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_Setup.h"
int32_t* EditVariable_Setup(long double context , void* param_2)

{
    if (Script_FormatString_6(param_2 + 0x38))
    {
        Script_SpawnNewTask_7(param_2 + 0x38, param_2);
        *(param_2 + 0xd8) += context;
    }

    int32_t* result = Script_FormatString_6(param_2 + 0x88);

    if (result)
    {
        Script_SpawnNewTask_7(param_2 + 0x88, param_2);
🚫🚫🚫        int32_t item_8_2 = /* int32_t item_8_2 = (unimplemented  {fistp qword [stack_ptr+0x8], fp0}).d */;
        /* unimplemented  {fistp qword [stack_ptr+0x8], fp0} */
        result = *(param_2 + 0xd8) - item_8_2;
        *(param_2 + 0xd8) = result;
    }

    return result;
}
