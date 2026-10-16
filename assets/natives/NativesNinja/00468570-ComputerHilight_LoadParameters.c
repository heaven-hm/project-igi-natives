#include "00468570-ComputerHilight_LoadParameters.h"
/* 0x00468570 ComputerHilight_LoadParameters full linked: callers=0 callees=3 */
void* sub_468570(void* a1)

{
    sub_4f1340(a1 + 0x38);
    sub_4c17c0(g_5bdc80, a1);
    void* result = *(a1 + 0x88);

    if (result)
    {
        result = sub_4b0d10(result);
        *(a1 + 0x88) = 0;
    }

    return result;
}
