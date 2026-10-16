#include "0048D000-Guard_CombatStart.h"
/* 0x0048d000 Guard_CombatStart full linked: callers=0 callees=1 */
int32_t* sub_48d000(void* a1, void* a2)

{
    void* edi = *(a2 + 0x28);
    *(a2 + 0x18) = sub_48d080;
    *(a2 + 0x20) = sub_48d7d0;
    int32_t ecx = *(a1 + 0x3d44);
    *(a1 + 0x3dd0) = 0xffffffff;
    *(a1 + 0x3dd4) = ecx;
    *(a1 + 0x3dd8) = 0xffffffff;
    int32_t** result_1 = **(edi + 8);
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
                *(edi + 8) = 0;
                *(edi + 0x20) = 0;
                return result;
            }
        }
    }

    *(edi + 8) = 0;
    *(edi + 0x20) = 0;
    return result;
}
