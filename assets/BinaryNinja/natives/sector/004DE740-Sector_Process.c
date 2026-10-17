// Original IGI.EXE function: Sector_Process (VA 0x004DE740; static CFG gate PASS, CFG score 1.000).
#include "Sector_Process.h"
int32_t Sector_Process(void* a1)

{
    Render_SkinBones_15(a1);
    Sys_OpenFileStream_2(a1 + 0x130);
    return QTask_FindType(*(a1 + 0xe8));
}
