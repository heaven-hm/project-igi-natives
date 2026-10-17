// IGI native provenance: Sound_Invoke15 - 0x004E8AA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8AA0-Sound_Invoke15.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke15.h"

int32_t Sound_Invoke15(void* arg1, int32_t* arg2)

{
    int32_t result = arg2[1];

    if (!result)
    {
        char* result_val = *arg2;
        int32_t base_val;
        int32_t var_c_1 = base_val;
        char* esi_1 = arg1 + 0xdf;

        while (true)
        {
            char edx_1 = *result_val;
            char ebx_1 = *esi_1;
            bool c_1 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                if (!edx_1)
                {
                    result = 0;
                    break;
                }

                edx_1 = result_val[1];
                ebx_1 = esi_1[1];
                c_1 = edx_1 < ebx_1;

                if (edx_1 == ebx_1)
                {
                    result_val = &result_val[2];
                    esi_1 = &esi_1[2];

                    if (edx_1)
                        continue;

                    result = 0;
                    break;
                }
            }

            result = result_val - result_val + 1;
            break;
        }

        if (!result)
            arg2[1] = arg1;
    }

    return result;
}
