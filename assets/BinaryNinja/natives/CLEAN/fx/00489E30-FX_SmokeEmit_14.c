// IGI native provenance: FX_SmokeEmit_14 - 0x00489E30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489E30-FX_SmokeEmit_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_SmokeEmit_14.h"
int32_t* FX_SmokeEmit_14(void* context)

{
    int32_t i = 0;
    *(context + 0x254) = 0;
    int32_t* dest_val = context + 0x260;
    int32_t* result;

    do
    {
        result = FX_FragmentSimulate_14(context + 0x254, i);
        *dest_val = 0;
        dest_val[1] = *result;
        i += 1;
        dest_val = &dest_val[2];
    } while (i < 0x11);

    return result;
}
