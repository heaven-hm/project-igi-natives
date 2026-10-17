// IGI native provenance: Generator_ResetTimer - 0x0043B690 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043B690-Generator_ResetTimer.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Generator_ResetTimer.h"

int32_t Generator_ResetTimer(void* pThis, int32_t param)

{
    (*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0))(pThis, param);
    Script_Isexists(pThis + 0x240, pThis);
    return 0;
}
