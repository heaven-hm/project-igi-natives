#include "gi_platform.h"
#include "004F2B50-EditRigidObj_Process.h"
void* EditRigidObj_Process(void* a1)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (valA)
        QTask_FindType(valA);

    Render_SetupLighting_14(a1);
    return DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
}
