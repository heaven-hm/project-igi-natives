#include "004D3210-Render_ClipMesh_5.h"
/* 0x004d3210 Render_ClipMesh_5 full linked: callers=3 callees=2 */
int32_t sub_4d3210(int32_t a1, int32_t* a2)

{
    int32_t result = 0;
    int32_t __saved_ecx_1 = *(*a2 * 0xc + &g_a542f0);

    if (__saved_ecx_1 <= 0)
        return 0;

    int32_t ebx = 0;
    int32_t __saved_ecx = __saved_ecx_1;
    bool cond:0_1;

    do
    {
        void* esi_2 = ebx + a2[2];
        void* eax_2 = *(esi_2 + 0x80);

        if (eax_2)
        {
            *(esi_2 + 4) &= 0xfffeffff;
            result = sub_4d32a0(a1, result, esi_2, eax_2);
            sub_4d3730(esi_2);

            if (!*(esi_2 + 0x80))
                *(esi_2 + 4) &= 0xfff87eff;
        }

        ebx += 0x84;
        cond:0_1 = __saved_ecx != 1;
        __saved_ecx -= 1;
    } while (cond:0_1);
    return result;
}
