// IGI native provenance: Display_ClearSurfaces_2 - 0x00490E90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490E90-Display_ClearSurfaces_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces_2.h"
HRESULT Display_ClearSurfaces_2(void* context, int32_t param_2, uint32_t param_3, int32_t param_4, int32_t param_5)

{
    HRESULT data_1 =
        AVIStreamRead(*(context + 0x9c), param_2, 1, *(context + 0x160), *(context + 0x140), nullptr, nullptr);

    if (data_1)
    {
        data_1 = 0;
        return data_1;
    }

    uint32_t data_4 = ICDecompress(*(context + 0x15c), param_3, context + 0x12c, *(context + 0x160),
        *(context + 0x154), *(context + 0x164));

    if (data_4)
    {
        data_4 = 0;
        return data_4;
    }

    *(context + 0x1c) = param_2;
    data_4 = 1;
    return data_4;
}
