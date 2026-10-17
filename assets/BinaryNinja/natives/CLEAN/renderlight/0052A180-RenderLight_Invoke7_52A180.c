// IGI native provenance: RenderLight_Invoke7_52A180 - 0x0052A180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052A180-RenderLight_Invoke7_52A180.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke7_52A180.h"

int32_t* RenderLight_Invoke7_52A180(void* arg1)

{
    if (data_c28c9b & 0x80)
        *(arg1 + 0x19f) = 0;

    char data_val = *(arg1 + 0x19f);
    *(arg1 + 0xd4) = 0;

    if (data_val)
        *(arg1 + 0xd4) = 1;

    return Light_RenderLensflare_7(arg1);
}
