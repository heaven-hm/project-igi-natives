#include "004EBFC0-SoundSys_SetMasterVolume_15.h"
/* 0x004ebfc0 SoundSys_SetMasterVolume_15 full linked: callers=1 callees=4 */
uint32_t sub_4ebfc0()

{
    int32_t eax_1 = g_a5ef84;
    int32_t edi = 0;

    if (eax_1 > 0)
    {
        int32_t* esi_1 = &g_a5ec88;

        do
        {
            void* eax = *esi_1;

            if (eax)
            {
                sub_4b0d10(eax);
                *esi_1 = 0;
            }

            eax_1 = g_a5ef84;
            edi += 1;
            esi_1 = &esi_1[3];
        } while (edi < eax_1);
    }

    eax_1 = g_54db80;
    QTask_InitContext(eax_1);
    char ecx = g_54db81;
    g_54db80 = 0xff;
    QTask_InitContext(ecx);
    char edx = g_54db82;
    g_54db81 = 0xff;
    uint32_t result = QTask_InitContext(edx);
    g_54db82 = 0xff;
    return result;
}
