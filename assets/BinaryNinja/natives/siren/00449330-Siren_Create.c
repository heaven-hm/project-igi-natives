// IGI native provenance: Siren_Create - 0x00449330 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449330-Siren_Create.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Siren_Create.h"

char* Siren_Create(void* pThis)

{
    (*((FX_TrailUpdate() << 2) + &g_a976e0))(pThis);
    return Script_CallNativeHandler_6(pThis + 0x278);
}
