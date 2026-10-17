// Original IGI.EXE function: Wheel_Process (VA 0x00430170; static CFG gate PASS, CFG score 1.000).
#include "Wheel_Process.h"
void* Wheel_Process(void* context)

{
    void* source_val = *(context + 0x130);
    int16_t data_val = Menu_LeaveMenus_23();

    if (*(source_val + 0x1c) == data_val)
    {
        *(source_val + 0x750) -= 1;
        *(source_val + *(context + 0x148) * 0x1c + 0x75c) = 0;
    }

    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
