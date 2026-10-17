// Original IGI.EXE function: Vehicle_UpdateCockpit (VA 0x00430940; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_UpdateCockpit.h"
uint32_t Vehicle_UpdateCockpit()

{
    int32_t data_val;
    data_val = g_57bd30;
    return QTask_CloseEvent_2(data_val);
}
