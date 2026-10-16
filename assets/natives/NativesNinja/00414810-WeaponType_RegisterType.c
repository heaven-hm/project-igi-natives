#include "00414810-WeaponType_RegisterType.h"
/* 0x00414810 WeaponType_RegisterType full linked: callers=1 callees=13 */
uint32_t WeaponType_RegisterType()

{
    sub_4f1d80(0x56e248);
    sub_4f1d80(0x56e238);
    sub_4f1d80(0x56e218);
    sub_4f1d80(0x56e228);
    int32_t eax = g_57b18c;
    int32_t edi = 0;

    if (eax > 0)
    {
        int32_t* esi_1 = &g_56e938;

        do
        {
            void* eax_1 = esi_1[1];

            if (eax_1)
            {
                sub_4b0d10(eax_1);
                esi_1[1] = 0;
            }

            void* eax_2 = *esi_1;

            if (eax_2)
            {
                sub_4b0d10(eax_2);
                *esi_1 = 0;
            }

            eax = g_57b18c;
            edi += 1;
            esi_1 = &esi_1[0x1ba];
        } while (edi < eax);
    }

    eax = g_5391ac;
    QTask_InitContext(eax);
    QTask_InitContext(g_5391ad);
    QTask_InitContext(g_5391ae);
    QTask_InitContext(g_5391af);
    QTask_InitContext(g_5391b0);
    QTask_InitContext(g_5391b1);
    uint32_t result = QTask_InitContext(g_5391b2);
    g_57b18c = 0;
    return result;
}
