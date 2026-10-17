// IGI native provenance: Game_DefineOptions - 0x004B8890 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8890-Game_DefineOptions.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Game_DefineOptions.h"
void* Game_DefineOptions(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

// Sig: void Game_DefineOptions(int **option_str,int option_func_addr,int
// opt1,int opt2)
// Note: Define game options constants , Params: opt_str (int**)'DefineAmmoType'
{
    return Q_TaskHashTableSet(context, param_2, param_3, param_4, 1, 0, 0);
}
