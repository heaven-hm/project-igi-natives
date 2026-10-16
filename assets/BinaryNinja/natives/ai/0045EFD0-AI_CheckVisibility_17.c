#include "AI_CheckVisibility_17.h"
int32_t* AI_CheckVisibility_17(void* a1)

{
    int32_t* valA = *(a1 + 0x768);

    if (valA)
        Qtask_UpdateList(valA);

    int32_t* valA1 = *(a1 + 0x7b0);

    if (valA1)
        Qtask_UpdateList(valA1);

    int32_t* valA2 = *(a1 + 0x7b4);

    if (valA2)
        Qtask_UpdateList(valA2);

    int32_t* valA3 = *(a1 + 0x838);

    if (valA3)
        Qtask_UpdateList(valA3);

    int32_t* result = *(a1 + 0x83c);

    if (result)
        result = Qtask_UpdateList(result);

    int32_t* srcS1 = *(a1 + 0x840);

    if (!srcS1)
        return result;

    return Qtask_UpdateList(srcS1);
}
