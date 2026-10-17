// IGI native provenance: Menu_LeaveMenus_3 - 0x00418AC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418AC0-Menu_LeaveMenus_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_3.h"
uint32_t Menu_LeaveMenus_3()

{
    DynObj_CreateMagicObject_4(g_57bae0);
    uint32_t result = QTask_CloseEvent_2(g_539824);
    g_539824 = 0x181;
    return result;
}
