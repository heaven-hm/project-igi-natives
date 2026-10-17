// Original IGI.EXE function: Menu_UpdateLanguage_6 (VA 0x004199D0; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_6.h"
struct status_msg* Menu_UpdateLanguage_6(void* a1)

{
    int32_t kind;
    kind = g_539af0;
    return QTask_HandleInput(a1, kind, 0);
}
