#include "gi_platform.h"
#include "004F4820-Script_ParseEnumInt32_17.h"
int32_t* Script_ParseEnumInt32_17(void* a1)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (result)
    {
        result = QTask_FindType(result);
        (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = 0;
    }

    return result;
}
