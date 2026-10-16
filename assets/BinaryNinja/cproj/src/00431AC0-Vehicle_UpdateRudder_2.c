#include "gi_platform.h"
#include "00431AC0-Vehicle_UpdateRudder_2.h"
int32_t* Vehicle_UpdateRudder_2(void* a1)

{
    int16_t valA2 = Menu_FormatScreen_18();
    return QTask_DeleteTask_2((*(int32_t*)(uintptr_t)(a1 + 0xe8)), valA2);
}
