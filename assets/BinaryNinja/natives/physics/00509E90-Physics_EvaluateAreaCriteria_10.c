#include "Physics_EvaluateAreaCriteria_10.h"
int32_t* Physics_EvaluateAreaCriteria_10()

{
    int32_t* valA3 = g_a7b4f0;

    if (!valA3)
    {
        g_a7b638 = 0;
        return valA3;
    }

    int32_t i = 0;

    if (g_a7b638 > 0)
    {
        int32_t* srcS1 = &g_a7b4e0;

        do
        {
            int32_t* valA = *srcS1;

            if (valA)
            {
                (*(*valA + 0x20))(valA);
                int32_t* valA1 = *srcS1;
                (*(*valA1 + 8))(valA1);
                *srcS1 = 0;
            }

            i += 1;
            srcS1 = &srcS1[1];
        } while (i < g_a7b638);

        valA3 = g_a7b4f0;
    }

    int32_t valA4 = (*(*valA3 + 8))(valA3);
    g_a7b4f0 = 0;
    g_a7b638 = 0;
    return valA4;
}
