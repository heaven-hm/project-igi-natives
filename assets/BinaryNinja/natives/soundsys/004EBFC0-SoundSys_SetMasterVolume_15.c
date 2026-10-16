#include "SoundSys_SetMasterVolume_15.h"
uint32_t SoundSys_SetMasterVolume_15()

{
    int32_t valA1 = g_a5ef84;
    int32_t dstD = 0;

    if (valA1 > 0)
    {
        int32_t* srcS1 = &g_a5ec88;

        do
        {
            void* valA = *srcS1;

            if (valA)
            {
                Sys_ExecuteBytecode_2(valA);
                *srcS1 = 0;
            }

            valA1 = g_a5ef84;
            dstD += 1;
            srcS1 = &srcS1[3];
        } while (dstD < valA1);
    }

    valA1 = g_54db80;
    QTask_InitContext(valA1);
    char objC = g_54db81;
    g_54db80 = 0xff;
    QTask_InitContext(objC);
    char tmpD = g_54db82;
    g_54db81 = 0xff;
    uint32_t result = QTask_InitContext(tmpD);
    g_54db82 = 0xff;
    return result;
}
