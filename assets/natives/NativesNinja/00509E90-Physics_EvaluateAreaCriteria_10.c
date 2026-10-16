#include "00509E90-Physics_EvaluateAreaCriteria_10.h"
/* 0x00509e90 Physics_EvaluateAreaCriteria_10 full linked: callers=1 callees=0 */
int32_t* sub_509e90()

{
    int32_t* eax_3 = g_a7b4f0;

    if (!eax_3)
    {
        g_a7b638 = 0;
        return eax_3;
    }

    int32_t i = 0;

    if (g_a7b638 > 0)
    {
        int32_t* esi_1 = &g_a7b4e0;

        do
        {
            int32_t* eax = *esi_1;

            if (eax)
            {
                (*(*eax + 0x20))(eax);
                int32_t* eax_1 = *esi_1;
                (*(*eax_1 + 8))(eax_1);
                *esi_1 = 0;
            }

            i += 1;
            esi_1 = &esi_1[1];
        } while (i < g_a7b638);

        eax_3 = g_a7b4f0;
    }

    int32_t eax_4 = (*(*eax_3 + 8))(eax_3);
    g_a7b4f0 = 0;
    g_a7b638 = 0;
    return eax_4;
}
