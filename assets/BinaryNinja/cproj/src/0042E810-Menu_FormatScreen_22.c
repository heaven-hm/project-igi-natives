#include "gi_platform.h"
#include "0042E810-Menu_FormatScreen_22.h"
int32_t* Menu_FormatScreen_22(int80_t a1 , void* a2)

{
    int32_t* result = Script_FormatString_6(a2 + 0x928);

    if (result)
    {
        Script_SpawnNewTask_7(a2 + 0x928, a2);
        int16_t valA = Menu_DrawWidget_17();
        result = QTask_DeleteTask_2((*(int32_t*)(uintptr_t)(a2 + 0xe8)), valA);

        if (result)
            return Menu_HandleInput_17(result, a1);
    }

    return result;
}
