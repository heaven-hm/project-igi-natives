#include "004856D0-StatusMessage_Setup.h"
/* 0x004856d0 StatusMessage_Setup full linked: callers=0 callees=4 */
void* sub_4856d0(void* a1)

{
    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_1 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_5 = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_5)
            eax_5(a1);
    }

    sub_4f1340(a1 + 0x60);
    void* result = *(a1 + 0xb0);

    if (result)
    {
        result = sub_4b0d10(result);
        *(a1 + 0xb0) = 0;
    }

    return result;
}
