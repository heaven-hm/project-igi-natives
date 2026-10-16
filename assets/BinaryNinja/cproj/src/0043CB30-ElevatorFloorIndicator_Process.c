#include "gi_platform.h"
#include "0043CB30-ElevatorFloorIndicator_Process.h"
void* ElevatorFloorIndicator_Process(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0x1a4);
    Script_CallNativeHandler_6(a1 + 0x1f4);
    return DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
}
