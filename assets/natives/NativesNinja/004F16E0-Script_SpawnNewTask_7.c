#include "004F16E0-Script_SpawnNewTask_7.h"
/* 0x004f16e0 Script_SpawnNewTask_7 full linked: callers=97 callees=3 */
int32_t sub_4f16e0(int32_t* a1, void* a2)

{
    int32_t var_8 = 0;
    int32_t var_4 = 0;
    int32_t result;

    if (!a1[1])
        result = sub_4f1400(a1, a2);
    else
    {
        sub_4f1740(a1);
        result = a1[1];

        if (!result)
            result = sub_4f1400(a1, a2);
    }

    int32_t esi_1 = a1[2];

    if (!esi_1)
        return result;

    long double x87_r0;
    long double x87_r1;
    return sub_4b9660(x87_r0, x87_r1, esi_1);
}
