#include "0046A0A0-AI_CheckSector_26.h"
/* 0x0046a0a0 AI_CheckSector_26 full linked: callers=7 callees=1 */
int32_t* sub_46a0a0(void* a1)

{
    int32_t* result = *(a1 + 0x90);

    if (result)
    {
        result = Qtask_UpdateList(result);
        *(a1 + 0x90) = 0;
    }

    return result;
}
