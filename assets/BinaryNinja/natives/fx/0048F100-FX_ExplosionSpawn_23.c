// Original IGI.EXE function: FX_ExplosionSpawn_23 (VA 0x0048F100; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_23.h"
BOOL FX_ExplosionSpawn_23(BOOL context)

{
    HWND hWnd = g_5c8bc4;
    g_5c8bd4 = context;

    if (!hWnd)
        return context;

    return SetWindowTextA(hWnd, context);
}
