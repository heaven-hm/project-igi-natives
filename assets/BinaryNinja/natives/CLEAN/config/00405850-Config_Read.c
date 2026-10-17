// IGI native provenance: Config_Read - 0x00405850 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00405850-Config_Read.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_Read.h"
int32_t Config_Read(void* context)

// Sig: int Config_Read(char* cfg_file)
// Note: Read game config file, Params:  File: 'LOCAL:config.qsc'
{
    int32_t* data_val = Qvm_Load(context);

    if (!data_val)
    {
        Config_SaveGraphicOptions();
        Config_SaveSoundOptions();
        Config_NoD3DDriversWithHard();
        return Config_Language_2();
    }

    Qvm_Execute(data_val);
    Qvm_Cleanup(data_val);
    Config_SaveSoundOptions();
    Config_NoD3DDriversWithHard();
    return Config_Language_2();
}
