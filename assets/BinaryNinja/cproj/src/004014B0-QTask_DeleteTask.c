#include "gi_platform.h"
#include "004014B0-QTask_DeleteTask.h"
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
