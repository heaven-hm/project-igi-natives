#include "00430170-Wheel_Process.h"
/* 0x00430170 Wheel_Process full linked: callers=0 callees=2 */
void* Wheel_Process(void* a1)

{
    void* esi = *(a1 + 0x130);
    int16_t eax = Menu_LeaveMenus_23();

    if (*(esi + 0x1c) == eax)
    {
        *(esi + 0x750) -= 1;
        *(esi + *(a1 + 0x148) * 0x1c + 0x75c) = 0;
    }

    return sub_4c7560(*(a1 + 0x68), a1);
}
