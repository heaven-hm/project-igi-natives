// IGI native provenance: FX_TrailUpdate_14 - 0x00489ED0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489ED0-FX_TrailUpdate_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_TrailUpdate_14.h"
int32_t FX_TrailUpdate_14(int32_t context, int32_t param_2, int32_t param_3, float param_4)

{
    return Render_BindTexture_9(context + 0x68, 1, 5, context + 0x650, param_2, param_3, param_4);
}
