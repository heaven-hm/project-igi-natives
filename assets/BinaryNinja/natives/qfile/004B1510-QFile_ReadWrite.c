// Original IGI.EXE function: QFile_ReadWrite (VA 0x004B1510; static CFG gate PASS, CFG score 0.967).
#include "QFile_ReadWrite.h"
int32_t* QFile_ReadWrite(void* a1, char* a2)

// Sig: void* QFile_ReadWrite(char* vpath, char* mode)
// Note: VIRTUAL-filesystem open: parses the device prefix from vpath (errors
// "Illegal device name in path: \" and "Device not present: %s"), routes to the
// device handler chain (0x4B1620/0x4B1020/0x4B11A0) and returns a Q-file
// handle. Params: vpath = virtual path WITH device prefix (e.g. "LOCAL:...",
// "MENU:"), mode = access mode. RETURNS handle or 0. This is the correct opener
// for LOCAL:/MISSION: paths.
{
    int32_t valA = QFile_DeviceHandlerLookup(a2);
    void* dstD = a1;
    int32_t ctxB = QFile_AliasResolve(&g_9435b0, dstD, 0);
    int32_t i = QFile_DeviceIndex(&g_9435b0);

    if (i > 0)
    {
        while (i < 5)
        {
            int32_t tmpD2 = i * 0x8c;

            if (!*(tmpD2 + &g_943708))
            {
                void* v_18_3 = Sys_CheckHeap_6(i);
                Error_Show("Device not present: %s");

                while (true)
                    /* nop */
            }
            else
            {
                char j = g_9435b0;
                void* valA6 = nullptr;

                if (j)
                {
                    while (j != 0x3a)
                    {
                        j = *(valA6 + 0x9435b1);
                        valA6 += 1;

                        if (!j)
                            break;
                    }
                }

                int32_t* result = (*(tmpD2 + &g_9436b8))(i, valA6 + 0x9435b1, valA);

                if (result)
                {
                    int32_t j_1 = 0xffffffff;
                    *result = i;

                    while (j_1)
                    {
                        bool cond_0_1 = 0 != *dstD;
                        dstD += 1;
                        j_1 -= 1;

                        if (!cond_0_1)
                            break;
                    }

                    int32_t objC3 = ~j_1;
                    int32_t srcS1;
                    int32_t dstD3;
                    dstD3 = memcpy(&result[6], dstD - objC3, objC3 & 0xfffffffc);
                    memcpy(dstD3, srcS1, objC3 & 3);
                    return result;
                }

                if (!ctxB)
                    return 0;

                ctxB = QFile_AliasResolve(&g_9435b0, dstD, ctxB);
                i = QFile_DeviceIndex(&g_9435b0);

                if (i <= 0)
                    break;
            }
        }
    }

    void* v_14_3 = dstD;
    Error_Show("Illegal device name in path: "%s".");

    while (true)
        /* nop */
}
