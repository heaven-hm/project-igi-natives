// IGI native provenance: Menu_DrawWidget_15 - 0x004252E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004252E0-Menu_DrawWidget_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_DrawWidget_15.h"
int32_t* Menu_DrawWidget_15(void* context)

{
    int32_t* result;

    if (!*(context + 0xa8))
    {
        result = *(context + 0x120);

        if (result)
        {
            if (*result)
            {
                *(context + 0xb2) = 1;
                return result;
            }

            *(context + 0xb2) = 0;
        }
    }
    else
    {
        result = SoundSys_SetFrequency_8(context + 0xb8);
        *(context + 0xb2) = result;

        if (result)
            return SoundSys_Update3DPosition_8(context + 0xb8);
    }

    return result;
}
