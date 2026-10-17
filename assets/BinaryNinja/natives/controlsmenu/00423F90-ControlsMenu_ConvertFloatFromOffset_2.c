// Original IGI.EXE function: ControlsMenu_ConvertFloatFromOffset_2 (VA 0x00423F90; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_ConvertFloatFromOffset_2.h"
uint32_t ControlsMenu_ConvertFloatFromOffset_2()

{
    Sys_CloseFileStream_23("ControlsMenu_ConvertFloatFromOffset");
    Sys_CloseFileStream_23("ControlsMenu_ConvertOffsetFromFloat");
    uint32_t result = QTask_CloseEvent_2(g_53b874);
    g_53b874 = 0x181;
    return result;
}
