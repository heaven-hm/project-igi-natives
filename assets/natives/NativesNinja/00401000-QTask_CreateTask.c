#include "00401000-QTask_CreateTask.h"
/* 0x00401000 QTask_CreateTask full linked: callers=1 callees=7 */
int32_t QTask_CreateTask()

{
    sub_48f100(&g_536144);
    sub_48f330(1);
    Flow_RunHandler();
    Flow_CreateHandler(nullptr);

    if (sub_48f220())
    {
        int32_t eax_2 = Flow_SetState(2);
        eax_2 = 1;
        return eax_2;
    }

    int32_t eax_1 = Flow_SetState(4);
    eax_1 = 1;
    return eax_1;
}
