// IGI native provenance: Menu_RequestScreen_18 - 0x00427280 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00427280-Menu_RequestScreen_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_18.h"
uint32_t Menu_RequestScreen_18()

{
    int32_t data_val;
    data_val = g_57bc7c;
    return QTask_CloseEvent_2(data_val);
}
