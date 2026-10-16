#include "gi_platform.h"
#include "00430170-Wheel_Process.h"
void* Wheel_Process(void* a1)

{
    void* srcS = (*(int32_t*)(uintptr_t)(a1 + 0x130));
    int16_t valA = Menu_LeaveMenus_23();

    if ((*(int32_t*)(uintptr_t)(srcS + 0x1c)) == valA)
    {
        (*(int32_t*)(uintptr_t)(srcS + 0x750)) -= 1;
        (*(int32_t*)(uintptr_t)(srcS + *(a1 + 0x148) * 0x1c + 0x75c)) = 0;
    }

    return DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
}
