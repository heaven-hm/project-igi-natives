#include "00490E90-Display_ClearSurfaces_2.h"
/* 0x00490e90 Display_ClearSurfaces_2 full linked: callers=3 callees=2 */
HRESULT sub_490e90(void* a1, int32_t a2, uint32_t a3, int32_t a4, int32_t a5)

{
    HRESULT eax_1 =
        AVIStreamRead(*(a1 + 0x9c), a2, 1, *(a1 + 0x160), *(a1 + 0x140), nullptr, nullptr);

    if (eax_1)
    {
        eax_1 = 0;
        return eax_1;
    }

    uint32_t eax_4 = ICDecompress(*(a1 + 0x15c), a3, a1 + 0x12c, *(a1 + 0x160),
        *(a1 + 0x154), *(a1 + 0x164));

    if (eax_4)
    {
        eax_4 = 0;
        return eax_4;
    }

    *(a1 + 0x1c) = a2;
    eax_4 = 1;
    return eax_4;
}
