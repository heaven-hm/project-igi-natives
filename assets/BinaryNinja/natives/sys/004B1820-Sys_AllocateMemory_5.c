// Original IGI.EXE function: Sys_AllocateMemory_5 (VA 0x004B1820; static CFG gate PASS, CFG score 0.889).
#include "Sys_AllocateMemory_5.h"
int32_t Sys_AllocateMemory_5(int32_t context, void* param_2)

{
    int32_t i = 0;

    do
    {
        char j_1;
        i = QFile_AliasResolve(&j_1, param_2, i);
        int32_t data_2 = QFile_DeviceIndex(&j_1);
        char j = j_1;
        int32_t temp_1 = 0;

        if (j)
        {
            while (j != 0x3a)
            {
                char item_1ff[0x1ff];
                j = item_1ff[temp_1];
                temp_1 += 1;

                if (!j)
                    break;
            }
        }

        int32_t saved_target;

        if (!(*(data_2 * 0x8c + &g_9436f0))(data_2, context, &saved_target + temp_1 + 0xd))
            return 0;
    } while (i);

    return 0xffffffff;
}
