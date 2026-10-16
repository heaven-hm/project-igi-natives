#include "SubLevel_LoadParameters.h"
int32_t* SubLevel_LoadParameters(void* a1)

{
    int32_t* result = QTask_CleanupTypes(a1);
    result = *(a1 + 0x20);

    if (result)
    {
        result = QFile_ReadWrite(a1 + 0x20, "r");

        if (result)
        {
            Sys_ReadFileBlock_4(result);
            result = Qvm_Load(a1 + 0x20);

            if (result)
            {
                Script_SetSymbolContext("Task_New", a1);
                Qvm_Execute(result);
                return Qvm_Cleanup(result);
            }
        }
    }

    return result;
}
