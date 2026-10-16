#include "00433760-Vehicle_UpdateCockpit_3.h"
/* 0x00433760 Vehicle_UpdateCockpit_3 full linked: callers=2 callees=2 */
int32_t* Vehicle_UpdateCockpit_3(void* a1)

{
    int32_t* result = *(a1 + 0x834);

    if (!result)
        return result;

    void* eax = *result;

    if (eax)
        sub_4e6c00(eax);

    return Qtask_UpdateList(*(a1 + 0x834));
}
