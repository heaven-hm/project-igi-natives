// Original IGI.EXE function: FX_SmokeEmit_7 (VA 0x00486620; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_7.h"
struct status_msg* FX_SmokeEmit_7(void* context)

{
    int32_t kind = Qhash_Init(1);
    kind = g_540b08;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    Qhash_Reset();
    return result;
}
