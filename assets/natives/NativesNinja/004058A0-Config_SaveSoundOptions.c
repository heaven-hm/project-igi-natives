#include "004058A0-Config_SaveSoundOptions.h"
/* 0x004058a0 Config_SaveSoundOptions full linked: callers=2 callees=5 */
int32_t Config_SaveSoundOptions()

{
    int32_t var_4 = 0x1b;
    int32_t esi = Config_SetResolution();
    int32_t* ebp = Config_SetGamma();
    int32_t eax_2 = 0;
    int32_t* var_c = ebp;
    int32_t var_10 = 0;

    while (true)
    {
        int32_t edi_1 = 0;
        int32_t var_8;
        Config_Moveleft(eax_2, &var_8, nullptr);
        int32_t ebx_1 = var_8;
        int32_t eax_3 = 0;

        if (esi > 0)
        {
            int32_t* ecx_1 = ebp;

            do
            {
                if (edi_1)
                    goto label_405953;

                if (*ecx_1 == ebx_1)
                    edi_1 = 1;

                eax_3 += 1;
                ecx_1 = &ecx_1[3];
            } while (eax_3 < esi);
        }

        if (esi <= 0 || !edi_1)
        {
            int32_t i = 0;
            int32_t* ecx_2 = &ebp[esi * 3];
            int32_t* eax_5 = &g_536410;

            while (!i)
            {
                if (*eax_5 == ebx_1)
                {
                    int32_t* edi_2 = ecx_2;
                    esi += 1;
                    ecx_2 = &ecx_2[3];
                    *edi_2 = *eax_5;
                    edi_2[1] = eax_5[1];
                    edi_2[2] = eax_5[2];
                    i = 1;
                }

                eax_5 = &eax_5[3];

                if (eax_5 >= 0x536554)
                    break;
            }
        }

    label_405953:
        eax_2 = var_10 + 1;
        var_10 = eax_2;

        if (eax_2 >= var_4)
            break;

        ebp = var_c;
    }

    return Config_SetVolume(esi);
}
