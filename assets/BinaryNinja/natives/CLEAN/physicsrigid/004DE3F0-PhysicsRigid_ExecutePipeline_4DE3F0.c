// IGI native provenance: PhysicsRigid_ExecutePipeline_4DE3F0 - 0x004DE3F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DE3F0-PhysicsRigid_ExecutePipeline_4DE3F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_ExecutePipeline_4DE3F0.h"

int32_t* PhysicsRigid_ExecutePipeline_4DE3F0(void* arg1, void* arg2)

{
    (*((*g_548694 << 2) + &g_a9ace0))(arg1, arg2);
    int32_t* result = *(arg1 + 0x148);

    if (result)
    {
        result = result[2];

        if (*result)
        {
            for (int32_t* i = result; i; i = result)
            {
                void var_198;
                __builtin_memcpy(&var_198, arg2, 0x98);
                int32_t var_104_1 = 1;
                int32_t var_100[0x40];
                int32_t (* var_190_1)[0x40] = &var_100;
                int32_t ecx_1 = *(arg2 + 4);

                if (ecx_1 > 0)
                    __builtin_memset(&var_100, 0, ecx_1 << 2);

                int32_t edx_1 = 0;
                edx_1 = i[7];
                (*((edx_1 << 2) + &g_a9ace0))(i, &var_198);
                int32_t j = 0;

                if (*(arg2 + 4) > 0)
                {
                    do
                    {
                        int32_t ecx_3 = *(arg2 + 8);

                        if (*(ecx_3 + (j << 2)) && !(*var_190_1)[j])
                            *(ecx_3 + (j << 2)) = 0;

                        j += 1;
                    } while (j < *(arg2 + 4));
                }

                result = *i;

                if (!result)
                    break;

                if (!*result)
                    break;
            }
        }
    }

    return result;
}
