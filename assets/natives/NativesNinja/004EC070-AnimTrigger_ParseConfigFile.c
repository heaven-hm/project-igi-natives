#include "004EC070-AnimTrigger_ParseConfigFile.h"
/* 0x004ec070 AnimTrigger_ParseConfigFile full linked: callers=1 callees=5 */
char* AnimTrigger_ParseConfigFile(char* a1)

// Sig: void AnimTrigger_ParseConfigFile(uint* path)
// Note: Name from igi.exe error string INSIDE this function:
// "AnimTrigger_ParseConfigFile(): Couldn't load script: %s" @0x54DB98. Parses
// an animtrigger config file into trigger entries.
{
    char* result = sub_4a5bb0(a1, "vssver");

    if (result)
        return result;

    int32_t* eax = Qvm_Load(a1);

    if (eax)
    {
        Qvm_Execute(eax);
        return Qvm_Cleanup(eax);
    }

    char* var_c_3 = a1;
    Error_Show("AnimTrigger_ParseConfigFile(): Couldn't load script: %s");

    while (true)
        /* nop */
}
