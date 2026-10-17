// IGI native provenance: DisplayRender_ProcessMeshformatnotsup - 0x0049FE60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049FE60-DisplayRender_ProcessMeshformatnotsup.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ProcessMeshformatnotsup.h"

int32_t DisplayRender_ProcessMeshformatnotsup(int32_t* arg1)

{
    void* data_val = *arg1;
    int32_t result_val = *(data_val + 0x20);
    int32_t result;

    if (!result_val)
    {
        result = 0;
        __builtin_memset(*(data_val + 0x24) + 0x18, 0, 0x18);
    }
    else
    {
        result = result_val - 1;

        if (result_val != 1)
        {
            if (result == 2)
            {
                __builtin_memset(*(data_val + 0x24) + 0x20, 0, 0x18);
                return 0;
            }

            Error_Show("Mesh format not supported");

            while (true)
                /* nop */
        }
    }

    return result;
}
