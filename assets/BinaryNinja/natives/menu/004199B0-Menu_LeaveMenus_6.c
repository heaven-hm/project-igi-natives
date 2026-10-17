// IGI native provenance: Menu_LeaveMenus_6 - 0x004199B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004199B0-Menu_LeaveMenus_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_6.h"
uint32_t Menu_LeaveMenus_6()

{
    uint32_t result = QTask_CloseEvent_2(g_539af0);
    g_539af0 = 0x181;
    return result;
}
