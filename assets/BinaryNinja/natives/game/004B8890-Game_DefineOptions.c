// Original IGI.EXE function: Game_DefineOptions (VA 0x004B8890; static CFG gate PASS, CFG score 1.000).
#include "Game_DefineOptions.h"
void* Game_DefineOptions(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

// Sig: void Game_DefineOptions(int **option_str,int option_func_addr,int
// opt1,int opt2)
// Note: Define game options constants , Params: opt_str (int**)'DefineAmmoType'
{
    return Q_TaskHashTableSet(context, param_2, param_3, param_4, 1, 0, 0);
}
