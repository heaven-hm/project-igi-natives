// Original IGI.EXE function: Script_ExecuteLevelScript_23 (VA 0x004F9720; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_23.h"
void* Script_ExecuteLevelScript_23(void* context, int32_t param_2)

{
    if (!*(context + 0x6c) || param_2 >= *(context + 0x58) || param_2 < 0 || param_2 == 0xffffffff)
        return 0;

    int32_t* data_4 = Script_UndefinedGraphnodeda(context) * param_2 + *(context + 0x6c);
    int32_t data_6 = *data_4 + 1;
    int32_t data_7 = -(data_6);
    return (data_7 - data_7) & data_4;
}
