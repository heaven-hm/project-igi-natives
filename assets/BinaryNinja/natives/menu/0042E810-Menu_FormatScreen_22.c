// IGI native provenance: Menu_FormatScreen_22 - 0x0042E810 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042E810-Menu_FormatScreen_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
