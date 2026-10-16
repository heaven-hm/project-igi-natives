#include "004426D0-SCamera_Process.h"
/* 0x004426d0 SCamera_Process full linked: callers=0 callees=6 */
void* sub_4426d0(void* a1)

{
    sub_4896a0(a1);

    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_1 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_5 = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_5)
            eax_5(a1);
    }

    sub_4f1340(a1 + 0x174);
    sub_4dcdd0(a1);
    return sub_4c7560(*(a1 + 0x68), a1);
}
