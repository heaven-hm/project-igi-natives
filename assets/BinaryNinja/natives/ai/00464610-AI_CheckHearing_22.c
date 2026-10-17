// IGI native provenance: AI_CheckHearing_22 - 0x00464610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00464610-AI_CheckHearing_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_22.h"
struct status_msg* AI_CheckHearing_22(void* context)

{
    int32_t kind = QHash_ValueGet();

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_5bdc40;
        return QTask_HandleInput(context, kind_1, 0);
    }

    QHash_ValueSet();
    kind = g_5bdc40;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    Sys_DispatchOpcode_2();
    return result;
}
