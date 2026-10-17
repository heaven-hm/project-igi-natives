// Original IGI.EXE function: QTask_DeleteTask (VA 0x004014B0; static CFG gate PASS, CFG score 1.000).
#include "QTask_DeleteTask.h"
int32_t QTask_DeleteTask()

{
    int32_t dstD = 0;
    int16_t result;

    for (int16_t* i = &g_af5f08; i < 0xafa708; )
    {
        result = *(i - 3);

        if (result)
        {
            result = QTask_ChangeParent(dstD);
            *i = result;
        }

        i = &i[0x18];
        dstD += 1;
    }

    return result;
}
