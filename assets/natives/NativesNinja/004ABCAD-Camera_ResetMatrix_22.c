#include "004ABCAD-Camera_ResetMatrix_22.h"
/* 0x004abcad Camera_ResetMatrix_22 full linked: callers=1 callees=1 */
int32_t sub_4abcad()

{
    int32_t result = 0xffffffff;
    int32_t edi = 0;
    int32_t esi = 0;

    for (int32_t* i = &g_c32440; i < &g_c32540; )
    {
        int32_t* eax_1 = *i;

        if (!eax_1)
        {
            int32_t* eax_5 = sub_4aa670(0x100);

            if (!eax_5)
                break;

            g_c32540 += 0x20;
            void* j = &eax_5[0x40];
            (&g_c32440)[edi] = eax_5;

            for (; eax_5 < j; j = (&g_c32440)[edi] + 0x100)
            {
                eax_5[1] = 0;
                *eax_5 = 0xffffffff;
                *(eax_5 + 5) = 0xa;
                eax_5 = &eax_5[2];
            }

            return edi << 5;
        }

        while (true)
        {
            if (eax_1 >= &eax_1[0x40])
                goto label_4abce8;

            if (!(eax_1[1] & 1))
                break;

            eax_1 = &eax_1[2];
        }

        *eax_1 = 0xffffffff;
        result = ((eax_1 - *i) >> 3) + esi;

        if (result != 0xffffffff)
            break;

    label_4abce8:
        i = &i[1];
        edi += 1;
        esi += 0x20;
    }

    return result;
}
