// IGI native provenance: Menu_LeaveMenus_4 - 0x00418FC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418FC0-Menu_LeaveMenus_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_4.h"
void* Menu_LeaveMenus_4(void* context)

{
    *(context + 0x28) = 3;
    return context;
}
