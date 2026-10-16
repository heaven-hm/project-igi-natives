#include "Script_ParseEnumInt32_17.h"
int32_t* Script_ParseEnumInt32_17(void* a1)

{
    int32_t* result = *(a1 + 0xe8);

    if (result)
    {
        result = QTask_FindType(result);
        *(a1 + 0xe8) = 0;
    }

    return result;
}
