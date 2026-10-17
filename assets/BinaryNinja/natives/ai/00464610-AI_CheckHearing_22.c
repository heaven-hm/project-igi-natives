// Original IGI.EXE function: AI_CheckHearing_22 (VA 0x00464610; static CFG gate PASS, CFG score 1.000).
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
