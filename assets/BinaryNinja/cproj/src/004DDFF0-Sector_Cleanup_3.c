#include "gi_platform.h"
#include "004DDFF0-Sector_Cleanup_3.h"
int32_t* Sector_Cleanup_3(void* a1)

{
    Render_SkinBones_15(a1);
    Sys_OpenFileStream_2(a1 + 0x130);
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (result)
        result = QTask_FindType(result);

    int32_t* srcS1 = (*(int32_t*)(uintptr_t)(a1 + 0x148));

    if (!srcS1)
        return result;

    return QTask_FindType(srcS1);
}
