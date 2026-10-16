#include "00504970-AreaActivate_LoadParameters.h"
/* 0x00504970 AreaActivate_LoadParameters full linked: callers=0 callees=3 */
void* sub_504970(void* a1)

{
    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_1 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        (*(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0))(a1);
    }

    void* result = *(a1 + 0xb0);

    if (result)
    {
        result = sub_4b0d10(result);
        *(a1 + 0xb0) = 0;
    }

    return result;
}
