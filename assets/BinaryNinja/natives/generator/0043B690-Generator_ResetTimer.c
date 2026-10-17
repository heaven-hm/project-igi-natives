// Original IGI.EXE function: Generator_ResetTimer (VA 0x0043B690; static CFG gate PASS, CFG score 1.000).
#include "Generator_ResetTimer.h"

int32_t Generator_ResetTimer(void* pThis, int32_t param)

{
    (*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0))(pThis, param);
    Script_Isexists(pThis + 0x240, pThis);
    return 0;
}
