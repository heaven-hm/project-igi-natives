// IGI native provenance: Menu_UpdateLanguage_15 - 0x00424E20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424E20-Menu_UpdateLanguage_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_15.h"
struct status_msg* Menu_UpdateLanguage_15(int32_t context)

{
    int32_t kind;
    kind = g_57bc60;
    return QTask_HandleInput(nullptr, kind, context);
}
