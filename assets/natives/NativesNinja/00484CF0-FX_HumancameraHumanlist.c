#include "00484CF0-FX_HumancameraHumanlist.h"
/* 0x00484cf0 FX_HumancameraHumanlist full linked: callers=1 callees=3 */
char* sub_484cf0()

{
    QTask_InitContext(g_540992);
    QTask_CloseEvent_2(g_540990);
    char* result = &g_5c118d;

    while (!*result)
    {
        result = &result[8];

        if (result >= 0x5c158d)
            return result;
    }

    Error_Show("HumanCamera humanlist not empty");

    while (true)
        /* nop */
}
