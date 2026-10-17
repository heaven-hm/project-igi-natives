// IGI native provenance: Light_RenderLensflare_5 - 0x00525410 - CFG score 72.2% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00525410-Light_RenderLensflare_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_RenderLensflare_5.h"
int32_t Light_RenderLensflare_5(void* context)

{
    Qhash_Init(1);
    int16_t entity_1 = *(context + 0x28);
    Sys_OpenFileStream_8(context, 0, entity_1 << 2, entity_1, *(context + 0x2a), 3, *(context + 0x24));
    /* tailcall */
    return Qhash_Reset();
}
