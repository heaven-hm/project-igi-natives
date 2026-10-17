// Original IGI.EXE function: GuardGenerator_Update (VA 0x00488200; static CFG gate PASS, CFG score 1.000).
#include "GuardGenerator_Update.h"
int32_t GuardGenerator_Update(void* a1)

{
    Script_Isexists(a1 + 0x20, a1);
    return FX_SmokeEmit_10(a1);
}
