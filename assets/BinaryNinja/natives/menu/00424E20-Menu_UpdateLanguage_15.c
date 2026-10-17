// Original IGI.EXE function: Menu_UpdateLanguage_15 (VA 0x00424E20; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_15.h"
struct status_msg* Menu_UpdateLanguage_15(int32_t a1)

{
    int32_t kind;
    kind = g_57bc60;
    return QTask_HandleInput(nullptr, kind, a1);
}
