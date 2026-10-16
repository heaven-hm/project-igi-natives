#include "004F4820-Script_ParseEnumInt32_17.h"
/* 0x004f4820 Script_ParseEnumInt32_17 full linked: callers=11 callees=1 */
int32_t* sub_4f4820(void* a1)

{
    int32_t* result = *(a1 + 0xe8);

    if (result)
    {
        result = QTask_FindType(result);
        *(a1 + 0xe8) = 0;
    }

    return result;
}
