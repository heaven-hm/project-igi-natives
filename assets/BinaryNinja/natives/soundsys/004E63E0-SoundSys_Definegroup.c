#include "SoundSys_Definegroup.h"
int32_t SoundSys_Definegroup()

{
    DynObj_CreateMagicObject_4(g_a5e60c);
    DynObj_CreateMagicObject_4(g_a5e610);
    Sys_ExecuteBytecode_2(g_a5e600);
    char valA = g_548812;
    g_a5e600 = 0;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_548813;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_548814;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_548815;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_548816;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_548817;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_548818;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_54881b;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_548819;

    if (valA != 0xff)
        QTask_InitContext(valA);

    valA = g_54881a;

    if (valA != 0xff)
        QTask_InitContext(valA);

    uint32_t valA1 = g_54881c;

    if (valA1 != 0xff)
        valA1 = QTask_CreateTask_2(valA1);

    valA1 = g_548808;
    QTask_CloseEvent_2(valA1);
    QTask_CloseEvent_2(g_54880e);
    QTask_CloseEvent_2(g_54880a);
    Sys_CloseFileStream_23("DefineGroup");
    Sys_CloseFileStream_23("DefineSound");
    Sys_CloseFileStream_23("DefineGraph");
    return Sys_CloseFileStream_23("DefineTriggerOnce");
}
