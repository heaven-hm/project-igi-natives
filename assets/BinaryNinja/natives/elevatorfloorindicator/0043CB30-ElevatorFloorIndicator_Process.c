// IGI native provenance: ElevatorFloorIndicator_Process - 0x0043CB30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043CB30-ElevatorFloorIndicator_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ElevatorFloorIndicator_Process.h"
void* ElevatorFloorIndicator_Process(void* context)

{
    Script_CallNativeHandler_6(context + 0x1a4);
    Script_CallNativeHandler_6(context + 0x1f4);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
