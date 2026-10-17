// Original IGI.EXE function: EditRigidObj_Process (VA 0x004F2B50; static CFG gate PASS, CFG score 1.000).
#include "EditRigidObj_Process.h"
void* EditRigidObj_Process(void* context)

{
    int32_t* data_val = *(context + 0xe8);

    if (data_val)
        QTask_FindType(data_val);

    Render_SetupLighting_14(context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
