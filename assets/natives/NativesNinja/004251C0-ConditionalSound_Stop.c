#include "004251C0-ConditionalSound_Stop.h"
/* 0x004251c0 ConditionalSound_Stop full linked: callers=4 callees=2 */
int32_t* ConditionalSound_Stop(void* a1)

{
    int32_t* result = *(a1 + 0x120);

    if (result)
    {
        int32_t* eax = *result;

        if (eax)
            QTask_FindType(eax);

        result = Qtask_UpdateList(*(a1 + 0x120));
        *(a1 + 0x120) = 0;
        *(a1 + 0xb2) = 0;
    }

    return result;
}
