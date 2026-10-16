#include "LevelScript_Execute.h"

void* LevelScript_Execute(void* pThis)

{
    *(pThis + 0x68) = g_a44344;
    void* edx = *(pThis + 0x68);
    *(pThis + 0x6c) = 0;
    *(pThis + 0x70) = 0;
    return DynObj_RegisterSymbol_8(edx, pThis, 0);
}
