// Original IGI.EXE function: DynObj_LinkDynamicCube (VA 0x004C02C0; static CFG gate FAIL, CFG score 0.833).
#include "DynObj_LinkDynamicCube.h"
int32_t DynObj_LinkDynamicCube(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t i_2;
    int32_t i_1 = i_2;
    int32_t data_val = g_a44314;
    int32_t context_val = 0;

    if (!data_val)
        return DynObj_UpdateDynTree(context, param_2, param_3);

    i_1 = 0;

    if (context[1] <= 0)
        return data_val;

    int32_t i;

    do
    {
        int32_t* j_1 = *(*context + context_val);

        for (int32_t* j = *j_1; j; j = *j)
        {
            if (g_a44314(j_1[2], j_1[3], g_a44318))
                param_2(j_1[2], j_1[3], param_3);

            j_1 = j;
        }

        i = i_1 + 1;
        context_val += 0xc;
        i_1 = i;
    } while (i < context[1]);

    return i;
}
