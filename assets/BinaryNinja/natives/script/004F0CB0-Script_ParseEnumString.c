// Original IGI.EXE function: Script_ParseEnumString (VA 0x004F0CB0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString.h"
struct status_msg* Script_ParseEnumString(void* context)

{
    int32_t kind;
    kind = g_54dd0c;
    return QTask_HandleInput(context, kind, 0);
}
