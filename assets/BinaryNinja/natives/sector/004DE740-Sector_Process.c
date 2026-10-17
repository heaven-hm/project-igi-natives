// Original IGI.EXE function: Sector_Process (VA 0x004DE740; static CFG gate PASS, CFG score 1.000).
#include "Sector_Process.h"
int32_t Sector_Process(void* context)

{
    Render_SkinBones_15(context);
    Sys_OpenFileStream_2(context + 0x130);
    return QTask_FindType(*(context + 0xe8));
}
