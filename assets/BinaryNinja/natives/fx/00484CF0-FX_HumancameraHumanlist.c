// Original IGI.EXE function: FX_HumancameraHumanlist (VA 0x00484CF0; static CFG gate PASS, CFG score 1.000).
#include "FX_HumancameraHumanlist.h"
char* FX_HumancameraHumanlist()

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
