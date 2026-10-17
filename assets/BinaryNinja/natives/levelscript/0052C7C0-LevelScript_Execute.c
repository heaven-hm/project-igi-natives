// IGI native provenance: LevelScript_Execute - 0x0052C7C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052C7C0-LevelScript_Execute.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelScript_Execute.h"

void* LevelScript_Execute(void* pThis)

{
    *(pThis + 0x68) = g_a44344;
    void* scratch_val = *(pThis + 0x68);
    *(pThis + 0x6c) = 0;
    *(pThis + 0x70) = 0;
    return DynObj_RegisterSymbol_8(scratch_val, pThis, 0);
}
