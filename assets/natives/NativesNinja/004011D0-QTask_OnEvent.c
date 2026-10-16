#include "004011D0-QTask_OnEvent.h"
/* 0x004011d0 QTask_OnEvent full linked: callers=1 callees=0 */
char* QTask_OnEvent()

{
    char* i = &g_54f932;

    do
    {
        *i = 0;
        i = &i[6];
    } while (i < &*(g_54ff24 + 2));

    return i;
}
