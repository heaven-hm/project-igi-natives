#include "00531CD0-BoneMagicObj_Update.h"
/* 0x00531cd0 BoneMagicObj_Update full linked: callers=0 callees=2 */
int32_t sub_531cd0(int32_t* a1 @ 0x8)

{
    int32_t eax = a1[2];
    int16_t* edi = *a1;
    a1[2] = eax + 1;
    *edi = sub_4b8a20(a1[1], eax);
    int32_t eax_2 = a1[2];
    a1[2] = eax_2 + 1;
    int32_t result = sub_4b8a20(a1[1], eax_2);
    *(edi + 4) = result;
    return result;
}
