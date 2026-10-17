// Original IGI.EXE function: GameMaterial_LoadParameters (VA 0x00408350; static CFG gate PASS, CFG score 1.000).
#include "GameMaterial_LoadParameters.h"
int32_t GameMaterial_LoadParameters()

// Sig: void GameMaterial_LoadParameters(void)
// Note: Name from igi.exe error string inside function:
// "GameMaterial_LoadParameters: Couldn't load script \"%s\"". Loads
// game-material parameters from its script.
{
    int32_t* valA = Qvm_Load("LOCAL:material/material.qsc");

    if (valA)
    {
        Qvm_Execute(valA);
        return Qvm_Cleanup(valA);
    }

    char* v_8_1 = "LOCAL:material/material.qsc";
    Error_Show("GameMaterial_LoadParameters: Couldn't load script "%s"");

    while (true)
        /* nop */
}
