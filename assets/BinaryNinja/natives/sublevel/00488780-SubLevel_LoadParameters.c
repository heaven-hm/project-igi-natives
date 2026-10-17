// Original IGI.EXE function: SubLevel_LoadParameters (VA 0x00488780; static CFG gate PASS, CFG score 1.000).
#include "SubLevel_LoadParameters.h"
int32_t* SubLevel_LoadParameters(void* context)

{
    int32_t* result = QTask_CleanupTypes(context);
    result = *(context + 0x20);

    if (result)
    {
        result = QFile_ReadWrite(context + 0x20, "r");

        if (result)
        {
            Sys_ReadFileBlock_4(result);
            result = Qvm_Load(context + 0x20);

            if (result)
            {
                Script_SetSymbolContext("Task_New", context);
                Qvm_Execute(result);
                return Qvm_Cleanup(result);
            }
        }
    }

    return result;
}
