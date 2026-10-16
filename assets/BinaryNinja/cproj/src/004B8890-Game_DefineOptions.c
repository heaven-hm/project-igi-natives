#include "gi_platform.h"
#include "004B8890-Game_DefineOptions.h"
void* Game_DefineOptions(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

// Sig: void Game_DefineOptions(int **option_str,int option_func_addr,int
// opt1,int opt2)
// Note: Define game options constants , Params: opt_str (int**)'DefineAmmoType'
{
    return Q_TaskHashTableSet(a1, a2, a3, a4, 1, 0, 0);
}
