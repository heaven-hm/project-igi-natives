#include "gi_platform.h"
#include "00476FA0-Grenade_OnEvent.h"
struct status_msg* Grenade_OnEvent(int32_t* a1 )

{
    int32_t* srcS = a1;
    int32_t dstD = 0;
    int32_t* tmpD = nullptr;
    void* objC = (*(int32_t*)(uintptr_t)(*srcS + 0x14));
    dstD = *(objC + 0x1c);
    int32_t valA6 = (*(int32_t*)(uintptr_t)(((*g_5be3b8 * 0x180 + dstD) << 2) + &g_a96ae0));

    if (valA6)
    {
        valA6(objC, &a1);
        tmpD = a1;
    }

    return Throwable_Create(Script_FormatString(), srcS[1], srcS[2], srcS[3], srcS[4], srcS[8], tmpD);
}
