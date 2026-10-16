#include "004137A0-HumanPlayer_LoadParameters.h"
/* 0x004137a0 HumanPlayer_LoadParameters full linked: callers=1 callees=4 */
int32_t HumanPlayer_LoadParameters()

// Sig: void HumanPlayer_LoadParameters(void)
// Note: Name from igi.exe error string inside function:
// "HumanPlayer_LoadParameters: Couldn't load script \"%s\"". Loads humanplayer
// parameters (weapons/ammo/cycle definitions) from script.
{
    int32_t* eax = Qvm_Load("LOCAL:humanplayer/humanplayer.qsc");

    if (eax)
    {
        Qvm_Execute(eax);
        return Qvm_Cleanup(eax);
    }

    char* var_8_1 = "LOCAL:humanplayer/humanplayer.qsc";
    Error_Show("HumanPlayer_LoadParameters: Couldn't load script "%s"");

    while (true)
        /* nop */
}
