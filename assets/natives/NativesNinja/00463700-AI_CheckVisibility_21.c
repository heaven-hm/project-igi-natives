#include "00463700-AI_CheckVisibility_21.h"
/* 0x00463700 AI_CheckVisibility_21 full linked: callers=3 callees=2 */
int32_t* sub_463700(void* a1, int32_t* a2)

{
    int32_t* eax = *(a1 + 0x7b0);

    if (eax)
    {
        Qtask_UpdateList(eax);
        *(a1 + 0x7b0) = 0;
    }

    int32_t* result = a2;

    if (result)
    {
        result = QTask_LinkEventHandler_2(result);
        *(a1 + 0x7b0) = result;
    }

    return result;
}
