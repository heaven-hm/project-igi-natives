#include "gi_platform.h"
#include "004B1420-Sys_IllegalDeviceNameInP.h"
int32_t Sys_IllegalDeviceNameInP(void* a1, int32_t a2, void* a3)

{
    void* i_1 = nullptr;
    char j_1;
    void* i_2 = QFile_AliasResolve(&j_1, a1, i_1);
    void* i = QFile_DeviceIndex(&j_1);

    if (i > 0)
    {
        while (i < 5)
        {
            int32_t srcS2 = i * 0x8c;

            if (!*(srcS2 + &g_943708))
            {
                i_1 = i;
                void* v_98_3 = Sys_CheckHeap_6(i_1);
                Error_Show("Device not present: %s");

                while (true)
                    /* nop */
            }
            else
            {
                char j = j_1;
                int32_t objC4 = 0;

                if (j)
                {
                    while (j != 0x3a)
                    {
                        char v_7f[0x7f];
                        j = v_7f[objC4];
                        objC4 += 1;

                        if (!j)
                            break;
                    }
                }

                i_1 = a3;
                int32_t result = ((int(*)())(uintptr_t)(*(srcS2 + &g_9436ec)))(i, &i_1 + objC4 + 0x15, a2, i_1);

                if (!i_2)
                    return result;

                i_1 = i_2;
                i_2 = QFile_AliasResolve(&j_1, a1, i_1);
                i = QFile_DeviceIndex(&j_1);

                if (i <= 0)
                    break;
            }
        }
    }

    i_1 = a1;
    Error_Show("Illegal device name in path: "%s".");

    while (true)
        /* nop */
}
