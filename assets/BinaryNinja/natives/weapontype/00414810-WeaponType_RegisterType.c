#include "WeaponType_RegisterType.h"
uint32_t WeaponType_RegisterType()

{
    Script_ParseEnumInt32_10(0x56e248);
    Script_ParseEnumInt32_10(0x56e238);
    Script_ParseEnumInt32_10(0x56e218);
    Script_ParseEnumInt32_10(0x56e228);
    int32_t valA = g_57b18c;
    int32_t dstD = 0;

    if (valA > 0)
    {
        int32_t* srcS1 = &g_56e938;

        do
        {
            void* valA1 = srcS1[1];

            if (valA1)
            {
                Sys_ExecuteBytecode_2(valA1);
                srcS1[1] = 0;
            }

            void* valA2 = *srcS1;

            if (valA2)
            {
                Sys_ExecuteBytecode_2(valA2);
                *srcS1 = 0;
            }

            valA = g_57b18c;
            dstD += 1;
            srcS1 = &srcS1[0x1ba];
        } while (dstD < valA);
    }

    valA = g_5391ac;
    QTask_InitContext(valA);
    QTask_InitContext(g_5391ad);
    QTask_InitContext(g_5391ae);
    QTask_InitContext(g_5391af);
    QTask_InitContext(g_5391b0);
    QTask_InitContext(g_5391b1);
    uint32_t result = QTask_InitContext(g_5391b2);
    g_57b18c = 0;
    return result;
}
