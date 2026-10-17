// Original IGI.EXE function: Script_ParseEnumInt32_17 (VA 0x004F4820; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_17.h"
int32_t* Script_ParseEnumInt32_17(void* context)

{
    int32_t* result = *(context + 0xe8);

    if (result)
    {
        result = QTask_FindType(result);
        *(context + 0xe8) = 0;
    }

    return result;
}
