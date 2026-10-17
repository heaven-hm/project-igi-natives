// Original IGI.EXE function: Physics_EvaluateAreaCriteria_10 (VA 0x00509E90; static CFG gate PASS, CFG score 1.000).
#include "Physics_EvaluateAreaCriteria_10.h"
int32_t* Physics_EvaluateAreaCriteria_10()

{
    int32_t* data_3 = g_a7b4f0;

    if (!data_3)
    {
        g_a7b638 = 0;
        return data_3;
    }

    int32_t i = 0;

    if (g_a7b638 > 0)
    {
        int32_t* source_1 = &g_a7b4e0;

        do
        {
            int32_t* data_val = *source_1;

            if (data_val)
            {
                (*(*data_val + 0x20))(data_val);
                int32_t* data_1 = *source_1;
                (*(*data_1 + 8))(data_1);
                *source_1 = 0;
            }

            i += 1;
            source_1 = &source_1[1];
        } while (i < g_a7b638);

        data_3 = g_a7b4f0;
    }

    int32_t data_4 = (*(*data_3 + 8))(data_3);
    g_a7b4f0 = 0;
    g_a7b638 = 0;
    return data_4;
}
