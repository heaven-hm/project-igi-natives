#include "gi_platform.h"
#include "004B1820-Sys_AllocateMemory_5.h"
int32_t Sys_AllocateMemory_5(int32_t a1, void* a2)

{
    int32_t i = 0;

    do
    {
        char j_1;
        i = QFile_AliasResolve(&j_1, a2, i);
        int32_t valA2 = QFile_DeviceIndex(&j_1);
        char j = j_1;
        int32_t tmpD1 = 0;

        if (j)
        {
            while (j != 0x3a)
            {
                char v_1ff[0x1ff];
                j = v_1ff[tmpD1];
                tmpD1 += 1;

                if (!j)
                    break;
            }
        }

        int32_t saved_dst;

        if (!((int(*)())(uintptr_t)(*(valA2 * 0x8c + &g_9436f0)))(valA2, a1, &saved_dst + tmpD1 + 0xd))
            return 0;
    } while (i);

    return 0xffffffff;
}
