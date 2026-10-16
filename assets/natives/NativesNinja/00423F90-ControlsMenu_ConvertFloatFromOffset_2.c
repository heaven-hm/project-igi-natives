#include "00423F90-ControlsMenu_ConvertFloatFromOffset_2.h"
/* 0x00423f90 ControlsMenu_ConvertFloatFromOffset_2 full linked: callers=1 callees=3 */
uint32_t ControlsMenu_ConvertFloatFromOffset_2()

{
    sub_4b8920("ControlsMenu_ConvertFloatFromOffset");
    sub_4b8920("ControlsMenu_ConvertOffsetFromFloat");
    uint32_t result = QTask_CloseEvent_2(g_53b874);
    g_53b874 = 0x181;
    return result;
}
