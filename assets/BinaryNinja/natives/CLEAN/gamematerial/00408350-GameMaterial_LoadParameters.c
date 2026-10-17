// IGI native provenance: GameMaterial_LoadParameters - 0x00408350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00408350-GameMaterial_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GameMaterial_LoadParameters.h"
int32_t GameMaterial_LoadParameters()

// Sig: void GameMaterial_LoadParameters(void)
// Note: Name from igi.exe error string inside function:
// "GameMaterial_LoadParameters: Couldn't load script \"%s\"". Loads
// game-material parameters from its script.
{
    int32_t* data_val = Qvm_Load("LOCAL:material/material.qsc");

    if (data_val)
    {
        Qvm_Execute(data_val);
        return Qvm_Cleanup(data_val);
    }

    char* item_8_1 = "LOCAL:material/material.qsc";
    Error_Show("GameMaterial_LoadParameters: Couldn't load script "%s"");

    while (true)
        /* nop */
}
