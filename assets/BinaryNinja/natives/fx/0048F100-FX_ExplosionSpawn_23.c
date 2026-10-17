// Original IGI.EXE function: FX_ExplosionSpawn_23 (VA 0x0048F100; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_23.h"
BOOL FX_ExplosionSpawn_23(BOOL a1)

{
    HWND hWnd = g_5c8bc4;
    g_5c8bd4 = a1;

    if (!hWnd)
        return a1;

    return SetWindowTextA(hWnd, a1);
}
