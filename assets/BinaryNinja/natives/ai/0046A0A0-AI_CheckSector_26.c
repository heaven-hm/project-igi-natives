#include "AI_CheckSector_26.h"
int32_t* AI_CheckSector_26(void* a1)

{
    int32_t* result = *(a1 + 0x90);

    if (result)
    {
        result = Qtask_UpdateList(result);
        *(a1 + 0x90) = 0;
    }

    return result;
}
