#include "00451350-AI_CheckSector_2.h"
/* 0x00451350 AI_CheckSector_2 full linked: callers=1 callees=1 */
int32_t* sub_451350(void* a1)

{
    int32_t eax_1 = **(*(a1 + 0x3aa8) + 0xc);

    if (!eax_1)
        return 0;

    return sub_489be0(a1 + 0x15f8, eax_1);
}
