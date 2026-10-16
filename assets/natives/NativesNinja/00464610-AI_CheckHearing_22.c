#include "00464610-AI_CheckHearing_22.h"
/* 0x00464610 AI_CheckHearing_22 full linked: callers=1 callees=5 */
struct status_msg* sub_464610(void* a1)

{
    int32_t kind = QHash_ValueGet();

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_5bdc40;
        return QTask_HandleInput(a1, kind_1, 0);
    }

    QHash_ValueSet();
    kind = g_5bdc40;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    sub_4b0d50();
    return result;
}
