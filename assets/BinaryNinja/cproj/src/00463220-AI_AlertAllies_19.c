#include "gi_platform.h"
#include "00463220-AI_AlertAllies_19.h"
int32_t AI_AlertAllies_19(void* a1, float a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x50c)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x508)) = a2;
    Sys_DispatchOpcode_12(a1 + 0x78, a2);
    return Render_DrawBoneMesh_7(a1 + 0x78, a1 + 0x68);
}
