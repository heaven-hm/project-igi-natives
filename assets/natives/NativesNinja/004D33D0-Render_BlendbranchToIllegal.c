#include "004D33D0-Render_BlendbranchToIllegal.h"
/* 0x004d33d0 Render_BlendbranchToIllegal full linked: callers=6 callees=2 */
int32_t sub_4d33d0(int32_t a1, int32_t a2, void* a3, int32_t* a4)

{
    int32_t ecx = *a4;

    if (ecx == 1)
    {
        void* eax = a4[1];
        int32_t ecx_1 = *(eax + 8);

        if (!ecx_1)
            return a2;

        return ecx_1(a1, a2, a3, *(eax + 0x10));
    }

    if (!ecx)
        return sub_4d32a0(a1, a2, a3, a4[1]);

    Error_Show("BlendBranch to illegal target");

    while (true)
        /* nop */
}
