// Original IGI.EXE function: Display_SetDisplayMode_3 (VA 0x00491630; static CFG gate PASS, CFG score 1.000).
#include "Display_SetDisplayMode_3.h"
int32_t* Display_SetDisplayMode_3(int32_t context)

{
    return Display_NoMoreDisplayCallbac(context, &g_bcadec);
}
