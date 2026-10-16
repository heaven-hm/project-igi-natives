#include "00450830-AI_CheckVisibility.h"
/* 0x00450830 AI_CheckVisibility full linked: callers=1 callees=9 */
int32_t* sub_450830()

{
    sub_4c1830(g_58a9d4);
    QTask_CloseEvent_2(g_53c920);
    char eax = g_53c922;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_53c923;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_53c924;

    if (eax != 0xff)
        QTask_InitContext(eax);

    for (int32_t* i = &g_57d844; i < 0x57e1c4; i = &i[0x4c])
    {
        if (i[-1])
            Qtask_UpdateList(*i);
    }

    sub_450b20();
    sub_4508e0();
    int32_t* result;

    for (int32_t* i_1 = &g_58a9f4; i_1 < &g_58aa18; i_1 = &i_1[1])
    {
        result = *i_1;

        if (result)
            result = Qvm_Cleanup(result);
    }

    return result;
}
