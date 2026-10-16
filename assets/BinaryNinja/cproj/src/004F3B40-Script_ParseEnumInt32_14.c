#include "gi_platform.h"
#include "004F3B40-Script_ParseEnumInt32_14.h"
char Script_ParseEnumInt32_14(int80_t a1 , int32_t a2)

{
    if (Script_FormatString_6(a2 + 0x200f8))
    {
        Script_SpawnNewTask_7(a2 + 0x200f8, a2);
        (*(int32_t*)(uintptr_t)(a2 + 0x200f4)) = a1;
    }

    char result = (*(int32_t*)(uintptr_t)(a2 + 0x200f4));

    if (!result)
        return result;

    return Script_FormatString_14(a2, (*(int32_t*)(uintptr_t)(a2 + 0x20154)) + 1);
}
