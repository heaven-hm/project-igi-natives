// IGI native provenance: HumanAI_Invoke18_460A10 - 0x00460A10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460A10-HumanAI_Invoke18_460A10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke18_460A10.h"

double* HumanAI_Invoke18_460A10(int32_t* arg1)

{
    int32_t i_1 = *AI_CombatTarget_18();
    double* result = Physics_ApplyImpulse_3(*arg1);
    double* result_1 = result;

    if (i_1 > 0)
    {
        int32_t esi_1 = 8;
        int32_t i;

        do
        {
            result = *(AI_CombatTarget_18() + esi_1);

            if (*((*(result + 0xfc) << 2) + &g_5bdad8) & result_1)
            {
                result = Physics_InterpolateWaypoint_3(*arg1, &result[4]);

                if (result)
                    arg1[1] += 1;
            }

            esi_1 += 4;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
