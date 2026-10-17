// IGI native provenance: IntroScreen_Setup - 0x00415450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00415450-IntroScreen_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "IntroScreen_Setup.h"
void* IntroScreen_Setup(void* context)

{
    int32_t data_val = *(context + 0x30);

    if (data_val)
        Resource_Flush(data_val);

    void* result = *(context + 0x2c);

    if (result)
        result = Display_CreateSurface(result);

    return result;
}
