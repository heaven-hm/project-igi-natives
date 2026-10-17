// IGI native provenance: RenderLight_Invoke18 - 0x0052CAD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052CAD0-RenderLight_Invoke18.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke18.h"

int32_t RenderLight_Invoke18(void* arg1)

{
    int32_t result = *(arg1 + 0x78);

    if (result)
        result = Sys_CloseFileStream_18(result);

    return result;
}
