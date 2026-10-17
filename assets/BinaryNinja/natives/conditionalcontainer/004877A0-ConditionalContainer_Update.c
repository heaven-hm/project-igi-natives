// Original IGI.EXE function: ConditionalContainer_Update (VA 0x004877A0; static CFG gate PASS, CFG score 1.000).
#include "ConditionalContainer_Update.h"
int32_t ConditionalContainer_Update(void* context)

{
    Script_Isexists(context + 0x20, context);
    Script_Isexists(context + 0x70, context);
    Script_Isexists(context + 0xc0, context);
    return 0;
}
