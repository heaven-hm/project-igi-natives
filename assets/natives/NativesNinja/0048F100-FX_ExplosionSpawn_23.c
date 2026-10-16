#include "0048F100-FX_ExplosionSpawn_23.h"
/* 0x0048f100 FX_ExplosionSpawn_23 full linked: callers=2 callees=1 */
BOOL sub_48f100(BOOL a1)

{
    HWND hWnd = g_5c8bc4;
    g_5c8bd4 = a1;

    if (!hWnd)
        return a1;

    return SetWindowTextA(hWnd, a1);
}
