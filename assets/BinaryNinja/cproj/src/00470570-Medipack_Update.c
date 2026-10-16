#include "gi_platform.h"
#include "00470570-Medipack_Update.h"
void* Medipack_Update(int32_t* a1 )

{
    void* valA1 = (*(int32_t*)(uintptr_t)(a1[1] + 0x6e4));

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        (*(int32_t*)(uintptr_t)(a1[1] + 0x6e4)) = 0;
    }

    int32_t* valA2 = Script_FormatString_31(*a1, "Factor of human max damage to add for each round");

    if (!valA2)
        valA2 = Script_CallNativeHandler_31(*a1, "Factor of human max damage to add for each round", 0x3c23d70a);

    int32_t* objC2 = valA2[0x49];
    (*(int32_t*)(uintptr_t)(a1[1] + 0x6e4)) = Mem_Alloc(4, 4);
    void* result = a1[1];
    **(result + 0x6e4) = objC2;
    return result;
}
