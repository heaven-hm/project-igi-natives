// IGI native provenance: AnimTrigger_ParseConfigFile - 0x004EC070 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EC070-AnimTrigger_ParseConfigFile.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
