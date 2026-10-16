#include "00488160-FX_FragmentSimulate_10.h"
/* 0x00488160 FX_FragmentSimulate_10 full linked: callers=2 callees=4 */
int32_t sub_488160(void* a1)

{
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        do
        {
            int32_t* eax_1 = *i;
            int32_t* i_2 = i;

            if (!eax_1)
                i = nullptr;
            else
            {
                int32_t esi = *eax_1;
                int32_t esi_1 = -(esi);
                i = (esi_1 - esi_1) & eax_1;
            }

            sub_488160(i_2);
        } while (i);
    }

    int32_t* eax_2 = *(a1 + 0x24);

    if (eax_2)
    {
        int32_t i_1 = 0;

        if (*eax_2 > 0)
        {
            do
            {
                sub_4b0d10(*(*(a1 + 0x28) + (i_1 << 2)));
                *(*(a1 + 0x28) + (i_1 << 2)) = 0;
                i_1 += 1;
            } while (i_1 < **(a1 + 0x24));
        }

        sub_4b0d10(*(a1 + 0x28));
        *(a1 + 0x28) = 0;
    }

    return sub_4b0d10(a1);
}
