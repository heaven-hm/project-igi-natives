// IGI native provenance: MenuItem_Init_2 - 0x00505510 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00505510-MenuItem_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuItem_Init_2.h"

void* MenuItem_Init_2(void* pThis, int32_t param)

{
    void* result = pThis;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* scratch_val_1 = *i;
            void* result_val_3;

            if (!scratch_val_1)
                result_val_3 = nullptr;
            else
            {
                int32_t result_val = *scratch_val_1;
                int32_t result_val_1 = -(result_val);
                result_val_3 = (result_val_1 - result_val_1) & scratch_val_1;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = result_val_3;
            g_afa7e0 = afa7e0_1 + 1;
            uint32_t result_val_5 = EditRigidObjAttachedToBone_Action();
            int32_t scratch_val_2 = 0;
            scratch_val_2 = i[7];
            result = *(((result_val_5 * 0x180 + scratch_val_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, param);

            afa7e0_1 = g_afa7e0 - 1;
            g_afa7e0 = afa7e0_1;
            i = *((afa7e0_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
