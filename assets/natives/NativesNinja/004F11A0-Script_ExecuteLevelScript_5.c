#include "004F11A0-Script_ExecuteLevelScript_5.h"
/* 0x004f11a0 Script_ExecuteLevelScript_5 full linked: callers=1 callees=2 */
int32_t* sub_4f11a0(int32_t a1)

{
    int32_t* result = *(sub_4ee960(a1) * 0xc + &g_a70ca8);

    for (int32_t* i = *result; i; i = *i)
    {
        int32_t ecx_2 = *result[2];

        if (!ecx_2)
            sub_4f0c90(result);
        else if (ecx_2 == a1)
            return result;

        result = i;
    }

    return nullptr;
}
