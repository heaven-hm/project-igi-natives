// IGI native provenance: HumanPlayer_LoadParameters - 0x004137A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004137A0-HumanPlayer_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_LoadParameters.h"
int32_t HumanPlayer_LoadParameters()

// Sig: void HumanPlayer_LoadParameters(void)
// Note: Name from igi.exe error string inside function:
// "HumanPlayer_LoadParameters: Couldn't load script \"%s\"". Loads humanplayer
// parameters (weapons/ammo/cycle definitions) from script.
{
    int32_t* data_val = Qvm_Load("LOCAL:humanplayer/humanplayer.qsc");

    if (data_val)
    {
        Qvm_Execute(data_val);
        return Qvm_Cleanup(data_val);
    }

    char* item_8_1 = "LOCAL:humanplayer/humanplayer.qsc";
    Error_Show("HumanPlayer_LoadParameters: Couldn't load script "%s"");

    while (true)
        /* nop */
}
