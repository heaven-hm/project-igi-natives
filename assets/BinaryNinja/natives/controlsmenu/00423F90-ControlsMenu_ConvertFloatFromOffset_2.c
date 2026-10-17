// IGI native provenance: ControlsMenu_ConvertFloatFromOffset_2 - 0x00423F90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00423F90-ControlsMenu_ConvertFloatFromOffset_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ControlsMenu_ConvertFloatFromOffset_2.h"
uint32_t ControlsMenu_ConvertFloatFromOffset_2()

{
    Sys_CloseFileStream_23("ControlsMenu_ConvertFloatFromOffset");
    Sys_CloseFileStream_23("ControlsMenu_ConvertOffsetFromFloat");
    uint32_t result = QTask_CloseEvent_2(g_53b874);
    g_53b874 = 0x181;
    return result;
}
