// IGI native provenance: PhysicsTerrain_ExecutePipeline_4F0580 - 0x004F0580 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0580-PhysicsTerrain_ExecutePipeline_4F0580.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_ExecutePipeline_4F0580.h"

void* PhysicsTerrain_ExecutePipeline_4F0580(void* arg1)

{
    int32_t* i = *(arg1 + 8);

    if (*i && i)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_3;

            if (!esi_1)
                eax_3 = nullptr;
            else
            {
                int32_t result_val = *esi_1;
                int32_t eax_1 = -(result_val);
                eax_3 = (eax_1 - eax_1) & esi_1;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = eax_3;
            int32_t afa7e0_2 = afa7e0_1 + 1;
            int32_t eax_4 = 0;
            g_afa7e0 = afa7e0_2;
            eax_4 = i[7];
            int32_t eax_5 = *((eax_4 << 2) + &g_a970e0);

            if (eax_5)
            {
                eax_5(i);
                afa7e0_2 = g_afa7e0;
            }

            i = *((afa7e0_2 << 2) + &g_afa6dc);
            afa7e0_1 = afa7e0_2 - 1;
            g_afa7e0 = afa7e0_1;
        } while (i);
    }

    void* a758a4_1 = g_a758a4;
    *(a758a4_1 + 0x24) += *(a758a4_1 + 0x30);
    void* a758a4_2 = g_a758a4;
    *(a758a4_2 + 0x28) += 1;
    return a758a4_2;
}
