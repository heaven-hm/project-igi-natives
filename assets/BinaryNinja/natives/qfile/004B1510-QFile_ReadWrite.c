// Original IGI.EXE function: QFile_ReadWrite (VA 0x004B1510; static CFG gate PASS, CFG score 0.967).
#include "QFile_ReadWrite.h"
int32_t* QFile_ReadWrite(void* context, char* param_2)

// Sig: void* QFile_ReadWrite(char* vpath, char* mode)
// Note: VIRTUAL-filesystem open: parses the device prefix from vpath (errors
// "Illegal device name in path: \" and "Device not present: %s"), routes to the
// device handler chain (0x4B1620/0x4B1020/0x4B11A0) and returns a Q-file
// handle. Params: vpath = virtual path WITH device prefix (e.g. "LOCAL:...",
// "MENU:"), mode = access mode. RETURNS handle or 0. This is the correct opener
// for LOCAL:/MISSION: paths.
{
    int32_t data_val = QFile_DeviceHandlerLookup(param_2);
    void* dest_val = context;
    int32_t context_val = QFile_AliasResolve(&g_9435b0, dest_val, 0);
    int32_t i = QFile_DeviceIndex(&g_9435b0);

    if (i > 0)
    {
        while (i < 5)
        {
            int32_t temp_2 = i * 0x8c;

            if (!*(temp_2 + &g_943708))
            {
                void* item_18_3 = Sys_CheckHeap_6(i);
                Error_Show("Device not present: %s");

                while (true)
                    /* nop */
            }
            else
            {
                char j = g_9435b0;
                void* data_6 = nullptr;

                if (j)
                {
                    while (j != 0x3a)
                    {
                        j = *(data_6 + 0x9435b1);
                        data_6 += 1;

                        if (!j)
                            break;
                    }
                }

                int32_t* result = (*(temp_2 + &g_9436b8))(i, data_6 + 0x9435b1, data_val);

                if (result)
                {
                    int32_t j_1 = 0xffffffff;
                    *result = i;

                    while (j_1)
                    {
                        bool flag_0_1 = 0 != *dest_val;
                        dest_val += 1;
                        j_1 -= 1;

                        if (!flag_0_1)
                            break;
                    }

                    int32_t entity_3 = ~j_1;
                    int32_t source_1;
                    int32_t dest_3;
                    dest_3 = memcpy(&result[6], dest_val - entity_3, entity_3 & 0xfffffffc);
                    memcpy(dest_3, source_1, entity_3 & 3);
                    return result;
                }

                if (!context_val)
                    return 0;

                context_val = QFile_AliasResolve(&g_9435b0, dest_val, context_val);
                i = QFile_DeviceIndex(&g_9435b0);

                if (i <= 0)
                    break;
            }
        }
    }

    void* item_14_3 = dest_val;
    Error_Show("Illegal device name in path: "%s".");

    while (true)
        /* nop */
}
