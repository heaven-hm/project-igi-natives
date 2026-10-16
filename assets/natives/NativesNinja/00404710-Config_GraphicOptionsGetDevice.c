#include "00404710-Config_GraphicOptionsGetDevice.h"
/* 0x00404710 Config_GraphicOptionsGetDevice full linked: callers=0 callees=3 */
int32_t Config_GraphicOptionsGetDevice(int32_t a1)

// Sig: int Config_GraphicOptionsGetDevice()
// Note: Returns the active profile's render-device index (index into the device
// list). Use in video-options UI scripts.
{
    int32_t ebx;
    int32_t var_20 = ebx;
    int32_t ebp = 0;
    int32_t var_1c = 0;
    int32_t var_18;

    if (g_567c90 > 0)
    {
        char* edi_1 = &g_567c98;

        while (true)
        {
            char* esi_1 = edi_1;
            char* eax_2 = Config_GetActiveGraphicOptions() + 0x13;
            int32_t eax_4;

            while (true)
            {
                char edx_1 = *eax_2;
                char ebx_1 = *esi_1;
                bool c_1 = edx_1 < ebx_1;

                if (edx_1 == ebx_1)
                {
                    if (!edx_1)
                    {
                        eax_4 = 0;
                        break;
                    }

                    edx_1 = eax_2[1];
                    ebx_1 = esi_1[1];
                    c_1 = edx_1 < ebx_1;

                    if (edx_1 == ebx_1)
                    {
                        eax_2 = &eax_2[2];
                        esi_1 = &esi_1[2];

                        if (edx_1)
                            continue;

                        eax_4 = 0;
                        break;
                    }
                }

                eax_4 = eax_2 - eax_2 + 1;
                break;
            }

            if (!eax_4)
            {
                var_18 = ebp;
                int32_t var_10;
                var_10 = ebp;
                char* var_8_1 = &g_567c74;
                memcpy(a1, &var_18, 0x18);
                return a1;
            }

            ebp += 1;
            edi_1 = &edi_1[0x404];

            if (ebp >= g_567c90)
            {
                int32_t var_1c_1 = ebp;
                break;
            }
        }
    }

    var_18 = 0;
    int32_t var_10_1 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
