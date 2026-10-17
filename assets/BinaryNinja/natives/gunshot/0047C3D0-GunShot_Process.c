// Original IGI.EXE function: GunShot_Process (VA 0x0047C3D0; static CFG gate PASS, CFG score 1.000).
#include "GunShot_Process.h"
void* GunShot_Process(void* context)

{
    int32_t* data_val = *(context + 0x6c);

    if (data_val)
    {
        Qtask_UpdateList(data_val);
        *(context + 0x6c) = 0;
    }

    int32_t* data_1 = *(context + 0x70);

    if (data_1)
    {
        Qtask_UpdateList(data_1);
        *(context + 0x70) = 0;
    }

    return DynObj_RemoveSymbol_7(Level_StartMission_4(), context, 0);
}
