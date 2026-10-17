// Original IGI.EXE function: AnimTrigger_ParseConfigFile (VA 0x004EC070; static CFG gate PASS, CFG score 1.000).
#include "AnimTrigger_ParseConfigFile.h"
char* AnimTrigger_ParseConfigFile(char* context)

// Sig: void AnimTrigger_ParseConfigFile(uint* path)
// Note: Name from igi.exe error string INSIDE this function:
// "AnimTrigger_ParseConfigFile(): Couldn't load script: %s" . Parses
// an animtrigger config file into trigger entries.
{
    char* result = Camera_UpdateViewCone_6(context, "vssver");

    if (result)
        return result;

    int32_t* data_val = Qvm_Load(context);

    if (data_val)
    {
        Qvm_Execute(data_val);
        return Qvm_Cleanup(data_val);
    }

    char* item_c_3 = context;
    Error_Show("AnimTrigger_ParseConfigFile(): Couldn't load script: %s");

    while (true)
        /* nop */
}
