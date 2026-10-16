#include "gi_platform.h"
#include "004EC070-AnimTrigger_ParseConfigFile.h"
char* AnimTrigger_ParseConfigFile(char* a1)

// Sig: void AnimTrigger_ParseConfigFile(uint* path)
// Note: Name from igi.exe error string INSIDE this function:
// "AnimTrigger_ParseConfigFile(): Couldn't load script: %s" . Parses
// an animtrigger config file into trigger entries.
{
    char* result = Camera_UpdateViewCone_6(a1, "vssver");

    if (result)
        return result;

    int32_t* valA = Qvm_Load(a1);

    if (valA)
    {
        Qvm_Execute(valA);
        return Qvm_Cleanup(valA);
    }

    char* v_c_3 = a1;
    Error_Show("AnimTrigger_ParseConfigFile(): Couldn't load script: %s");

    while (true)
        /* nop */
}
