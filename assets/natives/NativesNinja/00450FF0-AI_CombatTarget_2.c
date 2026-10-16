#include "00450FF0-AI_CombatTarget_2.h"
/* 0x00450ff0 AI_CombatTarget_2 full linked: callers=36 callees=2 */
int32_t* sub_450ff0(void* a1, int32_t* a2)

{
    int32_t eax = a2[8];

    if (eax)
        eax(a1, a2);

    int32_t* result = sub_4af960(a2);
    a2[0xb] = 0;
    int32_t* esi_1 = a2[0xa];

    if (!esi_1)
        return result;

    return sub_451050(a1, esi_1);
}
