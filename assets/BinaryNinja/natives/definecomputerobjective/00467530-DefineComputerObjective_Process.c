// Original IGI.EXE function: DefineComputerObjective_Process (VA 0x00467530; static CFG gate PASS, CFG score 1.000).
#include "DefineComputerObjective_Process.h"
int32_t DefineComputerObjective_Process(void* context)

{
    Script_Isexists(context + 0x20, context);
    int32_t* source_val = context + 0xe4;
    int32_t i_1 = 6;
    int32_t i;

    do
    {
        Script_Isexists(&source_val[-0x14], context);
        Script_Isexists(source_val, context);
        source_val = &source_val[0x33];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return 0;
}
