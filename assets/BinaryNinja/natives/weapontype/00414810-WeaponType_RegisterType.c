// Original IGI.EXE function: WeaponType_RegisterType (VA 0x00414810; static CFG gate PASS, CFG score 1.000).
#include "WeaponType_RegisterType.h"
uint32_t WeaponType_RegisterType()

{
    Script_ParseEnumInt32_10(0x56e248);
    Script_ParseEnumInt32_10(0x56e238);
    Script_ParseEnumInt32_10(0x56e218);
    Script_ParseEnumInt32_10(0x56e228);
    int32_t data_val = g_57b18c;
    int32_t dest_val = 0;

    if (data_val > 0)
    {
        int32_t* source_1 = &g_56e938;

        do
        {
            void* data_1 = source_1[1];

            if (data_1)
            {
                Sys_ExecuteBytecode_2(data_1);
                source_1[1] = 0;
            }

            void* data_2 = *source_1;

            if (data_2)
            {
                Sys_ExecuteBytecode_2(data_2);
                *source_1 = 0;
            }

            data_val = g_57b18c;
            dest_val += 1;
            source_1 = &source_1[0x1ba];
        } while (dest_val < data_val);
    }

    data_val = g_5391ac;
    QTask_InitContext(data_val);
    QTask_InitContext(g_5391ad);
    QTask_InitContext(g_5391ae);
    QTask_InitContext(g_5391af);
    QTask_InitContext(g_5391b0);
    QTask_InitContext(g_5391b1);
    uint32_t result = QTask_InitContext(g_5391b2);
    g_57b18c = 0;
    return result;
}
