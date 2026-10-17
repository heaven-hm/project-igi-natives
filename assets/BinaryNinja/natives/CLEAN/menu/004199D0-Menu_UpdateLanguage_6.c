// IGI native provenance: Menu_UpdateLanguage_6 - 0x004199D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004199D0-Menu_UpdateLanguage_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_6.h"
struct status_msg* Menu_UpdateLanguage_6(void* context)

{
    int32_t kind;
    kind = g_539af0;
    return QTask_HandleInput(context, kind, 0);
}
