#include "004B1AC0-QScript_Cleanup.h"
/* 0x004b1ac0 QScript_Cleanup full linked: callers=9 callees=7 */
int32_t QScript_Cleanup(void* a1)

// Sig: void QScript_Cleanup(int* script)
// Note: Cleans up/frees a parsed .qsc script structure (pass1: 5 calls, valid
// exit). Param: script = pointer to the loaded script object. Call when done
// with a script loaded via the Qvm/Qsc loaders to release its memory.
{
    int32_t edi = QFile_AliasResolve(&g_943a98, a1, 0);
    int32_t i = QFile_DeviceIndex(&g_943a98);

    if (i > 0)
    {
        while (i < 5)
        {
            int32_t esi_2 = i * 0x8c;

            if (!*(esi_2 + &g_943708))
            {
                void* var_14_3 = sub_4b1de0(i);
                Error_Show("Device not present: %s");

                while (true)
                    /* nop */
            }
            else
            {
                char j = g_943a98;
                void* edx_1 = nullptr;

                if (j)
                {
                    while (j != 0x3a)
                    {
                        j = *(edx_1 + 0x943a99);
                        edx_1 += 1;

                        if (!j)
                            break;
                    }
                }

                int32_t esi_3 = *(esi_2 + &g_9436fc);

                if (esi_3)
                    i = esi_3(i, edx_1 + 0x943a99);

                if (!edi)
                    return i;

                edi = QFile_AliasResolve(&g_943a98, a1, edi);
                i = QFile_DeviceIndex(&g_943a98);

                if (i <= 0)
                    break;
            }
        }
    }

    char* var_10_3 = &g_943a98;
    Error_Show("Illegal device name in path: "%s".");

    while (true)
        /* nop */
}
