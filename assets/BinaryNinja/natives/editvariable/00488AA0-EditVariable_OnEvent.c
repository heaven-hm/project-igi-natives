// Original IGI.EXE function: EditVariable_OnEvent (VA 0x00488AA0; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_OnEvent.h"
int32_t EditVariable_OnEvent(void* context)

{
    Script_Isexists(context + 0x38, context);
    Script_Isexists(context + 0x88, context);
    return 0;
}
