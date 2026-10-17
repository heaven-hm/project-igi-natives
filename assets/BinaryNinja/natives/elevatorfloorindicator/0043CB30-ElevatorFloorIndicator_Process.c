// Original IGI.EXE function: ElevatorFloorIndicator_Process (VA 0x0043CB30; static CFG gate PASS, CFG score 1.000).
#include "ElevatorFloorIndicator_Process.h"
void* ElevatorFloorIndicator_Process(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0x1a4);
    Script_CallNativeHandler_6(a1 + 0x1f4);
    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
