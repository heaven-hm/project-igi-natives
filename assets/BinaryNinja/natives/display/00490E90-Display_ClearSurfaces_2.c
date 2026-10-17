// Original IGI.EXE function: Display_ClearSurfaces_2 (VA 0x00490E90; static CFG gate PASS, CFG score 1.000).
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
