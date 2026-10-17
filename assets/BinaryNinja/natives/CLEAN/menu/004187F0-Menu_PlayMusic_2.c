// IGI native provenance: Menu_PlayMusic_2 - 0x004187F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004187F0-Menu_PlayMusic_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_2.h"
void* Menu_PlayMusic_2(void* context, void* param_2)

{
    int32_t data_val = *(context + 0x30);
    *(context + 0xc0) = 0;
    *(context + 0x3c) = 0;
    *(context + 0xbc) = 0;
    *(context + 0x26c2) = 1;

    if (data_val)
        Menu_DrawWidget_2(context, param_2);

    return Menu_LeaveMenus_2(context, 0);
}
