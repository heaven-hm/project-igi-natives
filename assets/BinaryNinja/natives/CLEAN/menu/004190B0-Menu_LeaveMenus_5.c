// IGI native provenance: Menu_LeaveMenus_5 - 0x004190B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004190B0-Menu_LeaveMenus_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_5.h"
void* Menu_LeaveMenus_5(void* context)

{
    *(context + 0x26c2) = 0;
    return context;
}
