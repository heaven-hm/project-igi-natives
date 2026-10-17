// Original IGI.EXE function: EditVariable_Init_2 (VA 0x00488700; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_Init_2.h"

void* EditVariable_Init_2(void* pThis)

{
    void* result_1 = pThis;
    int32_t* i = *(result_1 + 8);

    if (*i && i)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* source_ptr_1 = *i;
            void* result_val_3;

            if (!source_ptr_1)
                result_val_3 = nullptr;
            else
            {
                int32_t result_val = *source_ptr_1;
                int32_t result_val_1 = -(result_val);
                result_val_3 = (result_val_1 - result_val_1) & source_ptr_1;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = result_val_3;
            int32_t afa7e0_2 = afa7e0_1 + 1;
            int32_t result_val_4 = 0;
            g_afa7e0 = afa7e0_2;
            result_val_4 = i[7];
            result_1 = *((result_val_4 << 2) + &g_a970e0);

            if (result_1)
            {
                result_1 = result_1(i);
                afa7e0_2 = g_afa7e0;
            }

            i = *((afa7e0_2 << 2) + &g_afa6dc);
            afa7e0_1 = afa7e0_2 - 1;
            g_afa7e0 = afa7e0_1;
        } while (i);
    }

    return result_1;
}
