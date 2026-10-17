// Original IGI.EXE function: Config_Read (VA 0x00405850; static CFG gate PASS, CFG score 1.000).
#include "Config_Read.h"
int32_t Config_Read(void* a1)

// Sig: int Config_Read(char* cfg_file)
// Note: Read game config file, Params:  File: 'LOCAL:config.qsc'
{
    int32_t* valA = Qvm_Load(a1);

    if (!valA)
    {
        Config_SaveGraphicOptions();
        Config_SaveSoundOptions();
        Config_NoD3DDriversWithHard();
        return Config_Language_2();
    }

    Qvm_Execute(valA);
    Qvm_Cleanup(valA);
    Config_SaveSoundOptions();
    Config_NoD3DDriversWithHard();
    return Config_Language_2();
}
