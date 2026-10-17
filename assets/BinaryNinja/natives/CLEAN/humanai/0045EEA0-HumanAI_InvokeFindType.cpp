// IGI native provenance: HumanAI_InvokeFindType - 0x0045EEA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045EEA0-HumanAI_InvokeFindType.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_InvokeFindType.h"

char* HumanAI_InvokeFindType(int32_t* arg1)

{
    int32_t i_2 = 0x20;
    char* result = &arg1[0x235];
    int32_t i;

    do
    {
        *result = 0;
        result = &result[0x21];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    result = arg1[0x1f2];
    arg1[0x214] = 0;

    if (result)
        return QTask_FindType(arg1);

    int32_t* i_1 = arg1[2];

    if (*i_1 && i_1)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i_1;
            void* eax_4;

            if (!esi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *esi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & esi_1;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = eax_4;
            int32_t afa7e0_2 = afa7e0_1 + 1;
            int32_t eax_5 = 0;
            g_afa7e0 = afa7e0_2;
            eax_5 = i_1[7];
            result = *((eax_5 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i_1);
                afa7e0_2 = g_afa7e0;
            }

            i_1 = *((afa7e0_2 << 2) + &g_afa6dc);
            afa7e0_1 = afa7e0_2 - 1;
            g_afa7e0 = afa7e0_1;
        } while (i_1);
    }

    return result;
}
