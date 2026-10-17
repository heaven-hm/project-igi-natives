// Original IGI.EXE function: AI_CheckSector_28 (VA 0x0046C020; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_28.h"
struct status_msg* AI_CheckSector_28(void* context)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5be2c4;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    Qhash_Reset();
    return result;
}
