#include "004B1510-QFile_ReadWrite.h"
/* 0x004b1510 QFile_ReadWrite full linked: callers=14 callees=10 */
int32_t* QFile_ReadWrite(void* a1, char* a2)

// Sig: void* QFile_ReadWrite(char* vpath, char* mode)
// Note: VIRTUAL-filesystem open: parses the device prefix from vpath (errors
// "Illegal device name in path: \" and "Device not present: %s"), routes to the
// device handler chain (0x4B1620/0x4B1020/0x4B11A0) and returns a Q-file
// handle. Params: vpath = virtual path WITH device prefix (e.g. "LOCAL:...",
// "MENU:"), mode = access mode. RETURNS handle or 0. This is the correct opener
// for LOCAL:/MISSION: paths.
{
    int32_t eax = QFile_DeviceHandlerLookup(a2);
    void* edi = a1;
    int32_t ebx = QFile_AliasResolve(&g_9435b0, edi, 0);
    int32_t i = QFile_DeviceIndex(&g_9435b0);

    if (i > 0)
    {
        while (i < 5)
        {
            int32_t edx_2 = i * 0x8c;

            if (!*(edx_2 + &g_943708))
            {
                void* var_18_3 = sub_4b1de0(i);
                Error_Show("Device not present: %s");

                while (true)
                    /* nop */
            }
            else
            {
                char j = g_9435b0;
                void* eax_6 = nullptr;

                if (j)
                {
                    while (j != 0x3a)
                    {
                        j = *(eax_6 + 0x9435b1);
                        eax_6 += 1;

                        if (!j)
                            break;
                    }
                }

                int32_t* result = (*(edx_2 + &g_9436b8))(i, eax_6 + 0x9435b1, eax);

                if (result)
                {
                    int32_t j_1 = 0xffffffff;
                    *result = i;

                    while (j_1)
                    {
                        bool cond:0_1 = 0 != *edi;
                        edi += 1;
                        j_1 -= 1;

                        if (!cond:0_1)
                            break;
                    }

                    int32_t ecx_3 = ~j_1;
                    int32_t esi_1;
                    int32_t edi_3;
                    edi_3 = memcpy(&result[6], edi - ecx_3, ecx_3 & 0xfffffffc);
                    memcpy(edi_3, esi_1, ecx_3 & 3);
                    return result;
                }

                if (!ebx)
                    return 0;

                ebx = QFile_AliasResolve(&g_9435b0, edi, ebx);
                i = QFile_DeviceIndex(&g_9435b0);

                if (i <= 0)
                    break;
            }
        }
    }

    void* var_14_3 = edi;
    Error_Show("Illegal device name in path: "%s".");

    while (true)
        /* nop */
}
