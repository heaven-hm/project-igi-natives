#include "Wheel_Process.h"
void* Wheel_Process(void* a1)

{
    void* srcS = *(a1 + 0x130);
    int16_t valA = Menu_LeaveMenus_23();

    if (*(srcS + 0x1c) == valA)
    {
        *(srcS + 0x750) -= 1;
        *(srcS + *(a1 + 0x148) * 0x1c + 0x75c) = 0;
    }

    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
