// Original IGI.EXE function: PatrolPath_Update (VA 0x00453600; static CFG gate PASS, CFG score 1.000).
#include "PatrolPath_Update.h"
void* PatrolPath_Update()

{
    int32_t dstD = 0;
    void* result;

    for (char (** i)[0x17] = &g_53e2a0; i < "PATROLPATHCOMMAND_SETSPEED"; )
    {
        result = TaskType_Set(*i, dstD - 1);
        i = &i[1];
        dstD += 1;
    }

    return result;
}
