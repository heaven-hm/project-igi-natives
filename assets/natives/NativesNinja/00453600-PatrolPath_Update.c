#include "00453600-PatrolPath_Update.h"
/* 0x00453600 PatrolPath_Update full linked: callers=1 callees=1 */
void* sub_453600()

{
    int32_t edi = 0;
    void* result;

    for (char (** i)[0x17] = &g_53e2a0; i < "PATROLPATHCOMMAND_SETSPEED"; )
    {
        result = TaskType_Set(*i, edi - 1);
        i = &i[1];
        edi += 1;
    }

    return result;
}
