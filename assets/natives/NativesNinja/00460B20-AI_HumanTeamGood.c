#include "00460B20-AI_HumanTeamGood.h"
/* 0x00460b20 AI_HumanTeamGood full linked: callers=1 callees=11 */
int32_t sub_460b20()

{
    sub_4c1830(g_5bdc24);
    sub_4c1830(g_5bdc18);
    char eax = g_53f314;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_53f315;

    if (eax != 0xff)
        QTask_InitContext(eax);

    QTask_InitContext(g_53f316);
    QTask_InitContext(g_53f317);
    QTask_CloseEvent_2(g_5bdaf8);
    sub_504a90(g_5bdb00);

    for (int32_t* i = &g_5bdad8; i < &g_5bdaf8; i = &i[1])
        sub_504a90(*i);

    for (char (** i_1)[0x10] = &g_53f348; i_1 < "HUMAN_TEAM_BAD"; i_1 = &i_1[1])
        sub_4b8920(*i_1);

    return QTask_LinkEventHandler_3(1);
}
