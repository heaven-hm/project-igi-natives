#include "gi_platform.h"
#include "005092A0-AIGraph_Cleanup.h"
char* AIGraph_Cleanup(int32_t* a1)

{
    void* srcS = a1[1];
    Physics_SolveConstraints_7(srcS);
    char* result = (*(int32_t*)(uintptr_t)(srcS + 0xb8));

    if (!result)
        return result;

    int32_t srcS1 = (*(int32_t*)(uintptr_t)(srcS + 0x58));
    return Script_ParseEnumString_24(a1, result, (srcS1 * srcS1) << 3);
}
