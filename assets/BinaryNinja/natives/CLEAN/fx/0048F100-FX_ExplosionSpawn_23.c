// IGI native provenance: FX_ExplosionSpawn_23 - 0x0048F100 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048F100-FX_ExplosionSpawn_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_ExplosionSpawn_23.h"
BOOL FX_ExplosionSpawn_23(BOOL context)

{
    HWND hWnd = g_5c8bc4;
    g_5c8bd4 = context;

    if (!hWnd)
        return context;

    return SetWindowTextA(hWnd, context);
}
