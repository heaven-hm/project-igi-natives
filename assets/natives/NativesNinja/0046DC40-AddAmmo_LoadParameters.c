#include "0046DC40-AddAmmo_LoadParameters.h"
/* 0x0046dc40 AddAmmo_LoadParameters full linked: callers=0 callees=5 */
int32_t sub_46dc40(int32_t* a1)

{
    void* edi = a1[5];
    int32_t eax = sub_460be0();
    int16_t var_c = eax;
    eax = *(edi + 0x1c);

    if (TaskType_IsDerivedFrom(eax, var_c) && sub_47cd40(a1[8]))
        sub_47ce00(edi + 0x340, a1[8], a1[0x11]);

    return QTask_FindType(a1);
}
