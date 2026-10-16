#include "gi_platform.h"
#include "00509480-AIGraph_Action.h"
int32_t AIGraph_Action(void* a1 )

{
    void* srcS = a1;
    Script_FormatString_26((*(int32_t*)(uintptr_t)(srcS + 4)), &a1);
    int32_t dstD = 0;
    char v_4;

    if (a1 > 0)
    {
        do
        {
            Script_FormatString_26((*(int32_t*)(uintptr_t)(srcS + 4)), &v_4);
            Script_FormatString_26((*(int32_t*)(uintptr_t)(srcS + 4)), &v_4);
            dstD += 1;
        } while (dstD < a1);
    }

    int32_t result_1;
    Script_FormatString_26((*(int32_t*)(uintptr_t)(srcS + 4)), &result_1);
    int32_t result = result_1;
    int32_t dstD1 = 0;

    if (result > 0)
    {
        do
        {
            Script_FormatString_26((*(int32_t*)(uintptr_t)(srcS + 4)), &v_4);
            Script_FormatString_26((*(int32_t*)(uintptr_t)(srcS + 4)), &v_4);
            result = result_1;
            dstD1 += 1;
        } while (dstD1 < result);
    }

    return result;
}
