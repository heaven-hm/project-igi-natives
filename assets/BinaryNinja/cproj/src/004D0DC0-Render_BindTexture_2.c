#include "gi_platform.h"
#include "004D0DC0-Render_BindTexture_2.h"
int32_t Render_BindTexture_2(void* a1, int32_t a2, int32_t a3)

{
    int32_t result = (*(int32_t*)(uintptr_t)(*(a1 + 0xc) + 0x14));
    (*(int32_t*)(uintptr_t)(result + a2 * 0x14 + 4)) = a3;
    return result;
}
