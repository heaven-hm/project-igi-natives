#include "004D2E40-Render_DrawSplineMesh_5.h"
/* 0x004d2e40 Render_DrawSplineMesh_5 full linked: callers=1 callees=2 */
void* sub_4d2e40(int32_t* a1)

{
    int32_t i = 0;

    if (*(*a1 * 0xc + &g_a542f0) > 0)
    {
        int32_t edi_1 = 0;

        do
        {
            void* eax_2 = *(edi_1 + a1[2] + 0x80);

            if (eax_2)
                sub_4d34a0(eax_2);

            i += 1;
            *(edi_1 + a1[2] + 0x80) = 0;
            edi_1 += 0x84;
        } while (i < *(*a1 * 0xc + &g_a542f0));
    }

    void* result = a1[2];

    if (result)
    {
        result = sub_4b0d10(result);
        a1[2] = 0;
    }

    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return result;
}
