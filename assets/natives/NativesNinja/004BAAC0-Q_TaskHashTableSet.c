#include "004BAAC0-Q_TaskHashTableSet.h"
/* 0x004baac0 Q_TaskHashTableSet full linked: callers=11 callees=5 */
void* Q_TaskHashTableSet(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)

// Sig: void Q_TaskHashTableSet(int** table, void* handler, int nameVal, int p4,
// int p5, int p6, int p7)
// Note: THE CORE REGISTRAR: inserts an entry into the task/hash table binding a
// name-value pair to a handler callback. All 7 stack args confirmed by
// disassembly header (arg_18h..arg_3Ch). Every SymbolRegister* thunk (e.g.
// 0x4B7EE0 pushes 1,1,0,1,addr,handler,table -> this) and every
// GAME_DEFINE_OPTIONS registration routes here. Params: table = target hash
// table, handler = callback invoked for the symbol, nameVal = name/value ref,
// p4-p7 = type/flag slots (see SymbolRegister thunks for known values).
{
    Qhash_Init(1);
    int32_t* eax = Mem_Alloc(0x1c, 4);
    __builtin_memset(eax, 0, 0x1c);
    eax[5] = Symbol_CheckRegister(g_a43e88, a1, eax);
    eax[4] = a2;
    eax[6] = a3;
    eax[3] = a4;
    *eax = a5;
    eax[1] = a6;
    eax[2] = a7;
    return Qhash_Reset();
}
