// IGI native provenance: Light_ComputeDirectionalLight_5 - 0x005253D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005253D0-Light_ComputeDirectionalLight_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_ComputeDirectionalLight_5.h"
int32_t* Light_ComputeDirectionalLight_5(int32_t* context)

{
    int32_t* result = context;
    void* context_val = *result;

    if (context_val)
    {
        result = *(context_val + 0x2c);
        int32_t source_1 = 0;

        if (result > 0)
        {
            void* dest_1 = context_val + 0x3c;

            do
            {
                Light_RenderLensflare_5(dest_1);
                result = *(context_val + 0x2c);
                source_1 += 1;
                dest_1 += 0x2c;
            } while (source_1 < result);
        }
    }

    return result;
}
