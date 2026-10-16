#include "00476600-M203_Process.h"
/* 0x00476600 M203_Process full linked: callers=0 callees=6 */
int32_t* sub_476600(void* a1)

{
    sub_4c17c0(Level_CheckQTaskID_4(), a1);
    sub_4c7560(Level_StartMission_4(), a1);
    int32_t* eax_2 = *(a1 + 0x114);

    if (eax_2)
    {
        Qtask_UpdateList(eax_2);
        *(a1 + 0x114) = 0;
    }

    int32_t* result = *(a1 + 0x118);

    if (result)
    {
        result = Qtask_UpdateList(result);
        *(a1 + 0x118) = 0;
    }

    return result;
}
