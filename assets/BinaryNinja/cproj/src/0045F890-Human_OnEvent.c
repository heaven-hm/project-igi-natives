#include "gi_platform.h"
#include "0045F890-Human_OnEvent.h"
float* Human_OnEvent(float a1)

{
    int32_t* valA1 = DynObj_Missing(a1 + 0x100);

    if (valA1)
    {
        Render_VirmodelIsNull(a1, valA1);
        Render_DrawBoneMesh_7(a1 + 0x78, a1 + 0x68);
    }

    WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0xe0, (*(int32_t*)(uintptr_t)(a1 + 0xa0)));
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));
    (*(int32_t*)(uintptr_t)(a1 + 0x50c)) = fpu7;
    (*(int32_t*)(uintptr_t)(a1 + 0x508)) = fpu7;
    return Sys_DispatchOpcode_12(a1 + 0x78, fpu7);
}
