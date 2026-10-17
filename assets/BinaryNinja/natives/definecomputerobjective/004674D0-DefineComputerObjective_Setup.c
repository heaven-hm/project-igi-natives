// Original IGI.EXE function: DefineComputerObjective_Setup (VA 0x004674D0; static CFG gate PASS, CFG score 1.000).
#include "DefineComputerObjective_Setup.h"
char* DefineComputerObjective_Setup(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0x20);
    int32_t* srcS1 = a1 + 0xe4;
    int32_t i_1 = 6;
    char* result;
    int32_t i;

    do
    {
        Script_CallNativeHandler_6(&srcS1[-0x14]);
        result = Script_CallNativeHandler_6(srcS1);
        srcS1 = &srcS1[0x33];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    g_5bdc78 = 0;
    return result;
}
