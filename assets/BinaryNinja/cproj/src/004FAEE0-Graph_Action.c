#include "gi_platform.h"
#include "004FAEE0-Graph_Action.h"
int32_t* Graph_Action(int32_t* a1)

{
    int32_t* dstD = a1;
    void* srcS = dstD[1];
    a1 = (*(int32_t*)(uintptr_t)(srcS + 0x58));
    void* valA1 = (*(int32_t*)(uintptr_t)(srcS + 0x6c));

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        (*(int32_t*)(uintptr_t)(srcS + 0x6c)) = 0;
    }

    Script_ParseEnumString_24(dstD, &a1, 0);
    (*(int32_t*)(uintptr_t)(srcS + 0x6c)) = Mem_Alloc(Script_UndefinedGraphnodeda(srcS) * a1, 4);
    Script_ParseEnumString_23(srcS, a1);
    int32_t* result = a1;
    (*(int32_t*)(uintptr_t)(srcS + 0x58)) = result;
    return result;
}
