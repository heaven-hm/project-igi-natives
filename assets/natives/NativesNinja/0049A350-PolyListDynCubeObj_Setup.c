#include "0049A350-PolyListDynCubeObj_Setup.h"
/* 0x0049a350 PolyListDynCubeObj_Setup full linked: callers=0 callees=2 */
void* sub_49a350(void* a1)

{
    void* result = *(a1 + 0xa8);

    if (result)
        result = sub_4c6840(*(a1 + 0x68), a1, 0);

    int32_t* esi_1 = *(a1 + 0xb4);

    if (!esi_1)
        return result;

    return Qtask_UpdateList(esi_1);
}
