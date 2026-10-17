// IGI native provenance: FX_TrailUpdate_7 - 0x004868D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004868D0-FX_TrailUpdate_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_TrailUpdate_7.h"
void StatusList_Clear(void* context)

{
    int32_t i = 0;
    char* dest_val = context + 0x40;

    do
    {
        if (*dest_val)
            FX_SmokeEmit_6(context, i);

        i += 1;
        dest_val = &dest_val[0x102c];
    } while (i < 0x18);
}
