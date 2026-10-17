// IGI native provenance: HumanAI_Invoke18_460A70 - 0x00460A70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460A70-HumanAI_Invoke18_460A70.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke18_460A70.h"

double* HumanAI_Invoke18_460A70(int32_t* arg1)

{
    double* result = *AI_CombatTarget_18();

    if (result > 0)
    {
        int32_t esi_1 = 8;
        double* ebx_1 = result;
        double* i;

        do
        {
            double* eax_2 = *(AI_CombatTarget_18() + esi_1) + 0x20;
            result = Physics_InterpolateWaypoint_3(*arg1, eax_2);

            if (result)
                arg1[1] += 1;

            esi_1 += 4;
            i = ebx_1;
            ebx_1 -= 1;
        } while (i != 1);
    }

    return result;
}
