// Original IGI.EXE function: FadeOutEnd_Process (VA 0x004E9460; static CFG gate PASS, CFG score 1.000).
#include "FadeOutEnd_Process.h"
struct status_msg* FadeOutEnd_Process(void* a1)

{
    int32_t kind;
    kind = g_a5ec78;
    return QTask_HandleInput(a1, kind, 0);
}
