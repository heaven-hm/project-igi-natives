#include "004014B0-QTask_DeleteTask.h"
/* 0x004014b0 QTask_DeleteTask full linked: callers=6 callees=1 */
int32_t QTask_DeleteTask()

{
    int32_t edi = 0;
    int16_t result;

    for (int16_t* i = &g_af5f08; i < 0xafa708; )
    {
        result = *(i - 3);

        if (result)
        {
            result = QTask_ChangeParent(edi);
            *i = result;
        }

        i = &i[0x18];
        edi += 1;
    }

    return result;
}
