// IGI native provenance: Menu_LeaveMenus_11 - 0x00421730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00421730-Menu_LeaveMenus_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_11.h"
struct status_msg* Menu_LeaveMenus_11(int32_t context)

{
    int32_t kind;
    kind = g_53b7f0;
    return QTask_HandleInput(context, kind, context);
}
