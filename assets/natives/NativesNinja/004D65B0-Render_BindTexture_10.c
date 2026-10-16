#include "004D65B0-Render_BindTexture_10.h"
/* 0x004d65b0 Render_BindTexture_10 full linked: callers=32 callees=1 */
void* sub_4d65b0(void* a1, int32_t a2, int32_t a3)

{
    void* result = sub_4d6460(a1, a2);
    *(result + 0x2c) = a3;
    return result;
}
