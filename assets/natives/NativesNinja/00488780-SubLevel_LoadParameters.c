#include "00488780-SubLevel_LoadParameters.h"
/* 0x00488780 SubLevel_LoadParameters full linked: callers=0 callees=7 */
int32_t* sub_488780(void* a1)

{
    int32_t* result = QTask_CleanupTypes(a1);
    result = *(a1 + 0x20);

    if (result)
    {
        result = QFile_ReadWrite(a1 + 0x20, "r");

        if (result)
        {
            sub_4b1690(result);
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
