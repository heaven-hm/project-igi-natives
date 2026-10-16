#include "004B1820-Sys_AllocateMemory_5.h"
/* 0x004b1820 Sys_AllocateMemory_5 full linked: callers=2 callees=2 */
int32_t sub_4b1820(int32_t a1, void* a2)

{
    int32_t i = 0;

    do
    {
        char j_1;
        i = QFile_AliasResolve(&j_1, a2, i);
        int32_t eax_2 = QFile_DeviceIndex(&j_1);
        char j = j_1;
        int32_t edx_1 = 0;

        if (j)
        {
            while (j != 0x3a)
            {
                char var_1ff[0x1ff];
                j = var_1ff[edx_1];
                edx_1 += 1;

                if (!j)
                    break;
            }
        }

        int32_t __saved_edi;

        if (!(*(eax_2 * 0x8c + &g_9436f0))(eax_2, a1, &__saved_edi + edx_1 + 0xd))
            return 0;
    } while (i);

    return 0xffffffff;
}
