// IGI native provenance: Config_Write - 0x00405BD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00405BD0-Config_Write.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_Write.h"
int32_t Config_Write(void* context)

// Sig: void Config_Write(char* cfg_file)
// Note: Write game config file, Params: File: 'LOCAL:config.qsc'
{
    int32_t* data_val = QFile_ReadWrite(context, "w");

    if (data_val)
    {
        Config_SaveInputOptions(data_val);
        Config_Gocontentcontrolpw(data_val);
        int32_t i = 0;

        if (g_bc2380 > 0)
        {
            do
            {
                Config_Goplayer(data_val, i);
                i += 1;
            } while (i < g_bc2380);
        }

        Sys_ReadFileBlock_4(data_val);
        int32_t result = FX_FireBallUpdate_27();

        if (!result)
            return result;

        Qsc_Compile(context);
        return QScript_Cleanup(context);
    }

    void* saved_edi_1 = context;
    Error_Show("Could not create config file %s.");

    while (true)
        /* nop */
}
