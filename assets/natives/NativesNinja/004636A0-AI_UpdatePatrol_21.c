#include "004636A0-AI_UpdatePatrol_21.h"
/* 0x004636a0 AI_UpdatePatrol_21 full linked: callers=13 callees=2 */
int32_t* sub_4636a0(void* a1, int32_t* a2)

{
    int32_t* eax = *(a1 + 0x7b4);

    if (eax)
    {
        Qtask_UpdateList(eax);
        *(a1 + 0x7b4) = 0;
    }

    int32_t* result = a2;

    if (result)
    {
        result = QTask_LinkEventHandler_2(result);
        *(a1 + 0x7b4) = result;
    }

    return result;
}
