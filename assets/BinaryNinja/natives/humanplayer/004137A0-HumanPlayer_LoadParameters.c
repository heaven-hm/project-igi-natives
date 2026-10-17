// Original IGI.EXE function: HumanPlayer_LoadParameters (VA 0x004137A0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_LoadParameters.h"
int32_t HumanPlayer_LoadParameters()

// Sig: void HumanPlayer_LoadParameters(void)
// Note: Name from igi.exe error string inside function:
// "HumanPlayer_LoadParameters: Couldn't load script \"%s\"". Loads humanplayer
// parameters (weapons/ammo/cycle definitions) from script.
{
    int32_t* valA = Qvm_Load("LOCAL:humanplayer/humanplayer.qsc");

    if (valA)
    {
        Qvm_Execute(valA);
        return Qvm_Cleanup(valA);
    }

    char* v_8_1 = "LOCAL:humanplayer/humanplayer.qsc";
    Error_Show("HumanPlayer_LoadParameters: Couldn't load script "%s"");

    while (true)
        /* nop */
}
