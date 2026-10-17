// Original IGI.EXE function: QScript_Cleanup (VA 0x004B1AC0; static CFG gate PASS, CFG score 1.000).
#include "QScript_Cleanup.h"
int32_t QScript_Cleanup(void* context)

// Sig: void QScript_Cleanup(int* script)
// Note: Cleans up/frees a parsed .qsc script structure (pass1: 5 calls, valid
// exit). Param: script = pointer to the loaded script object. Call when done
// with a script loaded via the Qvm/Qsc loaders to release its memory.
{
    int32_t dest_val = QFile_AliasResolve(&g_943a98, context, 0);
    int32_t i = QFile_DeviceIndex(&g_943a98);

    if (i > 0)
    {
        while (i < 5)
        {
            int32_t source_2 = i * 0x8c;

            if (!*(source_2 + &g_943708))
            {
                void* item_14_3 = Sys_CheckHeap_6(i);
                Error_Show("Device not present: %s");

                while (true)
                    /* nop */
            }
            else
            {
                char j = g_943a98;
                void* temp_1 = nullptr;

                if (j)
                {
                    while (j != 0x3a)
                    {
                        j = *(temp_1 + 0x943a99);
                        temp_1 += 1;

                        if (!j)
                            break;
                    }
                }

                int32_t source_3 = *(source_2 + &g_9436fc);

                if (source_3)
                    i = source_3(i, temp_1 + 0x943a99);

                if (!dest_val)
                    return i;

                dest_val = QFile_AliasResolve(&g_943a98, context, dest_val);
                i = QFile_DeviceIndex(&g_943a98);

                if (i <= 0)
                    break;
            }
        }
    }

    char* item_10_3 = &g_943a98;
    Error_Show("Illegal device name in path: "%s".");

    while (true)
        /* nop */
}
