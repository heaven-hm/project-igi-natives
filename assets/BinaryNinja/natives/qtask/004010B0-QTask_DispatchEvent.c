// IGI native provenance: QTask_DispatchEvent - 0x004010B0 - CFG score 41.5% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004010B0-QTask_DispatchEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_DispatchEvent.h"
int32_t QTask_DispatchEvent()

{
    if (QTask_DispatchEvent_2())
        QTask_FindType(Game_GetContext());

    /* tailcall */
    return Flow_DeleteHandler();
}
