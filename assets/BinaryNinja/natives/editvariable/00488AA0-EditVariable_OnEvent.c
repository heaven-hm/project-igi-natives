// Original IGI.EXE function: EditVariable_OnEvent (VA 0x00488AA0; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_OnEvent.h"
int32_t EditVariable_OnEvent(void* a1)

{
    Script_Isexists(a1 + 0x38, a1);
    Script_Isexists(a1 + 0x88, a1);
    return 0;
}
