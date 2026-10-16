#include "0048ABA0-Patrol_CombatStart.h"
/* 0x0048aba0 Patrol_CombatStart full linked: callers=1 callees=3 */
int32_t* sub_48aba0(void* a1, void* a2)

{
    int32_t* ebx_1 = *(a2 + 0x28) + 8;

    if (!sub_463180(*(a1 + 0x14)))
    {
        if (!sub_48efe0(a1, 2))
            *(a2 + 0x18) = sub_48bbd0;
        else
            *(a2 + 0x18) = 0x48c510;
    }
    else
        *(a2 + 0x18) = sub_48c250;

    *(a2 + 0x20) = sub_48d7d0;
    int32_t ecx = *(a1 + 0x3d44);
    *(a1 + 0x3dd0) = 0xffffffff;
    *(a1 + 0x3dd4) = ecx;
    *(a1 + 0x3dd8) = 0xffffffff;
    *(a1 + 0x3e64) = 0;
    *(a1 + 0x3de8) = 0xffffffff;
    int32_t* result_1 = **ebx_1;
    int32_t* result = *result_1;

    if (result)
    {
        while (true)
        {
            int32_t* ecx_1 = result_1[0xb];

            if (ecx_1)
            {
                void* ecx_2 = *ecx_1;

                if (ecx_2)
                {
                    result = sub_451080(a1, ecx_2);
                    *(a1 + 0x3aa8) = result;
                    break;
                }
            }

            result_1 = result;
            result = *result;

            if (!result)
            {
                ebx_1[6] = 0;
                ebx_1[5] = 0;
                *ebx_1 = 0;
                return result;
            }
        }
    }

    ebx_1[6] = 0;
    ebx_1[5] = 0;
    *ebx_1 = 0;
    return result;
}
