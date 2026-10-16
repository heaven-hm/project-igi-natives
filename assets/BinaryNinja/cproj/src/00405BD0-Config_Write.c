#include "gi_platform.h"
#include "00405BD0-Config_Write.h"
int32_t Config_Write(void* a1)

// Sig: void Config_Write(char* cfg_file)
// Note: Write game config file, Params: File: 'LOCAL:config.qsc'
{
    int32_t* valA = QFile_ReadWrite(a1, "w");

    if (valA)
    {
        Config_SaveInputOptions(valA);
        Config_Gocontentcontrolpw(valA);
        int32_t i = 0;

        if (g_bc2380 > 0)
        {
            do
            {
                Config_Goplayer(valA, i);
                i += 1;
            } while (i < g_bc2380);
        }

        Sys_ReadFileBlock_4(valA);
        int32_t result = FX_FireBallUpdate_27();

        if (!result)
            return result;

        Qsc_Compile(a1);
        return QScript_Cleanup(a1);
    }

    void* __saved_edi_1 = a1;
    Error_Show("Could not create config file %s.");

    while (true)
        /* nop */
}
