// Original IGI.EXE function: DefineComputerObjective_Process (VA 0x00467530; static CFG gate PASS, CFG score 1.000).
#include "DefineComputerObjective_Process.h"
int32_t DefineComputerObjective_Process(void* a1)

{
    Script_Isexists(a1 + 0x20, a1);
    int32_t* srcS = a1 + 0xe4;
    int32_t i_1 = 6;
    int32_t i;

    do
    {
        Script_Isexists(&srcS[-0x14], a1);
        Script_Isexists(srcS, a1);
        srcS = &srcS[0x33];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return 0;
}
