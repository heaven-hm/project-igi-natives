// IGI native provenance: StatusScreen_OnEvent1 - 0x00486CD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00486CD0-StatusScreen_OnEvent1.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StatusScreen_OnEvent1.h"

int32_t StatusScreen_OnEvent1(void* pThis)

{
    long double fpu_val_7_1 = *(pThis + 0x4e8) + 0.0666666701f;
    *(pThis + 0x4e8) = fpu_val_7_1;
    long double temp0 = 2.0f;
    fpu_val_7_1 - temp0;
    int32_t result_1;
    result_1 = (fpu_val_7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, temp0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result_1 + 1) & 0x41))
        *(pThis + 0x4e8) = 0;

    int32_t* i = *(pThis + 8);

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
