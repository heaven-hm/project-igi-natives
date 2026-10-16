#include "00408350-GameMaterial_LoadParameters.h"
/* 0x00408350 GameMaterial_LoadParameters full linked: callers=1 callees=4 */
int32_t GameMaterial_LoadParameters()

// Sig: void GameMaterial_LoadParameters(void)
// Note: Name from igi.exe error string inside function:
// "GameMaterial_LoadParameters: Couldn't load script \"%s\"". Loads
// game-material parameters from its script.
{
    int32_t* eax = Qvm_Load("LOCAL:material/material.qsc");

    if (eax)
    {
        Qvm_Execute(eax);
        return Qvm_Cleanup(eax);
    }

    char* var_8_1 = "LOCAL:material/material.qsc";
    Error_Show("GameMaterial_LoadParameters: Couldn't load script "%s"");

    while (true)
        /* nop */
}
