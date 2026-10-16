#include "004B1420-Sys_IllegalDeviceNameInP.h"
/* 0x004b1420 Sys_IllegalDeviceNameInP full linked: callers=11 callees=7 */
int32_t sub_4b1420(void* a1, int32_t a2, void* a3)

{
    void* i_1 = nullptr;
    char j_1;
    void* i_2 = QFile_AliasResolve(&j_1, a1, i_1);
    void* i = QFile_DeviceIndex(&j_1);

    if (i > 0)
    {
        while (i < 5)
        {
            int32_t esi_2 = i * 0x8c;

            if (!*(esi_2 + &g_943708))
            {
                i_1 = i;
                void* var_98_3 = sub_4b1de0(i_1);
                Error_Show("Device not present: %s");

                while (true)
                    /* nop */
            }
            else
            {
                char j = j_1;
                int32_t ecx_4 = 0;

                if (j)
                {
                    while (j != 0x3a)
                    {
                        char var_7f[0x7f];
                        j = var_7f[ecx_4];
                        ecx_4 += 1;

                        if (!j)
                            break;
                    }
                }

                i_1 = a3;
                int32_t result = (*(esi_2 + &g_9436ec))(i, &i_1 + ecx_4 + 0x15, a2, i_1);

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
