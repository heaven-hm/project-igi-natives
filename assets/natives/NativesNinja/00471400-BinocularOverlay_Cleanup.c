#include "00471400-BinocularOverlay_Cleanup.h"
/* 0x00471400 BinocularOverlay_Cleanup full linked: callers=0 callees=3 */
int32_t* sub_471400(void* a1)

{
    sub_4f1340(a1 + 0x24);
    int32_t* result = *(a1 + 0x20);

    if (result)
    {
        result = *result;

        if (result)
        {
            QTask_FindType(result);
            result = Qtask_UpdateList(*(a1 + 0x20));
            *(a1 + 0x20) = 0;
        }
    }

    return result;
}
