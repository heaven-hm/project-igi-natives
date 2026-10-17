// Original IGI.EXE function: DefineComputerObjective_Setup (VA 0x004674D0; static CFG gate PASS, CFG score 1.000).
#include "DefineComputerObjective_Setup.h"
char* DefineComputerObjective_Setup(void* context)

{
    Script_CallNativeHandler_6(context + 0x20);
    int32_t* source_1 = context + 0xe4;
    int32_t i_1 = 6;
    char* result;
    int32_t i;

    do
    {
        Script_CallNativeHandler_6(&source_1[-0x14]);
        result = Script_CallNativeHandler_6(source_1);
        source_1 = &source_1[0x33];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    g_5bdc78 = 0;
    return result;
}
