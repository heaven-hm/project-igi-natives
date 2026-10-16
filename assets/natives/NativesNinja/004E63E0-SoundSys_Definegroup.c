#include "004E63E0-SoundSys_Definegroup.h"
/* 0x004e63e0 SoundSys_Definegroup full linked: callers=1 callees=21 */
int32_t sub_4e63e0()

{
    sub_4c1830(g_a5e60c);
    sub_4c1830(g_a5e610);
    sub_4b0d10(g_a5e600);
    char eax = g_548812;
    g_a5e600 = 0;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_548813;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_548814;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_548815;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_548816;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_548817;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_548818;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_54881b;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_548819;

    if (eax != 0xff)
        QTask_InitContext(eax);

    eax = g_54881a;

    if (eax != 0xff)
        QTask_InitContext(eax);

    uint32_t eax_1 = g_54881c;

    if (eax_1 != 0xff)
        eax_1 = QTask_CreateTask_2(eax_1);

    eax_1 = g_548808;
    QTask_CloseEvent_2(eax_1);
    QTask_CloseEvent_2(g_54880e);
    QTask_CloseEvent_2(g_54880a);
    sub_4b8920("DefineGroup");
    sub_4b8920("DefineSound");
    sub_4b8920("DefineGraph");
    return sub_4b8920("DefineTriggerOnce");
}
