#include "0051F2E0-SmoothQTask_Process.h"
/* 0x0051f2e0 SmoothQTask_Process full linked: callers=0 callees=3 */
char* sub_51f2e0(void* a1)

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

    return sub_4f1340(a1 + 0xa8);
}
