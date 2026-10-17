// Original IGI.EXE function: Sys_IllegalDeviceNameInP (VA 0x004B1420; static CFG gate PASS, CFG score 0.958).
#include "Sys_IllegalDeviceNameInP.h"
int32_t Sys_IllegalDeviceNameInP(void* context, int32_t param_2, void* param_3)

{
    void* i_1 = nullptr;
    char j_1;
    void* i_2 = QFile_AliasResolve(&j_1, context, i_1);
    void* i = QFile_DeviceIndex(&j_1);

    if (i > 0)
    {
        while (i < 5)
        {
            int32_t source_2 = i * 0x8c;

            if (!*(source_2 + &g_943708))
            {
                i_1 = i;
                void* item_98_3 = Sys_CheckHeap_6(i_1);
                Error_Show("Device not present: %s");

                while (true)
                    /* nop */
            }
            else
            {
                char j = j_1;
                int32_t entity_4 = 0;

                if (j)
                {
                    while (j != 0x3a)
                    {
                        char item_7f[0x7f];
                        j = item_7f[entity_4];
                        entity_4 += 1;

                        if (!j)
                            break;
                    }
                }

                i_1 = param_3;
                int32_t result = (*(source_2 + &g_9436ec))(i, &i_1 + entity_4 + 0x15, param_2, i_1);

                if (!i_2)
                    return result;

                i_1 = i_2;
                i_2 = QFile_AliasResolve(&j_1, context, i_1);
                i = QFile_DeviceIndex(&j_1);

                if (i <= 0)
                    break;
            }
        }
    }

    i_1 = context;
    Error_Show("Illegal device name in path: "%s".");

    while (true)
        /* nop */
}
