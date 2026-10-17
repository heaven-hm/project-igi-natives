// Original IGI.EXE function: GuardGenerator_Update (VA 0x00488200; static CFG gate PASS, CFG score 1.000).
#include "GuardGenerator_Update.h"
int32_t GuardGenerator_Update(void* context)

{
    Script_Isexists(context + 0x20, context);
    return FX_SmokeEmit_10(context);
}
