// Original IGI.EXE function: EditRigidObj_Process (VA 0x004F2B50; static CFG gate PASS, CFG score 1.000).
#include "EditRigidObj_Process.h"
void* EditRigidObj_Process(void* a1)

{
    int32_t* valA = *(a1 + 0xe8);

    if (valA)
        QTask_FindType(valA);

    Render_SetupLighting_14(a1);
    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
