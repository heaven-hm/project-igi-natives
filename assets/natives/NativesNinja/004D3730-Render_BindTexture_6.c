#include "004D3730-Render_BindTexture_6.h"
/* 0x004d3730 Render_BindTexture_6 full linked: callers=1 callees=1 */
int32_t* sub_4d3730(void* a1)

{
    int32_t* result = *(a1 + 0x80);

    if (result)
    {
        result = sub_4d3750(result);
        *(a1 + 0x80) = result;
    }

    return result;
}
