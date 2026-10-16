#include "004D36E0-Render_ComputeNormals_6.h"
/* 0x004d36e0 Render_ComputeNormals_6 full linked: callers=3 callees=1 */
int32_t sub_4d36e0(void* a1)

{
    void* var_c = a1;
    int32_t result = *(a1 + 0x10);

    if (result)
        result = result(*(a1 + 0x18));

    *(a1 + 0x18) = 0;
    *(a1 + 0x10) = 0;
    *(a1 + 0xc) = 0;
    *(a1 + 0x14) = 0;
    return result;
}
