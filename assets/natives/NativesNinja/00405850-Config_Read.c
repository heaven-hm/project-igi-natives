#include "00405850-Config_Read.h"
/* 0x00405850 Config_Read full linked: callers=1 callees=10 */
int32_t Config_Read(void* a1)

// Sig: int Config_Read(char* cfg_file)
// Note: Read game config file, Params:  File: 'LOCAL:config.qsc'
{
    int32_t* eax = Qvm_Load(a1);

    if (!eax)
    {
        Config_SaveGraphicOptions();
        Config_SaveSoundOptions();
        Config_NoD3DDriversWithHard();
        return Config_Language_2();
    }

    Qvm_Execute(eax);
    Qvm_Cleanup(eax);
    Config_SaveSoundOptions();
    Config_NoD3DDriversWithHard();
    return Config_Language_2();
}
