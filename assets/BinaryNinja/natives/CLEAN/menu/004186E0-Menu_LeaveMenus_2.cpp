// IGI native provenance: Menu_LeaveMenus_2 - 0x004186E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004186E0-Menu_LeaveMenus_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_2.h"
void* Menu_LeaveMenus_2(void* context, int32_t param_2)

{
    void* entity_val = *(context + 0x38);

    if (entity_val)
        *(entity_val + 0x4d) = 0;

    *(context + 0xc0) = param_2;
    void* entity_2 = *(context + (param_2 << 2) + 0x3c);
    *(context + 0x38) = entity_2;

    if (entity_2)
        *(entity_2 + 0x4d) = 1;

    return context;
}
