#include "00401230-QTask_Action.h"
/* 0x00401230 QTask_Action full linked: callers=1 callees=2 */
void QTask_Action()

{
    int32_t edi = 0;

    for (char* i = &g_af5f05; i < 0xafa705; )
    {
        if (*i)
        {
            int32_t var_10_1 = QTask_RegisterEventCallback_2(edi);
            Warning_Show("QTasktype "%s" not deallocated");
        }

        i = &i[0x30];
        edi += 1;
    }
}
