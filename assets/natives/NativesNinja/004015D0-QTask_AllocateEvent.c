#include "004015D0-QTask_AllocateEvent.h"
/* 0x004015d0 QTask_AllocateEvent full linked: callers=2 callees=1 */
int32_t* QTask_AllocateEvent(int32_t* a1)

{
    int32_t* result = a1;

    if (result[5])
        result = sub_4af960(result);

    return result;
}
