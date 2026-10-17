// Original IGI.EXE function: Menu_FormatScreen_22 (VA 0x0042E810; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen_22.h"
int32_t* Menu_FormatScreen_22(long double context , void* param_2)

{
    int32_t* result = Script_FormatString_6(param_2 + 0x928);

    if (result)
    {
        Script_SpawnNewTask_7(param_2 + 0x928, param_2);
        int16_t data_val = Menu_DrawWidget_17();
        result = QTask_DeleteTask_2(*(param_2 + 0xe8), data_val);

        if (result)
            return Menu_HandleInput_17(result, context);
    }

    return result;
}
