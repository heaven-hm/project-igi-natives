#include "00405BD0-Config_Write.h"
/* 0x00405bd0 Config_Write full linked: callers=2 callees=9 */
int32_t Config_Write(void* a1)

// Sig: void Config_Write(char* cfg_file)
// Note: Write game config file, Params: File: 'LOCAL:config.qsc'
{
    int32_t* eax = QFile_ReadWrite(a1, "w");

    if (eax)
    {
        Config_SaveInputOptions(eax);
        Config_Gocontentcontrolpw(eax);
        int32_t i = 0;

        if (g_bc2380 > 0)
        {
            do
            {
                Config_Goplayer(eax, i);
                i += 1;
            } while (i < g_bc2380);
        }

        sub_4b1690(eax);
        int32_t result = sub_48f340();

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
