// Original IGI.EXE function: DynObj_FindSymbol_2 (VA 0x004C03F0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_2.h"
void DynObj_FindSymbol_2(int32_t* context)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    int32_t* context_val = nullptr;
    int32_t item_4 = 0;

    if (context[1] <= 0)
        return;

    bool flag_0_1;

    do
    {
        int32_t* i_1 = *(context_val + *context);

        for (int32_t* i = *i_1; i; i = *i)
        {
            Camera_ApplyHandiCam_33(i_1);
            void* data_2 = i_1[3];

            if (data_2)
            {
                Sys_ExecuteBytecode_2(data_2);
                i_1[3] = 0;
            }

            Sys_ExecuteBytecode_2(i_1);
            i_1 = i;
        }

        context_val = &context_val[3];
        flag_0_1 = item_4 + 1 < context[1];
        item_4 += 1;
    } while (flag_0_1);
}
