#include "00437D50-Smoke_Setup.h"
/* 0x00437d50 Smoke_Setup full linked: callers=0 callees=3 */
char* Smoke_Setup(void* a1)

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

    return sub_4f1340(a1 + 0xa4);
}
