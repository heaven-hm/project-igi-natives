// Original IGI.EXE function: Sector_Cleanup_3 (VA 0x004DDFF0; static CFG gate PASS, CFG score 1.000).
#include "Sector_Cleanup_3.h"
int32_t* Sector_Cleanup_3(void* context)

{
    Render_SkinBones_15(context);
    Sys_OpenFileStream_2(context + 0x130);
    int32_t* result = *(context + 0xe8);

    if (result)
        result = QTask_FindType(result);

    int32_t* source_1 = *(context + 0x148);

    if (!source_1)
        return result;

    return QTask_FindType(source_1);
}
