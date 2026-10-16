#include "MagicObj_Shutdown.h"
uint32_t MagicObj_Shutdown()

// Sig: void MagicObj_Shutdown(void)
// Note: Shuts down MagicObj: releases the registered type ID and both event
// slots allocated by MagicObj_Initialize, then restores their sentinel values.
// Called by the matching subsystem teardown at 0x005315B0. Ghidra/r2: exact
// boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.
{
    QTask_CloseEvent_2(g_548648);
    char objC = g_54864a;
    g_548648 = 0x181;
    QTask_InitContext(objC);
    char tmpD = g_54864b;
    g_54864a = 0xff;
    uint32_t result = QTask_InitContext(tmpD);
    g_54864b = 0xff;
    return result;
}
