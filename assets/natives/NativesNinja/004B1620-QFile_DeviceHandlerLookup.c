#include "004B1620-QFile_DeviceHandlerLookup.h"
/* 0x004b1620 QFile_DeviceHandlerLookup full linked: callers=1 callees=0 */
int32_t QFile_DeviceHandlerLookup(char* a1)

// Sig: uint32_t QFile_DeviceHandlerLookup(const char* deviceName)
// Note: Matches a device name against the retail handler-name table and returns
// the corresponding handler value. Ghidra/r2 CFG agreement: 13 basic blocks and
// 18 edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t ebx;
    int32_t var_4 = ebx;
    char* esi = g_546f04;
    int32_t ebp = 0;

    if (esi)
    {
        int32_t* edi_1 = &g_546f04;

        while (true)
        {
            char* eax_1 = a1;
            int32_t eax_3;

            while (true)
            {
                char ebx_1 = *eax_1;
                char temp0_1 = *esi;
                bool c_1 = ebx_1 < temp0_1;

                if (ebx_1 == temp0_1)
                {
                    if (!ebx_1)
                    {
                        eax_3 = 0;
                        break;
                    }

                    ebx_1 = eax_1[1];
                    char temp3_1 = esi[1];
                    c_1 = ebx_1 < temp3_1;

                    if (ebx_1 == temp3_1)
                    {
                        eax_1 = &eax_1[2];
                        esi = &esi[2];

                        if (ebx_1)
                            continue;

                        eax_3 = 0;
                        break;
                    }
                }

                eax_3 = eax_1 - eax_1 + 1;
                break;
            }

            if (!eax_3)
                return *((ebp << 2) + &g_534a70);

            esi = edi_1[1];
            edi_1 = &edi_1[1];
            ebp += 1;

            if (!esi)
                break;
        }
    }

    return 0;
}
