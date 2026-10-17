// IGI native provenance: PhysicsTerrain_Invoke3_4F4560 - 0x004F4560 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F4560-PhysicsTerrain_Invoke3_4F4560.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_Invoke3_4F4560.h"

int32_t* PhysicsTerrain_Invoke3_4F4560(int32_t* arg1)

{
    int32_t* a76c40_1 = g_a76c40;

    if (a76c40_1)
    {
        int32_t ecx_1 = *a76c40_1;

        if (ecx_1 > 0)
        {
            int32_t* esi_1 = 8;
            int32_t ebx_1 = ecx_1;

            while (true)
            {
                a76c40_1 = Physics_InterpolateWaypoint_3(*arg1, *(esi_1 + a76c40_1) + 0x20);

                if (a76c40_1)
                    arg1[1] += 1;

                esi_1 = &esi_1[1];
                int32_t temp0_1 = ebx_1;
                ebx_1 -= 1;

                if (temp0_1 == 1)
                    break;

                a76c40_1 = g_a76c40;
            }
        }
    }

    return a76c40_1;
}
