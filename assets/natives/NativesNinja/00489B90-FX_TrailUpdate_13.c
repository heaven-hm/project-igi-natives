#include "00489B90-FX_TrailUpdate_13.h"
/* 0x00489b90 FX_TrailUpdate_13 full linked: callers=8 callees=2 */
int32_t* sub_489b90(void* a1)

{
    int32_t* i_2 = *(a1 + 0x18);

    for (int32_t* i = *i_2; i; i = *i)
    {
        Qtask_UpdateList(i_2[2]);
        i_2 = i;
    }

    int32_t* result = *(a1 + 0x24);

    for (int32_t* i_1 = *result; i_1; i_1 = *i_1)
    {
        Qtask_UpdateList(result[2]);
        result = i_1;
    }

    return result;
}
