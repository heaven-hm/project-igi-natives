// IGI native provenance: PhysicsTerrain_Invoke8 - 0x004F3940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3940-PhysicsTerrain_Invoke8.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_Invoke8.h"

int32_t PhysicsTerrain_Invoke8(int32_t arg1, char* arg2)

{
    if (!arg2 || !*arg2)
    {
        int32_t* i = *(arg1 + 8);

        if (*i && i)
        {
            int32_t afa7e0_1 = g_afa7e0;

            do
            {
                int32_t* edx_1 = *i;
                void* eax_3;

                if (!edx_1)
                    eax_3 = nullptr;
                else
                {
                    int32_t result_val = *edx_1;
                    int32_t eax_1 = -(result_val);
                    eax_3 = (eax_1 - eax_1) & edx_1;
                }

                *((afa7e0_1 << 2) + &g_afa6e0) = eax_3;
                g_afa7e0 = afa7e0_1 + 1;
                uint32_t eax_5 = Script_ParseEnumReal32_8();
                int32_t ecx_2 = 0;
                ecx_2 = i[7];
                int32_t eax_9 = *(((eax_5 * 0x180 + ecx_2) << 2) + &g_a96ae0);

                if (eax_9)
                    eax_9(i, 0);

                afa7e0_1 = g_afa7e0 - 1;
                g_afa7e0 = afa7e0_1;
                i = *((afa7e0_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    Script_FormatString_14(arg1, 0);
    Script_Isexists(arg1 + 0x200f8, arg1);
    return 0;
}
