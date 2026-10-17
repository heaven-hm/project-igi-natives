// Original IGI.EXE function: PatrolPath_Update (VA 0x00453600; static CFG gate PASS, CFG score 1.000).
#include "PatrolPath_Update.h"
void* PatrolPath_Update()

{
    int32_t dest_val = 0;
    void* result;

    for (char (** i)[0x17] = &g_53e2a0; i < "PATROLPATHCOMMAND_SETSPEED"; )
    {
        result = TaskType_Set(*i, dest_val - 1);
        i = &i[1];
        dest_val += 1;
    }

    return result;
}
