// Original IGI.EXE function: QTask_OnEvent (VA 0x004011D0; static CFG gate PASS, CFG score 1.000).
#include "QTask_OnEvent.h"
char* QTask_OnEvent()

{
    char* i = &g_54f932;

    do
    {
        *i = 0;
        i = &i[6];
    } while (i < (g_54ff24 + 2));

    return i;
}
