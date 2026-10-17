// Original IGI.EXE function: QTask_OnTick (VA 0x00401270; static CFG gate PASS, CFG score 1.000).
#include "QTask_OnTick.h"
void QTask_OnTick()

{
    char* i = &g_54f932;

    do
    {
        if (*i)
            Warning_Show("QTask event not deallocated");

        i = &i[6];
    } while (i < (g_54ff24 + 2));
}
