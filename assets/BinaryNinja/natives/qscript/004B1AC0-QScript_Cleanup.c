// Original IGI.EXE function: QScript_Cleanup (VA 0x004B1AC0; static CFG gate PASS, CFG score 1.000).
#include "QScript_Cleanup.h"
int32_t QScript_Cleanup(void* a1)

// Sig: void QScript_Cleanup(int* script)
// Note: Cleans up/frees a parsed .qsc script structure (pass1: 5 calls, valid
// exit). Param: script = pointer to the loaded script object. Call when done
// with a script loaded via the Qvm/Qsc loaders to release its memory.
{
    int32_t dstD = QFile_AliasResolve(&g_943a98, a1, 0);
    int32_t i = QFile_DeviceIndex(&g_943a98);

    if (i > 0)
    {
        while (i < 5)
        {
            int32_t srcS2 = i * 0x8c;

            if (!*(srcS2 + &g_943708))
            {
                void* v_14_3 = Sys_CheckHeap_6(i);
                Error_Show("Device not present: %s");

                while (true)
                    /* nop */
            }
            else
            {
                char j = g_943a98;
                void* tmpD1 = nullptr;

                if (j)
                {
                    while (j != 0x3a)
                    {
                        j = *(tmpD1 + 0x943a99);
                        tmpD1 += 1;

                        if (!j)
                            break;
                    }
                }

                int32_t srcS3 = *(srcS2 + &g_9436fc);

                if (srcS3)
                    i = srcS3(i, tmpD1 + 0x943a99);

                if (!dstD)
                    return i;

                dstD = QFile_AliasResolve(&g_943a98, a1, dstD);
                i = QFile_DeviceIndex(&g_943a98);

                if (i <= 0)
                    break;
            }
        }
    }

    char* v_10_3 = &g_943a98;
    Error_Show("Illegal device name in path: "%s".");

    while (true)
        /* nop */
}
