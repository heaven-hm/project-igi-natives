#include "00401270-QTask_OnTick.h"
/* 0x00401270 QTask_OnTick full linked: callers=1 callees=1 */
void QTask_OnTick()

{
    char* i = &g_54f932;

    do
    {
        if (*i)
            Warning_Show("QTask event not deallocated");

        i = &i[6];
    } while (i < &*(g_54ff24 + 2));
}
