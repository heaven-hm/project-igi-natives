#include "004DCBA0-Render_TransformVertices_14.h"
/* 0x004dcba0 Render_TransformVertices_14 full linked: callers=3 callees=1 */
void* sub_4dcba0(int32_t* a1, void* a2)

{
    void* result = a2;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            int32_t edx_2 = a1[2];
            void* ecx_2 = *(*(*i[0x1b] + 0xc) + 0xc);
            int32_t* eax_4 = *(a1[1] + (edx_2 << 2)) * a1[4] + *a1;
            *(a1[5] + eax_4) = edx_2;
            a1[2] += 1;
            *eax_4 = *(ecx_2 + 0x50);
            eax_4[1] = *(ecx_2 + 0x54);
            eax_4[2] = *(ecx_2 + 0x58);
            eax_4[3] = *(ecx_2 + 0x5c);
            result = sub_4dcba0(a1, i);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return result;
}
