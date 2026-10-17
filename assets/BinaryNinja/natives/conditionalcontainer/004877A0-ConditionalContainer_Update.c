// Original IGI.EXE function: ConditionalContainer_Update (VA 0x004877A0; static CFG gate PASS, CFG score 1.000).
#include "ConditionalContainer_Update.h"
int32_t ConditionalContainer_Update(void* a1)

{
    Script_Isexists(a1 + 0x20, a1);
    Script_Isexists(a1 + 0x70, a1);
    Script_Isexists(a1 + 0xc0, a1);
    return 0;
}
