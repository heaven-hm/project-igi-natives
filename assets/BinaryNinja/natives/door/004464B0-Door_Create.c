// IGI native provenance: Door_Create - 0x004464B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004464B0-Door_Create.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Door_Create.h"

bool* Door_Create(bool* pThis )

{
    *pThis = !pThis[8];
    return pThis;
}
