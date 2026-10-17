// Original IGI.EXE function: AI_HumanTeamGood (VA 0x00460B20; static CFG gate PASS, CFG score 1.000).
#include "AI_HumanTeamGood.h"
int32_t AI_HumanTeamGood()

{
    DynObj_CreateMagicObject_4(g_5bdc24);
    DynObj_CreateMagicObject_4(g_5bdc18);
    char valA = g_53f314;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_53f315;

    if (valA != 0xff)
        QTask_InitContext(valA);

    QTask_InitContext(g_53f316);
    QTask_InitContext(g_53f317);
    QTask_CloseEvent_2(g_5bdaf8);
    Physics_CheckHullCollision_3(g_5bdb00);

    for (int32_t* i = &g_5bdad8; i < &g_5bdaf8; i = &i[1])
        Physics_CheckHullCollision_3(*i);

    for (char (** i_1)[0x10] = &g_53f348; i_1 < "HUMAN_TEAM_BAD"; i_1 = &i_1[1])
        Sys_CloseFileStream_23(*i_1);

    return QTask_LinkEventHandler_3(1);
}
